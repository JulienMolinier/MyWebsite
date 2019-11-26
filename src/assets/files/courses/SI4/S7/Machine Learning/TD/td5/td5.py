import time
import keras
import matplotlib.pyplot as plt
from keras.utils import to_categorical
from keras.datasets import mnist, fashion_mnist
from keras.models import Sequential
from keras.layers import Dense, Activation, Dropout, Conv2D, MaxPooling2D, Flatten
from sklearn.metrics import confusion_matrix
import os
os.environ['TF_CPP_MIN_LOG_LEVEL'] = '2'

(xTrain, yTrain), (xTest, yTest) = fashion_mnist.load_data()
xTrain = xTrain.reshape(xTrain.shape[0], xTrain.shape[1] * xTrain.shape[2])
xTest = xTest.reshape(xTest.shape[0], xTest.shape[1] * xTest.shape[2])

xTrain = xTrain.astype('float32')
xTest = xTest.astype('float32')
xTrain /= 255
xTest /= 255
xTrain = xTrain.reshape((xTrain.shape[0], 28, 28, 1))
xTest = xTest.reshape((xTest.shape[0], 28, 28, 1))

yTrain = to_categorical(yTrain, 10)
yTest = to_categorical(yTest, 10)

model = Sequential()
model.add(Conv2D(32, kernel_size=(3, 3),
                 activation='relu',
                 input_shape=(28, 28, 1)))
model.add(MaxPooling2D(pool_size=(3, 3)))
model.add(Conv2D(64, kernel_size=(2, 2),
                 activation='relu'))
model.add(MaxPooling2D(pool_size=(2, 2)))
model.add(Dropout(0.10))

model.add(Flatten())

model.add(Dense(128, activation='relu'))
model.add(Dropout(0.20))

model.add(Dense(64, activation='relu'))
model.add(Dense(10, activation='softmax'))

model.compile(optimizer='nadam', loss='categorical_crossentropy', metrics=['accuracy'])

losses = []


class callBackPerso(keras.callbacks.Callback):
    def on_epoch_end(self, epoch, logs=None):
        test = self.model.evaluate(xTest, yTest)
        losses.append(test[0])
        print("%s: %.2f%%" % (model.metrics_names[1], test[1] * 100))


start_time = time.time()
history = model.fit(xTrain, yTrain, validation_split=0.25, epochs=5, batch_size=512, callbacks=[callBackPerso()])
end_time = time.time()
pred = model.predict(xTest)
score = model.evaluate(xTest, yTest)

print("%s: %.2f%%" % (model.metrics_names[1], score[1] * 100))
print("Learning Time: ", end_time - start_time, "s")
matrix = confusion_matrix(yTest.argmax(axis=1), pred.argmax(axis=1))
print(matrix)

plt.plot(history.history['loss'])
plt.plot(history.history['val_loss'])
plt.plot(losses)
plt.title('Model loss by Epoch')
plt.ylabel('loss')
plt.xlabel('epoch')
plt.legend(['train', 'validation', 'test'], loc='upper right')
plt.show()
