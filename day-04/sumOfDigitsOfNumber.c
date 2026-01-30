#include<stdio.h>
int sumDigit(int num){
    if(n==0){
        return 0;
    }
    return (n%10)+sumDigit(n/10);
}
int main(){
    int n;
    scanf("%d\n",&n);
    printf("%d\n",sumDigit(n));
    return 0;
}