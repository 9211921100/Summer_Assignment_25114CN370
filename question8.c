/*Q8. Write a program to check whether a number is palindrome or not.*/

#include<stdio.h>
int main(){
    int n,reverse=0;
    int temp,lastdigit;
    printf("enter number");
    scanf("%d",&n);
    temp=n;
    while(temp>0){
        lastdigit = temp%10;
        reverse = (reverse*10) + lastdigit;
        temp= temp/10;
    }
    if(n==reverse){
        printf("the number is palindrom");
    } else{
        printf("the number is not a palindrom");
    }
    return 0;
}