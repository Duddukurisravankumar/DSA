#include<bits/stdc++.h>
using namespace std;
void gcd(int n1,int n2){
    int gdc;
    for(int i=1;i<=min(n1,n2);i++){
        if(n1%i==0 || n2%i == 0){
            gdc = i;
        }
    }
    cout << " gcd of"<< n1  << " ,"<< n2 << " are" << gdc;

}
int main (){
    int n1 = 10;
    int n2 = 95;
     gcd(n1,n2);
}