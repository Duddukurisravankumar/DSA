#include<bits/stdc++.h>
using namespace std;
void funs(int n){
    if(n == 20) return;
    cout << n << endl;
    n+=1;
    funs(n);
}
int main(){
    int n;
    cout << " engter the number";
    cin >> n;
    funs(n);
}