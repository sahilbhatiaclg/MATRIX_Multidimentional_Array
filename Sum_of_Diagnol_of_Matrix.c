#include<stdio.h>
int main(){
    int n;
    printf("enter rows for square matrix");
    scanf("%d",&n);
    int arr[n][n],sum=0;
    //input from user
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    
    //printing the users matrix
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    
    for(int i=0;i<n;i++){
        for(int j=i;j<=i;j++){
            sum=sum+arr[i][j];
        }
    }
    printf("\nsum of diagnols= %d",sum);
    return 0;
    
}