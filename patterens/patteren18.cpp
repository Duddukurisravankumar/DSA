#include<bits/stdc++.h>
using namespace std;
void alpha(int n){
    for(int i=0;i<n;i++){
        for(char ch='E'-i;ch<='E';ch++){
            cout << ch << " ";

        }
        cout << endl;
    }
}
void alpha1(int n){
    for(int i=0;i<n;i++){
        for(int j=n-i;j<=n;j++){
            cout << j<< " ";

        }
        cout << endl;
    }
}
int main(){
    int n=5;
    alpha(n);
    alpha1(n);
}