#include<bits/stdc++.h>
using namespace std;
void bubble(int arr[],int n){
    for(int i=0;i<=n-1;i++){
        for(int j= 0;j<=n-i;j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j+1];
                arr[j+1]=arr[j];
                arr[j] = temp;
            }
        }
    }
}
   
int main(){
    int n=6;
    int arr[n] ={13,46,24,52,20,9};
    bubble(arr,n);
    for(int i=0;i<n;i++){
        cout << arr[i] << " "; }
        return 0;
}