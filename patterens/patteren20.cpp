#include<bits/stdc++.h>
using namespace std;
 void pat20(int n){
    int space =2*n-2;
    for(int i=1;i<=2*n-1;i++){
        int start = i;
        if(i>n) start =2*n-i;
        for(int j=1;j<=start;j++){
            cout << "*";
        }
        for(int j=1;j<=space;j++){
            cout << " ";
        }
        for(int j=1;j<=start;j++){
            cout << "*";
    }
    cout << endl;
if(i>n) space +=2;
else space-=2;
  }
 }
 int main(){
    int n=5;
    pat20(n);
 }