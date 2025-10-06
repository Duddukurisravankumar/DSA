#include<bits/stdc++.h>
using namespace std;
void prime(int n){
    int count=0;
    for(int i=1;i<=n/2;i++){
        if(n%i==0){
            count +=1;
        }    
        if(n/i!=2) count ++; 
    }
    if(count > 2) cout << n << "is not a prime number";
        else cout << n  << " is a prime number";
}
int main(){
    int n;
    cout << "enter the n value";
    cin >>  n ;
    prime(n);
}