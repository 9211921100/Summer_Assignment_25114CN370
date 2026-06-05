/*Write a program to print prime numbers in a range.*/

#include<stdio.h>
int main(){
    int lowest,highest,isprime,i,j;
    printf("enter highest and lowest range of prime no");
    scanf("%d%d",&lowest,&highest);
    for(i=lowest;i<=highest;i++){
        if(i<2){
            continue;
        }
       isprime = 1;
       for(j=2;j<i;j++){
        if(i%j==0){
            isprime=0;
            break;
        }
       }
       if(isprime==1){
        printf("%d",i);
        printf("\n");
       }
    }
    return 0;
}