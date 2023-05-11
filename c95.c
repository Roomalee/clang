#include<stdio.h>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    //조건?참일 때 실행: 거짓일 때 실행
    a>b?prinf("%d", a);: printf("%d",b);
    return 0;
}