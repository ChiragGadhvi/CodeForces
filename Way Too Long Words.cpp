#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    cin>>n;
    while(n--){
        string str;
        cin>>str;
        if(str.length()<11){
            cout<<str<<endl;
        }
        else if(str.length() >= 10){
            cout<<str.front() + to_string(str.length()-2) + str.back()<<endl;
        }
    }
    return 0;
}