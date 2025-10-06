#include<bits/stdc++.h>
using namespace std;
/*
void patteren(int n){
    for(int i=0;i<=n;i++){
        for(int j=n-i;j<=n;j--){
            cout << "*" ;
            if(j<=0) break; 
        }
        for(int j=0;j<=i*2;j++){
            cout << " ";
        }
        for(int j=n-i;j<=n;j--){
            cout << "*";
            if(j<=0) break;
        }
        cout << endl;
    }
}*/
void alp(int n){
    int space=0;
    for(int i=0;i<=n;i++){
        for(int j=0;j<=n-i;j++){
            cout << "*";
        }
        for(int j=0;j<=space;j++){
            cout << " ";
        }
        for(int j=0;j<=n-i;j++){
            cout << "*";
        }
        cout << endl;
        space = space+2;
    }
    for(int i=0;i<=n;i++){
        for(int j=0;j<=i;j++){
            cout << "*";
        }
        for(int j=1;j<space;j++){
            cout << " ";
        }
        for(int j=0;j<=i;j++){
            cout << "*";
        }
        cout << endl;
        space = space-2;
    }
}
int main(){
    int n=5;
    alp(n);
}