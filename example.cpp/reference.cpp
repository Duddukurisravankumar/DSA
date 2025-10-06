#include<iostream>
using namespace std;
int main(){
    int val=1024;
    int &refval= val;
    cout << "the val =" << val << endl << "refval = " << refval << endl;
    refval =234567;
    cout << " the new val ="<< val << endl << " the new refval= "<< refval << endl;
}