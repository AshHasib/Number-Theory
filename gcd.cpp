#include<stdio.h>
int GCD(int a,int b) {
    if(b==0)return a;

    else return GCD(b,a%b);
}
int LCM(int a,int b) {
    return (a/GCD(a,b))*b;
}
int main () {
    int a,b;
    scanf("%d%d",&a,&b);

    printf("%d\n",GCD(a,b));
    printf("\n%d\n",LCM(a,b));
}
