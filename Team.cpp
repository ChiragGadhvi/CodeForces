#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int ans = 0;
    for(int i=0;i<n;i++){
        int pentya, vasya, tonya;
        cin>>pentya>>vasya>>tonya;
        if(pentya+vasya+tonya >=2){
            ans++;
        }
    }
    cout<<ans<<endl;;
    return 0;
}