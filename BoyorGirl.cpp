#include <iostream>
#include <set>
using namespace std;

int main(){
    string str;
    cin>>str;

    set<char> uniqueChars;

    for(char ch : str){
        uniqueChars.insert(ch);
    }

    int ans = uniqueChars.size();

    if(ans%2==0)
        cout<<"CHAT WITH HER!"<<endl;
    else
        cout<<"IGNORE HIM!"<<endl;
    return 0;
}