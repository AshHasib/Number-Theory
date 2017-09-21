#include<iostream>
#include<vector>

using namespace std;

int main() {
    int N;
    int i,j;
    int Pr[1000];
    cout<<"Enter limit:";
    cin>>N;

    Pr[0]=0;
    Pr[1]=0;
    for(i=2;i<=N;i++ ){
        if(Pr[i]==1) {
            for(j=i;i*j<=N;j++) {
                Pr[i*j]=0;
            }
        }
    }
    vector <int> Primes;
    for(i=0;i<N;i++) {
        if(Pr[i]) {
            Primes.push_back(i);
            cout<<Primes[i]<<endl;
        }
    }
}
