#include<stdio.h>
void main(){
    int a,b,i;
    scanf("%d",&a);
    for(i=0;i<4;i++){
       b=a%10;
       printf("%d",b);
       a=a/10;
    }
}
