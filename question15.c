/*Q15. Write a program to check armstrong number.*/

#include<stdio.h>
#include<math.h>
int main(){
    int n,count=0,temp,arm=0,reminder;
    printf("enter number");
    scanf("%d",&n);
    temp= n;
    while(temp != 0){
        count++;
        temp/=10;
    }
    temp=n;
    while(temp != 0){
          reminder = temp%10;
          arm = arm + pow(reminder,count);
          temp/=10;
    }
    if(arm==n){
        printf("%d is an armstrong number.",n);
    }else{
        printf("%d is not an armstrong number.",n);
    }
    return 0;
}