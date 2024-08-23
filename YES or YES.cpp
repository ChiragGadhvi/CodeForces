#include <iostream> 
#include <string>
#include <cctype>
using namespace std; 
int main(){
    int n;
    cin>>n;
    while(n--){
        string str;
        cin>>str;
        
        for(char& c : str){
            c = toupper(c);
        }

        if(str == "YES"){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}