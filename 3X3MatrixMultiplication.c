#include<stdio.h>

int main(){
    int arr1[3][3], arr2[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            // printf("Enter (%d,%d) element ",i,j);
            scanf("%d",&arr1[i][j]);
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d",arr1[i][j]);
            printf("\t");
        }
        printf("\n");

    }
    printf("\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            // printf("Enter (%d,%d) element ",i,j);
            scanf("%d",&arr2[i][j]);
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d",arr2[i][j]);
            printf("\t");
        }
        printf("\n");
    }
    printf("--------------------------------\n");
    int arr[3][3];
    
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            arr[i][j]=0;
            for(int k=0;k<3;k++){
                arr[i][j]+=arr1[i][k]*arr2[k][j];
            }
        }
    }
    
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }


}