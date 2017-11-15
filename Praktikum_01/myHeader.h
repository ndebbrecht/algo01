#ifndef MYHEADER_H
#define MYHEADER_H

#define RAND_MAX 100000

#include <time.h>
#include <stdlib.h>
#include "Random.h"
#include <iostream>
#include <fstream>

int main();
void createFile();
void quicksort(int arr[], int l, int r);
void writeIntoFile(int arr[]);
void swaping(int &a, int &b);
int partition(int arr[], int l, int r);

#endif
