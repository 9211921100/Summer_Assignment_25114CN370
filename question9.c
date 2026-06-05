/*Q9. Write a program to check whether a number is prime .*/

#include<stdio.h>
int main(){
    int n,isprime=1;
    printf("enter a number");
    scanf("%d",&n);
    for(int i=2;i<=(n/2);i++){
        if(n%i==0){
            isprime=0;
            break;
        }
    }
    if(isprime==1){
        printf("%d is prime ",n);
    }else{
        printf("%d is not prime",n);
    }
    return 0;
}