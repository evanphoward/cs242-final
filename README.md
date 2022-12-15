# cs242-final

All execution of files was done in Google Colab

## generate_model.ipynb

This file trains the model and saves the model weights to the corresponding ".pt" files for use in "last_layer_dist.ipynb". To switch between MNIST and CIFAR, make sure to run the corresponding dataloader box and flip the `MNIST` flag in the ConvNet block. There shouldn't be any need to use this file since the weights we generated are stored in cifar_data/ and mnist_data/

## last_layer_dist.ipynb

This file saves the weights of the classifier layer, saves a representative sample of data that has been run through a forward inference up to (but not including) the final classifer layer, and saves the corresponding ground truth labels of that dataset. The .pt generated in the previous file must be in the working directory. The `MNIST` flag flips between MNIST and CIFAR, and the `TRAIN` flag flips between the training and testing data from our datasets. There shouldn't be any need to use this file since the data we generated are stored in cifar_data/ and mnist_data/

## clustering.ipynb

This file performs the segmentation and clustering of the second to last layer data distribution, and then plots the accuracy of exact MM vs our centroid-based lookup table based approach. You can switch between using the real world data generated from the previous file by uncommenting code in the 2nd code block or using synthetic gaussian data by running the 3rd code block.

## timing_plots.ipynb

This file performs analysis on the timing of our method against the number of centroids and the number of cores in the target architecture. Code should be able to be run block by block without any configuration to get the plots.