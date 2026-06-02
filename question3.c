/*Q3. Write a program to find factorial of a number*/

#include<stdio.h>.h>
int main(){
    int n,fact=1;
    printf("enter no. for which factorial is required");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        fact = fact*i;
    }
    printf("factorial of %d is %d",n,fact);
    return 0;
}