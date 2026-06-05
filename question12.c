/*Q12. Write a program to find LCM of two numbers.*/

#include<stdio.h>
int main(){
    int n1,n2,temp,gcd,lcm;
    int a,b;
    printf("enter two numbers");
    scanf("%d%d",&n1,&n2);
    a=n1;
    b=n2;
    while(n2!=0){
        temp=n2;
        n2=n1%n2;
        n1=temp;
    }
    gcd = n1;
    lcm = (a*b)/gcd;
    printf("LCM of %d and %d is %d",a,b,lcm);
    return 0;
}