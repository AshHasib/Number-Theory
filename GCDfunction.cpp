#include<iostream>

using namespace std;

int GCD(int ,int);

int main() {
    int a,b;
    cout<<"Input=";
    cin>>a>>b;

    int N=GCD(a,b);

    cout<<"GCD("<<a<<","<<b<<")="<<N<<endl;

    return 0;
}
int GCD(int x,int y) {
    if(y==0) return x;

    else return GCD(y,x%y);

}
