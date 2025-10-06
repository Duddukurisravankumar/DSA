#include<bits/stdc++.h>
using namespace std;
void alpha(int n){
    for (int i=0;i<=n;i++){
        for(int j=0;j<=i;j++){
            char ch ='A'+i;
            cout << ch << " ";
        }
        cout << endl;
    }
}
int main(){
    int n=5;
    alpha(n);
}