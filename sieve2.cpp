#include<bits/stdc++.h>

using namespace std;

bool primes[1000];

void init() {
    for(int i=0;i<1000;i++) {
        primes[i]=true;
    }
}
void sieve(int n) {
    primes[1]=false;
    primes[2]=true;

    for(int i=2;i<=n;i++) {
        if(primes[i]==true) {
            for(int j=2;i*j<=n;j++) {
                primes[i*j]=false;
            }
        }
    }
}

int main () {
    int n;
    printf("Enter limit:");
    scanf("%d",&n);

    init();

    sieve(n);

    for(int i=1;i<=n;i++) {
        if(primes[i]) {
            printf("%d\t",i);
        }
    }
    return 0;
}
