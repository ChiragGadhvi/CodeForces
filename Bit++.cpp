#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int x = 0;
    while(n--){
        string str;
        cin>>str;
        if(str == "++X")
            x = x + 1;
        else if(str == "--X")
            x = x - 1;
        else if(str == "X++")
            x = x + 1;
        else if(str == "X--")
            x = x - 1;
    }
    cout<<x<<endl;
    return 0;
}