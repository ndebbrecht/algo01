#include <time.h>
#include <std.h>
#include "Random.h"
#include <iostream.h>
#include <fstream.h>

int main(){
  createFile();
  int[] arr = readFile();
  clock_t start = clock();
  quicksort(arr, l, r);
  clock_t end = clock();
  writeIntoFile(arr);
  cout << (end - start)*1000 << " sec";
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

void quicksort(int[] *arr, int l, int r){
  if(l<r){
    int s = partition(*arr, l, r);
    quicksort(*arr, l, s-l);
    quicksort(*arr, s+l, r);
  }
}

void writeIntoFile(int[] *arr){

}

int[] readFile(){

}

int partittion(int[] *arr, int l, int r){
  int pivot = arr[r];
  i = l-1;
  for(int j=0; j<r; j++){
    if(a[j]<=pivot){
      i = i++;
      swap(a[i],a[j]);
    }
  }
  swap(a[i+1], a[r]);
  return i+1;
}

void swap(a[i],a[j]){
  int tmp = a[i];
  a[i] = a[j];
  a[j] = tmp;
}
