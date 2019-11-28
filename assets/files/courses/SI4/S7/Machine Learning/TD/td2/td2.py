from skimage import feature
from keras.datasets import mnist
from skimage import transform
from sklearn import ensemble
from sklearn.metrics import confusion_matrix
import numpy as np

(x_train, y_train), (x_test, y_test) = mnist.load_data()

x_train4 = x_train[y_train == 4, :]
x_train8 = x_train[y_train == 8, :]

x_test4 = x_test[y_test == 4, :]
x_test8 = x_test[y_test == 8, :]


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

x_train, y_train, x_test, y_test = x_train[:int((len(x_train) / 2))], y_train[:int((len(y_train) / 2))], \
                                   x_test[:int((len(x_test) / 2))], y_test[:int((len(y_test) / 2))]

fc, ft = feature.haar_like_feature_coord(28, 28, ['type-2-x', 'type-2-y'])

radius = 30
feat_coord, feat_type = feature.haar_like_feature_coord(28, 28, ['type-2-x', 'type-2-y'])

# reducing the number of filters
i = 0
while i < len(feat_coord):
    if (feat_coord[i][0][1][0] - feat_coord[i][0][0][0]) ** 2 + (
            feat_coord[i][0][1][1] - feat_coord[i][0][0][1]) ** 2 < radius:
        feat_coord = np.delete(feat_coord, i)
        feat_type = np.delete(feat_type, i)
    else:
        i += 1

# one over
feat_coord = feat_coord[::8]
feat_type = feat_type[::8]
print('features', feat_coord.shape)

first = True
for image in x_train:
    int_image = transform.integral_image(image)
    features = feature.haar_like_feature(int_image, 0, 0, 28, 28, feature_type=feat_type, feature_coord=feat_coord)
    if first:
        ftrain = [features]
    else:
        ftrain = np.append(ftrain, [features], axis=0)
    first = False

# TRAINING
myboosting = ensemble.AdaBoostClassifier(n_estimators=50, learning_rate=1.0, algorithm='SAMME.R')
myboosting.fit(ftrain, y_train)

first = True
for image in x_test:
    int_image = transform.integral_image(image)
    features = feature.haar_like_feature(int_image, 0, 0, 28, 28, feature_type=feat_type, feature_coord=feat_coord)
    if first:
        ftest = [features]
    else:
        ftest = np.append(ftest, [features], axis=0)
    first = False

# evaluation
y_pred = myboosting.predict(ftest)
print('confusion matrix', confusion_matrix(y_test, y_pred))
