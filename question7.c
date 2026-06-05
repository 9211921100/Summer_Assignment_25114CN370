/*Q7. Write a program to find product of digits.*/

#include<stdio.h>
int main(){
    int n,product=1;
    int lastdigit ,temp;
    printf("enter number");
    scanf("%d",&n);
    temp = n;
    while(temp>0){
        lastdigit = temp%10;
        product = product*lastdigit;
        temp=temp/10;
    }
    printf("product of %d is %d",n,product);
    return 0;
}