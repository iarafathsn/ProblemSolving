#include<algorithm>
#include<iostream>
#include<vector>

using namespace std;

vector<int> v;

int main() {
    int N;
    while(cin>>N) {
        v.push_back(N);

        sort(v.begin(), v.end());

        if(v.size() % 2 == 0)
            cout<<(v[v.size() / 2] + v[v.size() / 2 - 1]) / 2<<endl;
        else
            cout<<v[v.size() / 2]<<endl;
    }

    return 0;
}
