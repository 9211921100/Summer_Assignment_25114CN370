/*Q5. Write a program to find sum of digits of a number.*/

#include<stdio.h>
int main(){
    int n,sum=0,temp;
    printf("Enter the number");
    scanf("%d",&n);
    temp=n;
    while(temp>0){
        sum = temp%10 + sum;
        temp = temp/10;
    }
    printf("sum of digits of %d is %d",n,sum);
    return 0;
    
}