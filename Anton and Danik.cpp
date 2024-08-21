#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    string str;
    cin>>str;
    int anton = 0;
    int danik = 0;
    for(int i=0;i<n;i++){
        if(str[i]=='A')
            anton++;
        else if(str[i]=='D')
            danik++;
    }
    if(anton>danik)
        cout<<"Anton"<<endl;
    else if(danik > anton)
        cout<<"Danik"<<endl;
    else
        cout<<"Friendship"<<endl;
    return 0;
}