/*Q14. Write a program to find nth fibonacci term.*/

#include<stdio.h>
int main(){
    int n,a=0,b=1,c;
    printf("enter which term of fibonacci is required");
    scanf("%d",&n);
    if(n==1){
        printf("%d",a);
    }
    if(n==2){
        printf("%d",b);
    }
    for(int i=3;i<=n;i++){
        c=a+b;
        a=b;
        b=c;
    }
    printf("nth term of fibonacci is %d",c);
    return 0;
}