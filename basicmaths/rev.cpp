#include<bits/stdc++.h>
using namespace std;
void redig(int n){
    int dup = n;
    int lastdigit = 0;
    int reverse = 0;
    int amg =0;
    while(n>0){
        lastdigit =n%10;
       cout << lastdigit ;
        n = n/10; 
        reverse = (reverse * 10)+ lastdigit; 
        amg = amg +(lastdigit ^3);
    }
    cout << endl;
    cout << reverse << endl;
    if(reverse == dup) cout << "its a palndrome number" << endl;
    if (amg == dup) cout << " it is an amstrong number";
    else cout << "not an amstrong number";
}
int main(){
    int n;
    cout << "enter the number";
    cin>> n;
    redig(n);
}