#include<bits/stdc++.h>
using namespace std;
void alpha(int n)
{
    for(int i=0;i<=n;i++){
        for(char ch='A';ch<='A'+ i;ch++){
            cout << ch << " ";
        }
        cout << endl;

    }
}
void revalpha(int n){
    for(int i=0;i<=n;i++){
        for(char ch='A';ch<='A'+(n-i-1);ch++){
            cout << ch << " ";
        }
        cout << endl;
    }
}
int main(){
    int n=6;
    alpha(n);
    cout << endl;
    revalpha(n);
}