#include<iostream>
#include<stdio.h>
#include<stack>

using namespace std;

int main(){
    int testCase;
    string inStr;
    cin>>testCase;
    getchar();

    while(testCase--)
    {
        stack<char>parStack;

        getline(cin,inStr);

        if(inStr.compare("\n")==0)
        {
            cout<<"Yes"<<endl;
            continue;
        }
        if(inStr.size()%2!=0)
        {
            cout<<"No"<<endl;
            continue;
        }

        int i;
        bool isFound = false;

        for(i=0;i<inStr.size();i++)
        {
            if(inStr[i]=='('||inStr[i]=='['){
                parStack.push(inStr[i]);
            }
            else if(inStr[i]==')' && !parStack.empty() && parStack.top()=='('){
                parStack.pop();
            }
            else if(inStr[i]==']' && !parStack.empty() && parStack.top()=='['){
                parStack.pop();
            }
            else{
                cout<<"found at "<<i<<endl;
                isFound = true;
            }
        }
        if(parStack.empty()&& !isFound)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
    return 0;
}
