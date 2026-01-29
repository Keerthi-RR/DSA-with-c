#include<stdio.h>
int main(){
    int a=5,b=10,c=15;
    printf("%d\n",a==c && b>a);
    printf("%d\n",a!=b ||c>b);
    printf("%d\n", !(a>b));
    return 0;
}