#include<stdio.h>
int main(){
    int i,j,r,c;
    scanf("%d %d",&r,&c);
    int arr[10][10];
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d\n",&arr[i][j]);
        }
    }
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            int temp=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=temp;
        }
    }
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}