//printing the numbers froom 1 to n//
#include<bits/stdc++.h>
using namespace std;
void funs(int i,int n){
if(i>n) return;
cout << i << " ";
funs(i+1,n);
}
//printing the numbers from 1 to n in reverse//
void funs2(int i,int n){
    if(i>n) return;
    cout << n << " ";
    funs2(i,n-1);
}
int main(){
    funs(1,10);
    cout << endl;
    funs2(1,10);
}
