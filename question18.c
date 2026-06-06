/*Q18. Write a program to Check strong number.*/

#include<stdio.h>
int main(){
    int num,temp,i,digit,sum=0;
    printf("enter number to check");
    scanf("%d",&num);
    temp = num;
    while(temp>0){
        digit = temp%10;
        int fact =1;
        for(i=1;i<=digit;i++){
            fact*=i;
        }
        sum+=fact;
        temp/=10;
    }
    if(sum==num){
        printf("%d is a strong number.",num);
    }else{
        printf("%d is NOT a strong number",num);
    }
    return 0;
}