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
    int r=reverse(n,0);
    if(n==r){
        printf("Palindrome\n");
    }
    else{
        printf("Not Palindrome\n");
    }
    return 0;
}