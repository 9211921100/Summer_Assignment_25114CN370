/*Q11. Write a program to find GCD of two numbers.*/

#include<stdio.h>
int main(){
    int n1,n2,temp,a,b;
    printf("enter two numbers");
    scanf("%d%d",&n1,&n2);
    
    a=n1;
    b=n2;
    while(n2!=0){
        temp = n2;
        n2 = n1%n2;
        n1 = temp;
    }
    printf("GCD of %d and %d is %d",a,b,n1);
    return 0;
}