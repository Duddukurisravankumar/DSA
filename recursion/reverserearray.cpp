#include<bits/stdc++.h>
using namespace std;
//reversing the array
void fu(int i,int a[],int n){
    if(i>=n/2) return;
    swap(a[i],a[n-1-i]);
    fu(i+1,a,n);

}
int main(){
    int n=10;
    int a[n];
    for (int i=0;i<n;i++) cin >> a[i];
     fu(0,a,n);
     for (int i = 0; i<n; i++) cout << a[i] << " " ;
     return 0;
}
/*checking the palandrome or not
bool f(int i,string &s){
    if(s[i]>=s.size()/2) return true;
    if(s[i] != s[s.size()-1-i]) return false;
    f(i+1,s);
}
int main(){
    string s="string";
    cout << f(0,s);
    return 0;
}*/