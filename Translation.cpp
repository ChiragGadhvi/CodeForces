#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    string str1,str2;
    cin>>str1>>str2;
    reverse(str2.begin(), str2.end());
    if(str2 == str1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}