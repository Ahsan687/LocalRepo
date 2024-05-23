import numpy as np
import multiprocessing as mp
from time import time
import sys
import tensorflow as tf
from tensorflow.keras import layers, models

if(len(sys.argv)==3):
    N_Proc = int(sys.argv[1])
    N_evals = int(sys.argv[2])
else: 
    N_Proc = int(input("Specify number of cores (e.g., 4; use 1 for serial job): "))
    N_evals = int(input("Specify number of evaluations (e.g., 100): "))

Multiplier = 2
# Model parameters
input_shape = (28, 28, 1)
num_classes = 10
# Define the CNN model
def create_model():
    model = models.Sequential([
        layers.Conv2D(32, (3, 3), activation='relu', input_shape=input_shape),
        layers.MaxPooling2D((2, 2)),
        layers.Conv2D(64, (3, 3), activation='relu'),
        layers.MaxPooling2D((2, 2)),
        layers.Conv2D(64, (3, 3), activation='relu'),
        layers.Flatten(),
        layers.Dense(64, activation='relu'),
        layers.Dense(num_classes, activation='softmax')
    ])
    return model


def do_this_job(n):
    # Load dataset (MNIST for example)
    (x_train, y_train), (x_test, y_test) = tf.keras.datasets.mnist.load_data()
    x_train, x_test = x_train / 255.0, x_test / 255.0

    # Add channel dimension for convolutional layers
    x_train = np.expand_dims(x_train, axis=-1)
    x_test = np.expand_dims(x_test, axis=-1)

    # Create model
    model = create_model()

    # Compile model
    model.compile(optimizer='adam',
                  loss='sparse_categorical_crossentropy',
                  metrics=['accuracy'])

    # Train model
    model.fit(x_train, y_train, epochs=5, batch_size=64, verbose=0)

    # Evaluate model
    _, test_accuracy = model.evaluate(x_test, y_test, verbose=0)
    
    return test_accuracy

if N_Proc == 1:
    start_time = time()
    print('Serial calculation')
    accuracies = [do_this_job(n) for n in range(N_evals)]
    mean_accuracy = np.mean(accuracies)
    print('Mean test accuracy: {:.4f}'.format(mean_accuracy))
    print('Time: {:.2f} sec'.format(time() - start_time))
else:
    start_time = time()
    accuracies = []
    pool = mp.Pool(processes=N_Proc)
    print('Pool pooled')
    results = [pool.apply_async(do_this_job, args=(n,)) for n in range(N_evals)]
    print('Results setup')
    for result in results:
        accuracies.append(result.get())
    print('Results got')
    pool.close()
    pool.join()
    print('Pool closed')
    mean_accuracy = np.mean(accuracies)
    print('Mean test accuracy: {:.4f}'.format(mean_accuracy))
    print('Time: {:.2f} sec'.format(time() - start_time))
