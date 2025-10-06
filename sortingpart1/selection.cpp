#include<bits/stdc++.h>
using namespace std;
void sorting(int arr[], int n){
  
    for(int i=0;i<=n-2;i++){   
        int minim = i;
        for(int j=i;j<=n-1;j++){
            if(arr[j] < arr[minim]){
                minim = j;
            }     
        } 
        int temp =arr[minim];
        arr[minim] = arr[i];
        arr[i]=temp;
    }
}  
int main(){
    int n=7;
    int arr[n] ={13,46,100,52,20,9,3};
    sorting(arr,n);
    for(int i=0;i<n;i++){
        cout << arr[i] << " "; }
        return 0;
}