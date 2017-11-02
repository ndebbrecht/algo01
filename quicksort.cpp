#include <time.h>
#include <std.h>
#include "Random.h"
#include <iostream.h>
#include <fstream.h>

int main(){
  createFile();
  int[] arr = readFile();
  clock_t start = clock();
  sort(arr);
  clock_t end = clock();
  writeIntoFile(arr);
}

void createFile(){
  int[] a;
  Random r(n);
  for(int i=0; i<n; i++ ) {
    a[i] = r.give();
  }

  ofstream file;
  file.open("source.txt");
  for(int i=0; i<n; i++){
    file << a[i] << "\n";
  }
}

void sort(int[] *arr){

}

void writeIntoFile(int[] *arr){

}

int[] readFile(){

}
