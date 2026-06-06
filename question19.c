/*Q19. Writea program to print factors of a number.*/

#include<stdio.h>
int main(){
    int num,i;
    printf("enter number to find its factor.");
    scanf("%d",&num);
    printf("Factors of %d are.-",num);
    for(i=1;i<=num;i++){
        if(num%i==0){
            printf("%d ",i);
        }
    }
    return 0;
}