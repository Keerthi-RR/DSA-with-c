#include<stdio.h>
int fact(int num){
    if(num==0){
        return 1;
    }
    return n*fact(n-1);
}
int main(){
    int n;
    scanf("%d\n",&n);
    printf("%d\n",fact(n));
    return 0;

}