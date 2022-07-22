include<stdio.h>
#include<iostream>
#include<algorithm>
#include<math.h>

#define MAX 1010

using namespace std;

int PrimeArray[MAX];
int counter;
int numbers[MAX];

void sieve (){
    int i, j;

    for(j = 4 ; j < MAX ; j+=2)
    {
        numbers[j] = 1;
    }
    PrimeArray[0] = 1;
    PrimeArray[1] = 2;

    counter=2;

    for(i = 3 ; i <= MAX ; i++)
    {
        if(numbers[i] == 0)
        {
            PrimeArray[counter++] = i;
            for(j = i*i ; j < MAX  && j > 0; j+= i*2)
            {
                numbers[j] = 1;
            }
        }
    }
}

int main(void){
    //freopen("406-input.txt", "r", stdin);
    sieve();
    int N,C;

    while(cin>>N>>C){
        int primeCount = 0;
        int tmpN = N;

        N = N > 1000 ? 1000 : N;

        for(int i=0; ; i++){
            if(PrimeArray[i]>N) break;
            primeCount++;
        }

        int lowLimit, highLimit;

        if(primeCount%2 == 0){
            lowLimit = primeCount/2 - C; // (primeCount/2 - 1) - (C - 1)
            highLimit = lowLimit + 2 * C;
        }
        else{
            lowLimit = primeCount/2 - C + 1; //(primeCount/2 - 1 + 1) - (C - 1)
            highLimit = lowLimit + 2 * C - 1;
        }
        lowLimit = lowLimit < 0 ? 0 : lowLimit;
        highLimit = highLimit > primeCount - 1 ? primeCount : highLimit;

        cout<<tmpN<<" "<<C<<":";

        for(int i=lowLimit; i<highLimit; i++){
            cout<<" "<<PrimeArray[i];
        }
        cout<<endl<<endl;
    }

    return 0;
}
