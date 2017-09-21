#include<bits/stdc++.h>
using namespace std;

int main () {
    int N,i;

    printf("Enter number:");
    scanf("%d",&N);

    printf("Prime factorization of the number:");
    while(N%2==0) {
        printf("2\t");
        N/=2;
    }

    for(i=3;i<=sqrt(N);i+=2) {
        while(N%i==0) {
            printf("%d\t",i);
            N/=i;
        }
    }
    if(N>2) {
        printf("%d\t",N);
    }
    return 0;
}
