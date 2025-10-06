//printing name for fivr times//
#include<bits/stdc++.h>
using namespace std;
void name(int n){
    cout << "sravan" << endl;
    n+=1;
    if(n==5) return;
    name(n);
}
int main(){
    int n=0;
   name(n);
}