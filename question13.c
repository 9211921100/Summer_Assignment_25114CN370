/*Q13. Write a program to generate Fibonacci series.*/

#include<stdio.h>
int main(){
    int n,a=1,b=1,c;
    printf("enter term upto fibonacci series is required");
    scanf("%d",&n);
    a=0;
    b=1;
    c=a+b;
    printf("%d %d ",a,b);
    while(c<=n){
        printf("%d ",c);
        a=b;
        b=c;
        c=a+b;
    }
    return 0;
}