#include<bits/stdc++.h>
using namespace std;
void sq(int n){
    for(int i=1;i<=n;i++) {
        for(int j=i;j<=n;j++) {
            cout << j;
        }
        cout << endl;
    }
}
void sq1(int n){
    for(int i=1;i <= n;i++) {
        for(int j=1;j <= i;j++) {
            cout << j;
        }
        cout << endl;
    }
}
int main(){
    int n;
    cin >> n;
    sq(n);sq1(n);
}