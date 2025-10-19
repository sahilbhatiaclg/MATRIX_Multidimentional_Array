#include<stdio.h>
int main(){
  int x;
  printf("Enter number of rows:");
  scanf("%d",&x); //input number of rows and columns in matrix
  int arr[x][x]; 
  //input matrix
  for(int i=0;i<x;i++){
    for(int j=0;j<x;j++){
      scanf("%d",&arr[i][j]);
    }
  }
  //printing matrix
  printf("The matrix is:\n");
   for(int i=1;i<=x;i++){
    for(int j=1;j<=x;j++){
      printf("%d",arr[i-1][j-1]);
      if(j<x){
        printf(" ");
      }
    }
    printf("\n");
  }
  //converting into lower triangular matrix
  printf("Zero in lower triangular matrix:\n");
  for(int i=0;i<x;i++){
    for(int j=0;j<i;j++){
      arr[i][j]=0;
    }
  }
   for(int i=1;i<=x;i++){
    for(int j=1;j<=x;j++){
      printf("%d",arr[i-1][j-1]);
      if(j<x){
        printf(" ");
      }
    }
    printf("\n");
  }
  
  return 0;
  
}