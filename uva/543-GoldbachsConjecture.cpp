#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<math.h>

using namespace std;

bool isPrime(int x){
    if(x == 2)
        return true;
    else if(x%2 == 0)
        return false;

    for(int i=3; i*i<=x; i+=2){
        if(x%i == 0){
            return false;
        }
    }
    return true;
}

int main(int argc, char** argv)
{
    int N;
    bool found;

    while(cin>>N && N != 0){
        found = false;
        for(int j=3; j<N; j++){
            if(isPrime(j) && isPrime(N-j)){
                found = true;
                cout<<N<<" = "<<j<<" + "<<N-j<<endl;
                break;
            }
        }
        if(!found){
            cout<<"Goldbach's conjecture is wrong."<<endl;
        }
    }

    return 0;
}
