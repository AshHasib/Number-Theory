#include<bits/stdc++.h>
using namespace std;

int main () {
    int N;
    scanf("%d",&N);

    int i,counter=0;

    for(i=1;i<=N;i++) {
        if(N%i==0) {
            printf("%d\t",i);
            counter++;
        }
    }
    printf("\nNumber of divisors:%d\n",counter);
    return 0;
}
