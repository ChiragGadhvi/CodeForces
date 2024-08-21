#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int ans = 0;
    int pass = 0;
    while(n--){
        int out,in;
        cin>>out>>in;
        pass = pass - out + in;
        ans = max(ans,pass);
    }
    cout<<ans<<endl;
    return 0;
}