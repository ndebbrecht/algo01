#include "myHeader.h"

int main(){
  createFile();
  int arr[6] = {12,213,43,5432,23,1};
  clock_t start = clock();
  quicksort(arr, 0, (sizeof(arr)/sizeof(*arr)));
  clock_t end = clock();
  writeIntoFile(arr);
  std::cout << arr;
  std::cout << ((end - start)*1000)/CLOCKS_PER_SEC << " sec";
}

void createFile(){
  int n = RAND_MAX;
  int a[n];
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

void quicksort(int arr[], int l, int r){
  if(l<r){
    int s = partition(arr, l, r);
    quicksort(arr, l, s-l);
    quicksort(arr, s+l, r);
  }
}

void writeIntoFile(int arr[]){

}

int partition(int arr[], int l, int r){
  int pivot = arr[r];
  int i = l-1;
  for(int j=0; j<r; j++){
    if(arr[j]<=pivot){
      i++;
      swaping(arr[i], arr[j]);
    }
  }
  swaping(arr[i+1], arr[r]);
  return i+1;
}

void swaping(int &a, int &b){
  int tmp = a;
  a = b;
  b = tmp;
}
