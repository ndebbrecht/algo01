#ifndef MYHEADER_H
#define MYHEADER_H

#include <time.h>
#include <stdlib.h>
#include "Random.h"
#include <iostream>
#include <fstream>

int main();
void createFile();
void quicksort(int* arr, int l, int r);
void writeIntoFile(int* arr[]);
int* readFile();
void swap(int i, int j);
int partition(int* arr[], int l, int r);

#endif
