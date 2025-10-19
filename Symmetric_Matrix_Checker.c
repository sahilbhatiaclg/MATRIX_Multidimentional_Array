#include<stdio.h>
int main(){
  int x,issymmetric=1;
  printf("Enter number of rows:");
  scanf("%d",&x); //input number of rows and columns in matrix
  int arr[x][x]; 
  //input matrix
  for(int i=0;i<x;i++){
    for(int j=0;j<x;j++){
      scanf("%d",&arr[i][j]);
    }
  }
  
  //checking if it is symmetric
  
  for(int i=0;i<x;i++){
    for(int j=0;j<x;j++){
      if(arr[i][j]!=arr[j][i]){
        issymmetric=0;
        break;
      }
    }
    if(!issymmetric){
      break;
    }
  }
   if(issymmetric){
     printf("The matrix is symmetric.\n");
   }
   else{
     printf("The matrix is not symmetric.\n");
   }
  
  return 0;
  
}