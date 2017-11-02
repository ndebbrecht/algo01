#include "myHeader.h"

int main(){
  createFile();
  int arr = [12,213,43,5432,23,1];
  clock_t start = clock();
  quicksort(*arr, 0, arr.length-1);
  clock_t end = clock();
  writeIntoFile(arr);
  cout << arr;
  cout << ((end - start)*1000)/CLOCKS_PER_SEC << " sec";
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

void quicksort(int* arr[], int l, int r){
  if(l<r){
    int s = partition(*arr, l, r);
    quicksort(*arr, l, s-l);
    quicksort(*arr, s+l, r);
  }
}

void writeIntoFile(int* arr[]){

}

int* readFile(){

}

int partittion(int[] *arr, int l, int r){
  int pivot = arr[r];
  i = l-1;
  for(int j=0; j<r; j++){
    if(arr[j]<=pivot){
      i = i++;
      swap(arr[i], arr[j]);
    }
  }
  swap(arr[i+1], arr[r]);
  return i+1;
}

void swap(arr[i],arr[j]){
  int tmp = arr[i];
  arr[i] = arr[j];
  arr[j] = tmp;
}
