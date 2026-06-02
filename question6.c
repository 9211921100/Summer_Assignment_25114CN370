/*Q6. write a program to reverse a number.*/

#include<stdio.h>
int main(){
    int n,reverse=0;
    int temp,digit;
    printf("enter number");
    scanf("%d",&n);
    temp=n;
    while(temp>0){
        digit = temp%10;
        reverse = (reverse*10) + digit;
        temp/=10;
    }
    printf("reverse of %d is %d",n,reverse);
}