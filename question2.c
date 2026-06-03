/*Q2. Write a program to print multiplication table of a given number.*/

#include<stdio.h>
int main(){
    int n;
    printf("enter no. which multiplication table is required");
    scanf("%d",&n);
    for(int i=1;i<=10;i++){
        printf("%d * %d = %d",n,i,n*i);
        printf("\n");
    }
    return 0;
}