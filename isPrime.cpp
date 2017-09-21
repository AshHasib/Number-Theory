#include<iostream>
#include<cmath>
using namespace std;

bool isPrime(int n) {//efficient prime determinant
    int i;
    if(n==1)return false;
    if(n==2) return true;
    if((n>2)&&(n%2==0)) return false;

    int root=sqrt(n);

    for(i=3;i<=root;i=i+2) {
        if(n%i==0) {
            return false;
        }
    }
    return true;
}

int main() {
    int N;
    cout<<"input=";
    cin>>N;
    bool a=isPrime(N);

    if(a==true) cout<<"PRIME\n";
    else cout<<"NOT PRIME\n";

    return 0;
}
