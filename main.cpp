#include <iostream>
#include <cstring>
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

  if (strcmp(argv[1], "bubble") == 0)
      bubbleSort(a, N);
    else if (strcmp(argv[1], "insertion") == 0)
      insertion(a, N);
    else if (strcmp(argv[1], "selection") == 0)
      selectionSort(a, N);
     display(a, N);
  delete[] a;
  return 0;
}


