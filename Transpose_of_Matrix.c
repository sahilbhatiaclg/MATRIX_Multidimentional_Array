#include<stdio.h>
int main(){
  int x,y,j;
  

  printf("Enter rows and columns:\n");
  scanf("%d %d",&x,&y);
  printf("Enter matrix elements:\n");
  int arr[x][y];
    int transpose[y][x];
  for(int i=0;i<x;i++){
    for(int j=0;j<y;j++){
      scanf("%d",&arr[i][j]);
    }
  }
  printf("Entered matrix:\n");
  for(int i=1;i<=x;i++){
    for(int j=1;j<=y;j++){
      printf("%d",arr[i-1][j-1]);
      if(j<y){
      printf(" ");
    }
    }
    printf("\n");
  }
  printf("\n");
  
  for(int i=0;i<x;i++){
    for(int j=0;j<y;j++){
      transpose[j][i]=arr[i][j];
    }
  }
  printf("Transpose of the matrix:\n");
  for(int i=1;i<=y;i++){
    for(int j=1;j<=x;j++){
      printf("%d",transpose[i-1][j-1]);
      if(j<x){
      printf(" ");
    }
    }
    
    printf("\n");
  }
  
  return 0;
  
}