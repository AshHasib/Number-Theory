#include<iostream>
#include<cmath>
//This code determines whether a given number is prime or not
using namespace std;

bool isPrime(int);
int main() {
    int N;
    cin>>N;

    if(isPrime(N)==true) {
        cout<<"PRIME\n";
    }
    else {
        cout<<"NOT PRIME\n";
    }
    return 0;
}

bool isPrime(int n) {
    if(n==1) return false;
    else if(n==2) return true;
    else if((n!=2) &&(n%2==0)) return false;
    else {
        int i,root;
        root=sqrt(n);
        for(i=3;i<=root;i=i+2) {
            if(n%i==0) {
                return false;
                //break;
            }
        }
        return true;
    }
}
