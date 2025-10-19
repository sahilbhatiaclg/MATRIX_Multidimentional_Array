#include<stdio.h>
int main(){
  int x,isupper=1;
  printf("Enter number of rows:\n");
  scanf("%d",&x);
  int arr[x][x];
  //input elements of matrix
  printf("Enter elements of %d rows:",x);
  for(int i=0;i<x;i++){
    for(int j=0;j<x;j++){
      scanf("%d",&arr[i][j]);
    }
  }
  
  for(int i=0;i<x;i++){
    for(int j=i+1;j<x;j++){
      if(arr[i][j]!=0){
        isupper=0;
        break;
      }
    }
      if(!isupper){
        break;
      }
  }
  if(isupper){
    printf("The matrix is lower triangular.\n");
  }
  else{
    printf("The matrix is not lower triangular.\n");
  }
  return 0;
  
}