/*Q20. Write a program to find largest prime factor.*/

#include<stdio.h>
int main(){
    long long num,largestfactor = 0;
    printf("enter a number");
    scanf("%lld",&num);

    while(num%2==0){
        largestfactor = 2;
        num/=2;
    }
    for(long long i=3;i*i<=num;i+=2){
        while(num%i==0){
            largestfactor = i;
            num/=i;
        }
    }
    if(num>2){
        largestfactor = num;
    }
    printf("Largest prime Factor = %lld\n",largestfactor);
    return 0;
}