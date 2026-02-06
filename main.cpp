#include <iostream>
#include <cstring>
#include <cstdlib>
#include <chrono>
using namespace std;
#include "sorting.h"

int main(int argc, char**argv) {
  int *a,i,N=argc-2;
  /* Make sure you convert 'a' properly*/ 
  a=new int[N];
  for(i=0;i<N;i++){
    *a = atoi(argv[i+2]);
    a++;
  }
  a-=N;
  display(a,N);
  auto startTime = chrono::high_resolution_clock::now();
  auto endTime = chrono::high_resolution_clock::now();

  if (strcmp(argv[1], "bubble") == 0)
      bubbleSort(a, N);
    else if (strcmp(argv[1], "insertion") == 0)
      insertion(a, N);
    else if (strcmp(argv[1], "selection") == 0)
      selectionSort(a, N);
     display(a, N);

    chrono::duration<double, std::milli> elapsed = endTime - startTime;
    cout << "Time consumed: " << elapsed.count() << " ms" << endl;
  delete[] a;
  return 0;
}


