// sum of n terms using recursion using pararmetrs//
#include<bits/stdc++.h>
using namespace std;
int sum=0;
void addit(int i, int n){
    sum +=i;
    if(i>=n){
        cout << sum;
        return;
    }
    addit(i+1,n);
}
int main(){
    addit(1,5);
}