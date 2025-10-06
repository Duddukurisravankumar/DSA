#include<bits/stdc++.h>
using namespace std;
void insertion(int arr[],int n){
    for(int i=0;i<n;i++)
    {
        int j=i;
        while(j>0 and arr[j-1] > arr[j]){
            int temp = arr[j-1];
            arr[j-1] =arr[j];
            arr[j]=temp;
            j--;
        }
    }
}
int main(){
    int n=6;
    int arr[n]={9,50,46,8,3,1};
    insertion(arr,n);
    for (int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
}