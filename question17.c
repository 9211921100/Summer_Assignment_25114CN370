/*Q17. Write a program to check perfect number.*/

#include<stdio.h>
int main(){
    int num,sum=0,i;
    printf("enter number to check");
    scanf("%d",&num);
    for(i=1;i<=num/2;i++){
        if(num%i==0){
            sum+=i;
        }
    }
    if(sum==num && num!=0){
        printf("%d is a perfect number.",num);
    }else{
        printf("%d is NOT a perfect number.",num);
    }
    return 0;
}