#include<stdio.h>
int isPrime(int n, int i){
    if(n<=1){
        return 0;
    }
    if(n%i==0){
        return 0;
    }
    if(i*i>n){
        return 1;
    }
    return isPrime(n,i+1);
}
int main(){
    int n,i;
    scanf("%d",&n);
    for(i=2;i<=n;i++){
        if(isPrime(i,2)){
            printf("%d ",i);
        }
    }
    return 0;
}