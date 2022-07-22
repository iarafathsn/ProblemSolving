#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<math.h>
#include<string.h>

using namespace std;

int main(void){
    //freopen("10929-input.txt", "r", stdin);
    string str;

    while(getline(cin, str)){
        int len = str.length();

        if(len == 1 && str[0] == '0')
            break;
        else if(len == 0)
            continue;

        int sum = 0;

        for(int i=0; i<len; i++){
            if(i%2 == 0){
                sum += str[i] - '0';
            }
            else{
                sum -= str[i] - '0';
            }
        }

        if(sum<0)
            sum *= -1;

        if(sum == 0 || sum%11 == 0){
            cout<<str<<" is a multiple of 11."<<endl;
        }
        else{
            cout<<str<<" is not a multiple of 11."<<endl;
        }
    }

    return 0;
}
