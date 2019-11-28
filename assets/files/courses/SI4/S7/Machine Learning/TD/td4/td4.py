import numpy as np
from keras.datasets import mnist, fashion_mnist
from sklearn.metrics import confusion_matrix
import keras
import time
from keras.models import Sequential
from keras.layers import Dense, Activation
import matplotlib.pyplot as plt

(xTrain, yTrain), (xTest, yTest) = fashion_mnist.load_data()
nbClasses = 10
nbNeuronsHL = 100

xTrain = xTrain.reshape(60000, 784)
xTest = xTest.reshape(10000, 784)
xTrain = xTrain.astype('float32')
xTest = xTest.astype('float32')
xTrain /= 255
xTest /= 255

yTrain = keras.utils.to_categorical(yTrain, nbClasses)
yTest = keras.utils.to_categorical(yTest, nbClasses)

model = Sequential()
model.add(Dense(nbNeuronsHL, input_dim=784, activation='sigmoid'))
model.add(Dense(nbNeuronsHL, input_dim=nbNeuronsHL, activation='sigmoid'))
model.add(Dense(nbClasses, activation='softmax'))
model.compile(optimizer='sgd', loss='categorical_crossentropy',
              metrics=['accuracy'])

losses = []


class callBackPerso(keras.callbacks.Callback):
    def on_epoch_end(self, epoch, logs=None):
        test = self.model.evaluate(xTest, yTest)
        losses.append(test[0])
        print("%s: %.2f%%" % (model.metrics_names[1], test[1] * 100))


start_time = time.time()
history = model.fit(xTrain, yTrain, validation_split=0.25, epochs=5, batch_size=1024, callbacks=[callBackPerso()])
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
