#include<stdio.h>
#include<iostream>
#include<algorithm>

using namespace std;

int main(int argc, char** argv)
{
    int testCase, N;

    cin>>testCase;

    for(int T = 1; T <= testCase; T++){
        cin>>N;

        int age[N];

        for(int i=0; i<N; i++){
            cin>>age[i];
        }
        sort(age, age + N);

        cout<<"Case "<<T<<": "<<age[N/2]<<endl;
    }

    return 0;
}
