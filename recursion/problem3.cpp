//backrracking (printint 1 to n with out using + operatot)//
#include<bits/stdc++.h>
using namespace std;
void funs(int i){
    if(i<1) return ;
    funs(i-1);
    cout << i << " ";
}

// backtracking to print in reverse order//
void funs2(int i){
    if(i<1) return ;
    cout << i << " ";
    funs2(i-1);
}
int main(){
    funs(3);
    cout << endl;
    funs2(3);
}
