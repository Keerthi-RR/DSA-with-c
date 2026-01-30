#include<stdio.h>
int reverse(int num, int rev){
    if(num==0){
        return;
    }
    reverse((num/10),rev*10+(num%10));
}
int main(){
    int n;
    scanf("%d\n",&n);
    printf("%d\n",reverse(n,0));
    return 0;
}