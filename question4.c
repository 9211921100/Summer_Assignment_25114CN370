/*Q4. Write a program to Count digits in a number*/

#include<stdio.h>
int main(){
    int n,count=0,temp;
    printf("enter no. for which count of digit is required");
    scanf("%d",&n);
    temp=n;
    while(temp>10){
        temp=temp/10;
        count++;
    }
    printf("No of digits in %d is %d",n,count+1);
    return 0;
}