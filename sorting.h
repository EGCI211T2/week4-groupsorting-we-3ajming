#ifndefine SORTING_H
#define SORTING_H

#include <iomanip>
/* function prototype*/


void display(int a[],int n){

    int i;

    for(i=0;i<n;i++)
        std::cout<<setw(3)<<a[i];

	std::cout<<std::endl;
  
}

void selectionSort(int data[], int length) 
{ 
	int i, j, m, mi; 
	
  for(i=0; i<length-1; i++)
  {
    mi=i;
    for(j=i+1; j<length; j++)
    {
      if(data[j]<data[mi])
      {
        mi=j;
      }
    }

    if(mi!=i){
      swap(data[i], data[mi]);
    }
  }
     display(data,length);
     
} 



void insertion(int a[],int n){


}

void swap(int &a,int &b){
 int temp;
  temp=a;
  a=b;
  b=temp;
  
}

void bubbleSort(int a[],int n){
  int i,j;
  int sorted;
  // how may pair to compare?
    for(i=0; i<n-1; i++){
      for(j=0;j<n-i-1;j++){
        if(a[j]>a[j+1]){
          swap(a[j], a[j+1]);
      }
    }
    display(a,n);
  }
}
#endif




