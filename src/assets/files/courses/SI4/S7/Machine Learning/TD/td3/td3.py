from sklearn.linear_model import LogisticRegression
from sklearn import metrics
from keras.datasets import mnist
import numpy as np

# RECUPERATION DES IMAGES
(x_train, y_train), (x_test, y_test) = mnist.load_data()
x_train4 = x_train[y_train == 0, :]
x_train8 = x_train[y_train == 1, :]
x_test4 = x_test[y_test == 0, :]
x_test8 = x_test[y_test == 1, :]


def shuffledata(a, b):
    assert len(a) == len(b)
    p = np.random.permutation(len(a))
    return a[p], b[p]


x_train = np.append(x_train4, x_train8, axis=0)
y_train = np.append(np.full(len(x_train4), -1), np.full(len(x_train8), 1))
(x_train, y_train) = shuffledata(x_train, y_train)

x_test = np.append(x_test4, x_test8, axis=0)
y_test = np.append(np.full(len(x_test4), -1), np.full(len(x_test8), 1))
(x_test, y_test) = shuffledata(x_test, y_test)

# RESHAPE 60K x 784
x_train = x_train.reshape(x_train.shape[0], x_train.shape[1] * x_train.shape[2])
x_test = x_test.reshape(x_test.shape[0], x_test.shape[1] * x_test.shape[2])
print("done")

# LINEAR REGRESSION
clf = LogisticRegression()
clf.fit(x_train, y_train)
print("fit done")

predictions = clf.predict(x_test)
print("predict done")

score = clf.score(x_test, y_test)
print("Accuracy: ", score)

matrix = metrics.confusion_matrix(y_test, predictions)
print(matrix)
