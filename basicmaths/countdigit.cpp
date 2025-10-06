#include<bits/stdc++.h>
using namespace std;
int dig(int n){
    int lastdigit;
    int cnt=0;
    while(n>0){
        lastdigit =n%10;
        cout << lastdigit << endl;
        cnt +=1;
        n = n/10;
        if(n==0) break;
    }
    cout << "number of digits in a number " << cnt ;
}
/*int dig(int n){
    int a=(int)(log10(n))+1;
    cout << a;
}*/
int main(){
    int n= 7789;
    dig(n);
}