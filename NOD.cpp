
#include<bits/stdc++.h>
using namespace std;

int main () {
    int N;
    set <int> S;
    int counter=0;
    cin>>N;
    for(int i=1;i<=sqrt(N)+1;i++) {
        if(N%i==0) {
            if(i==N/i) {
                S.insert(i);
                counter+=1;
            }
            else {
                S.insert(i);
                S.insert(N/i);
                counter+=2;
            }
        }
    }
    printf("NOD = %d\n",counter);
    set<int>::iterator it;

    for(it=S.begin();it!=S.end();it++ ){
        printf("%d\t",*it);
    }
    return 0;
}
