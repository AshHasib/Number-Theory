#include<bits/stdc++.h>
#define MAX 1000

using namespace std;

//This code finds out the N'th prime number

int main () {
    int N;
    bool chk=false;
    int counter=0;
    int i,j;

    printf("Enter N:");
    scanf("%d",&N);

    for(i=2;i<=MAX;i++) {
        chk=false;

        for(j=2;j<=i/2;j++) {
            if(i%j==0) {
                chk=true;
                break;
            }
        }
        if(chk==false) {
            counter++;
        }
        if(counter==N) {
            printf("%d\n",i);
            break;
        }
    }
    return 0;
}
