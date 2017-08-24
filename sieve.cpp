#include<bits/stdc++.h>
using namespace std;
//Implementation of Sieve of Eratosthenes
//Sieve-prime generator
//Efficiency - O(N.log(log(n)))

int main () {
    int N;
  cout<<"Enter limit:";
    cin>>N;
  
    bool Pr[N+1];
    int i,j;
  
    memset(Pr, true, N);

    Pr[0]=false;
    Pr[1]=false;

    for(i=2;i<N;i++ ){
        if(Pr[i]==true) {
            for(j=2;i*j<=N;j++) {
                Pr[i*j]=false;
            }
        }
    }
    vector <int> Primes;

    for(i=0;i<N;i++) {
        if(Pr[i]) {
            Primes.push_back(i);
        }
    }
    int counter=0;
    for(i=0;i<Primes.size();i++) {
        cout<<Primes[i] <<"\t";
        counter++;
        if(counter%5==0){
            cout<<endl;
        }
    }
    return 0;
}
