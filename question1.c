/*Q1. Write a program to Calculate sum of first N natural numbere*/

#include<stdio.h>
int main(){
    int n,sum=0;
    printf("enter number upto which sum is to be calculated");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        sum = sum+i;
    }
    printf("sum of %d natural no. is %d",n,sum);
    return 0;
}