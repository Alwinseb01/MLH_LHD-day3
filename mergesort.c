#include <stdio.h>

void merge(int A[ ] , int start, int mid, int end) {
 
int p = start ,q = mid+ 1;

int Arr[end-start+ 1] , k=0;
for(int i = start ;i <= end ;i++) {
    if(p > mid)      
       Arr[ k++ ] = A[ q++] ;

   else if ( q > end)   
       Arr[ k++ ] = A[ p++ ];

   else if( A[ p ] < A[ q ])     
      Arr[ k++ ] = A[ p++ ];

   else
      Arr[ k++ ] = A[ q++];
 }
  for (int p=0 ; p< k ;p ++) {
   
     A[ start++ ] = Arr[ p ] ;                          
  }
}

void merge_sort (int A[ ] , int start , int end )
   {
        int mid = (start + end ) / 2 ; 
           if( start < end ) {
           int mid = (start + end ) / 2 ;           
           merge_sort (A, start , mid ) ;                
           merge_sort (A,mid + 1 , end ) ;   
           }

         
          merge(A,start , mid , end );   
   }                    
   
int main()
{
    int A[5]={121,34,42,64,32};
    int i=0, start=0,end=4;
    merge_sort ( A , start ,end);
    for(i=0;i<5;i++)
    printf("%d  ",A[i]);
    return 0;
}




