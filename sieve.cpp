#include<bits/stdc++.h>

using namespace std;

void sieve(int n);

int main (){
    int N;
    printf("Enter limit:");
    scanf("%d",&N);
    sieve(N);
    return 0;
}

void sieve(int n) {
    bool Primes[n+1];
    int i,j;
    for(i=1;i<=n;i++) {
        Primes[i]=true;
    }
    Primes[1]=false;
    Primes[2]=true;

    for(i=2;i<=n;i++) {
        if(Primes[i]==true) {
            for(j=2;i*j<=n;j++) {
                Primes[i*j]=false;
            }
        }
    }
    for(i=1;i<=n;i++) {
        if(Primes[i]) {
            printf("%d\t",i);
        }
    }
}
