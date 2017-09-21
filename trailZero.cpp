#include<stdio.h>

int main () {
    int N;

    scanf("%d",&N);
    int counter=0;
    for(int i=5;N/i>=1;i*=5) {
        counter+=N/i;
    }
    printf("%d\n",counter);

    return 0;
}
