#include <bits/stdc++.h>
using namespace std;
bool isPrime(int n){
    for(int i=2; i<i*i<=n; i++){
        if(n%i==0) return false;
    }return true;
}

int main(){
    
    int a,b,sum=0;
    while(cin>>b){
       
        sum=0;
        while (b--){
            int n;
            cin>> n ;
            for(int i = 2 ; i*i <= n ; i++){
                
                if(n%i==0 and isPrime(i) and isPrime(n/i) ){
                sum++;
                break;
                }
            }
        }
    cout<< sum <<endl;
    }

return 0;
}