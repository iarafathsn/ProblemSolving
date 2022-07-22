#include<iostream>

using namespace std;

int main(){
    int Answer,N,K;
    while(cin>>N>>K && K>1){
        Answer=N;
        while(N>=K){
            Answer=Answer+(N/K);
            N=(N/K)+(N%K);
        }
        cout<<Answer<<endl;
    }
    return 0;
}
