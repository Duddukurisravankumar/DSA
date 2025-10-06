#include<bits/stdc++.h>
using namespace std;
void patt21(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
        if(i==0 || i==n-1 ||j==0){
            cout << "* ";
        }
        else cout << " "<< " ";
        }
        cout << endl;
    }
    for(int i=0;i<n;i++){
    for (int j=0;j<n;j++){
        if(i==n-1 || j==n-1){
            cout << "* ";
        }
        else cout << " "<< " ";
        }
        cout << endl;
    }
}
int main(){
    int n=5;
    patt21(n);
 }
