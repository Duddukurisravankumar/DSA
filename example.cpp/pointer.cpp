#include<bits/stdc++.h>
using namespace std;
int main(){
    int val=34;
    int *p = &val;
    cout << "current val =" << val <<endl <<"current pointer val="<< p << endl;
    cout << *p << endl;
    *p=50;
    cout << "new val="<< val <<endl << "new p="<< p <<endl <<"new *p=" << *p<<endl;
    val=11;
    cout << "new val ="<< val << endl<<"new p="<< p << endl << "new *p "<<*p << endl;
}