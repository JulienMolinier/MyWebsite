from keras.applications.vgg16 import VGG16
from keras.preprocessing import image
from keras.applications.vgg16 import preprocess_input
from sklearn import ensemble, metrics
import numpy as np
import os

from sklearn.linear_model import LogisticRegression
from sklearn.metrics import confusion_matrix

os.environ['TF_CPP_MIN_LOG_LEVEL'] = '2'

model = VGG16(weights='imagenet', include_top=False, pooling='max')

xTrain = []
yTrain = []
xTest = []
yTest = []

nectarine_train = os.listdir('D:/fruits-360_dataset/fruits-360/Training/Nectarine')
peach_train = os.listdir('D:/fruits-360_dataset/fruits-360/Training/Peach')
banana_train = os.listdir('D:/fruits-360_dataset/fruits-360/Training/Banana')
banana_red_train = os.listdir('D:/fruits-360_dataset/fruits-360/Training/Banana Red')

nectarine_test = os.listdir('D:/fruits-360_dataset/fruits-360/Test/Nectarine')
peach_test = os.listdir('D:/fruits-360_dataset/fruits-360/Test/Peach')
banana_test = os.listdir('D:/fruits-360_dataset/fruits-360/Test/Banana')
banana_red_test = os.listdir('D:/fruits-360_dataset/fruits-360/Test/Banana Red')

for file in nectarine_train:
    img_path = 'D:/fruits-360_dataset/fruits-360/Training/Nectarine/' + file
    img = image.load_img(img_path, target_size=(100, 100))
    x = image.img_to_array(img)
    x = np.expand_dims(x, axis=0)
    x = preprocess_input(x)
    xTrain.append(model.predict(x).flatten('F'))
    yTrain.append(0)
print("Nectarine Train")

for file in peach_train:
    img_path = 'D:/fruits-360_dataset/fruits-360/Training/Peach/' + file
    img = image.load_img(img_path, target_size=(100, 100))
    x = image.img_to_array(img)
    x = np.expand_dims(x, axis=0)
    x = preprocess_input(x)
    xTrain.append(model.predict(x).flatten('F'))
    yTrain.append(1)
print("Peach Train")

for file in banana_train:
    img_path = 'D:/fruits-360_dataset/fruits-360/Training/Banana/' + file
    img = image.load_img(img_path, target_size=(100, 100))
    x = image.img_to_array(img)
    x = np.expand_dims(x, axis=0)
    x = preprocess_input(x)
    xTrain.append(model.predict(x).flatten('F'))
    yTrain.append(2)
print("Banana Train")

for file in banana_red_train:
    img_path = 'D:/fruits-360_dataset/fruits-360/Training/Banana Red/' + file
    img = image.load_img(img_path, target_size=(100, 100))
    x = image.img_to_array(img)
    x = np.expand_dims(x, axis=0)
    x = preprocess_input(x)
    xTrain.append(model.predict(x).flatten('F'))
    yTrain.append(3)
print("Banana Red Train")

for file in nectarine_test:
    img_path = 'D:/fruits-360_dataset/fruits-360/Test/Nectarine/' + file
    img = image.load_img(img_path, target_size=(100, 100))
    x = image.img_to_array(img)
    x = np.expand_dims(x, axis=0)
    x = preprocess_input(x)
    xTest.append(model.predict(x).flatten('F'))
    yTest.append(0)
print("Nectarine Test")

for file in peach_test:
    img_path = 'D:/fruits-360_dataset/fruits-360/Test/Peach/' + file
    img = image.load_img(img_path, target_size=(100, 100))
    x = image.img_to_array(img)
    x = np.expand_dims(x, axis=0)
    x = preprocess_input(x)
    xTest.append(model.predict(x).flatten('F'))
    yTest.append(1)
print("Peach Test")

for file in banana_test:
    img_path = 'D:/fruits-360_dataset/fruits-360/Test/Banana/' + file
    img = image.load_img(img_path, target_size=(100, 100))
    x = image.img_to_array(img)
    x = np.expand_dims(x, axis=0)
    x = preprocess_input(x)
    xTest.append(model.predict(x).flatten('F'))
    yTest.append(2)
print("Banana Test")

for file in banana_red_test:
    img_path = 'D:/fruits-360_dataset/fruits-360/Test/Banana Red/' + file
    img = image.load_img(img_path, target_size=(100, 100))
    x = image.img_to_array(img)
    x = np.expand_dims(x, axis=0)
    x = preprocess_input(x)
    xTest.append(model.predict(x).flatten('F'))
    yTest.append(3)
print("Banana Red Test\n")

print("BOOSTING:")
classifier = ensemble.AdaBoostClassifier(n_estimators=100, learning_rate=1.0)
classifier.fit(xTrain, yTrain)
y_pred = classifier.predict(xTest)
print('Accuracy\n', classifier.score(xTest, yTest))
print('Confusion Matrix\n', confusion_matrix(yTest, y_pred))
print("\nREGRESSION LOGISTIQUE:")
clf = LogisticRegression()
clf.fit(xTrain, yTrain)
predictions = clf.predict(xTest)
score = clf.score(xTest, yTest)
print("Accuracy: ", score)
matrix = metrics.confusion_matrix(yTest, predictions)
print(matrix)
