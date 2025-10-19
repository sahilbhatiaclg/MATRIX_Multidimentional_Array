#include <stdio.h>

int main() {
    int arr[100][100];
    int arrr[100][100];

    // ---- 1st Matrix ----
    printf("Enter elements of 1st matrix\n");

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Entered elements of 1st matrix are: \n");
    for (int i = 1; i <= 2; i++) {
        for (int j = 1; j <= 2; j++) {
            printf("%d", arr[i-1][j-1]);
            if(j<2){
              printf(" ");
            }
        }
        printf("\n");
    }

    // ---- 2nd Matrix ----
    printf("\nEnter elements of 2nd matrix\n");

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            scanf("%d", &arrr[i][j]);
        }
    }

    printf("Entered elements of 2nd matrix are:\n");
    for (int i = 1; i <= 2; i++) {
        for (int j = 1; j <= 2; j++) {
            printf("%d", arrr[i-1][j-1]);
            if(j<2){
              printf(" ");
            }
        }
        printf("\n");
    }

    // ---- Sum of Matrices ----
    printf("\nSum Of Matrix:\n");
    for (int i = 1; i <= 2; i++) {
        for (int j = 1; j <= 2; j++) {
            printf("%d", arr[i-1][j-1] + arrr[i-1][j-1]);
            if(j<2){
            printf(" ");
            }
        }
        printf("\n");
    }

    printf("\n");
    return 0;
}
