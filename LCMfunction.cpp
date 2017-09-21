#include<iostream>

using namespace std;

int LCM(int ,int);
int GCD(int ,int);

int main() {
    int A,B;
    cout<<"Input=";
    cin>>A>>B;

    int gcd=GCD(A,B);
    int lcm=LCM(A,B);

    cout<<"GCD="<<gcd<<endl;
    cout<<"LCM="<<lcm<<endl;

    return 0;
}
int GCD(int a,int b) {
    if(b==0) return a;

    return GCD(b,a%b);
}

int LCM(int a,int b) {
    //return (a*b)/GCD(a,b);

    return (a/GCD(a,b))*b;//more effective
}

