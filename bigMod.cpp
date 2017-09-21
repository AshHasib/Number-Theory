#include<bits/stdc++.h>
using namespace std;

long long bigMod(long long,long long,long long);

int main () {
    long long base,power, mod;

    printf("Enter base:");
    scanf("%d",&base);

    printf("Enter power:");
    scanf("%d",&power);

    printf("Enter mod:");
    scanf("%d",&mod);

    long long res=bigMod(base,power,mod);

    printf("%d\n",res);

    return 0;
}
long long bigMod(long long b, long long p, long long m) {

    if(p==0) {
        return 1;
    }
    else if(p%2==0) {
        long long tmp=bigMod(b,p/2,m);
        return (tmp*tmp)%m;
    }
    else {
        long long x,y;
        x=b%m;
        y=bigMod(b,p-1,m);
        return (x*y)%m;
    }
}
