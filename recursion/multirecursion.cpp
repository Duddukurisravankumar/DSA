#include<bits/stdc++.h>
using namespace std;
int mul(int n){
    if(n<=1) return n;
   int lastnumber=mul(n-1);
   int lastfirst =mul(n-2);
   return lastnumber+lastfirst;
}
int main(){
        /*int n=10;{we can write this two lines or else directly call the function optional}
        mul(n);*/
    cout <<  mul(40);
}
