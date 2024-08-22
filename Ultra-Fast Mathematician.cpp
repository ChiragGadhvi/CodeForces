#include <iostream>
#include <string>

using namespace std;

int main(){
    string a,b;
    cin>>a>>b;
    string result = "";

    for (size_t i = 0; i < a.size(); i++) {
        if (a[i] == '1' && b[i] == '1') {
            result += '0';
        } else if (a[i] == '1' || b[i] == '1') {
            result += '1';
        } else {
            result += '0';
        }
    }

    cout<<result<<endl;

    return 0;
}