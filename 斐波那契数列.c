#include <stdio.h>
int main(void){
    int a, b, c , i, n;
    printf("Enter the month:");
    scanf("%d",&n);
    a=1,b=1,i=3;
    if(n<3){
        c=1;
        printf("Num:%d\n",c);
    }
    else {
        while (i<=n){
        c=a+b;
        a=b;
        b=c;
        i=i+1;}
        printf("Num:%d\n",c);}
    

    
    return 0;
}