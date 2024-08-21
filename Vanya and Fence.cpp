#include <iostream>
using namespace std;
int main(){
    int n,h;
    cin>>n>>h;
    int ans=0;
    while(n--){
        int f;
        cin>>f;
        if(f<=h)
            ans = ans + 1;
        else if(f>h)
            ans = ans + 2;
    }
    cout<<ans<<endl;
    return 0;
}