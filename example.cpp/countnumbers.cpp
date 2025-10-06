#include<iostream>
using namespace std;
int main(){
    int currval , value;
    if (cin  >> currval){
        int cnt=1;
        while (cin >> value)
        {
        if(value == currval)
        ++cnt;
        else {
        cout << currval << "occures " << cnt << "times " << endl;
         currval =value;
         cnt =1;
    }
    }
    cout << currval << "occurs " << cnt << "times " << endl; 
}
return 0;
}