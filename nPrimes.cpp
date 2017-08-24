#include<iostream>
//This code generates N prime numbers.
 using namespace std;

 int main() {
    int N,counter,P=3,i;

    cin>>N;
    if(N>=1) {
        cout<<2<<"\t";
    }
    for(counter=2;counter<=N; ){
        for(i=2;i<=P-1;i++) {
            if(P%i==0) {
                break;
            }
        }
        if(P==i) {
            cout<<P<<"\t";
            counter++;
        }
    P++;
    }
    return 0;
}
