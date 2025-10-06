#include<bits/stdc++.h>
using namespace std;
int  fu(int n,int a[],int num){
    int count =0;
    for(int i =0;i<=n;i++){
        if(a[i]==num) count ++;
       }
       return count;
}
int main(){
    int n = 10;
    int a[n] = {23,1,34,3,5,6,23,45,12};
    int num;
    for(int i=0;i<=n;i++){
        num = a[i];
        fu(n,a,num);
    }
    cout << num << " present for "<< fu(n,a,num) << "  times" << endl;
}