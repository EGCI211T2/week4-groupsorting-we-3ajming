#include <iostream>
#include <cstring>
using namespace std;
#include "sorting.h"

int main(int argc, char**argv) {
  int *a,N=argc-1,i;
  /* Make sure you convert 'a' properly*/ 
  a=new int[N];
  for(i=0;i<=N;i++;a++){
    *a = atoi(argv[i+1]);
  }
  a-=N;
   display(a,N);

  if(argc>1){
       if(argv[1] =="bubble") bubbleSort(a,N); 
       else /* Complete the rest */
         //insertion(a,N);
    
      // selectionSort(a,N);
       display(a,N);

      }
 return 0;
}


