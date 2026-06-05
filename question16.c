/*Q16. Write a program to print armstrong numbers in a range .*/

#include<stdio.h>
#include<math.h>
int main(){
    int n1,n2,arm,i,temp,count,rem;
    printf("enter starting range");
    scanf("%d",&n1);
    printf("enter ending range");
    scanf("%d",&n2);
    for(i=n1;i<=n2;i++){
       temp = i;
       count =0;
       while(temp!=0){
            count++;
            temp/=10;
       }
       temp =i;
       arm =0;
       while(temp!=0){
            rem = temp%10;
            arm+=pow(rem,count);
            temp/=10;
       }
       if(i==arm){
        printf("%d ",i);
       }

    }
       return 0;
    }

