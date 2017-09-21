#include<bits/stdc++.h>
using namespace std;

int main () {
    int N, i;
    int counter=0;

    printf("Enter numbers:");
    scanf("%d",&N);
    for(i=1;i<=sqrt(N)+1;i++) {
        if(N%i==0) {
            if(i==(N/i)) {
                printf("%d\t",i);
                counter++;
            }
            else {
                printf("%d\t%d\t",i,N/i);
                counter+=2;
            }
        }
    }
    printf("\nNumber of Divisors:%d\n",counter);
    return 0;
}
