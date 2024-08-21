#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int ans=0;
    if(n%5 != 0){
        ans = n/5 + 1;
    }
    else{
        ans = n/5;
    }
    cout<<ans<<endl;
    return 0;
}