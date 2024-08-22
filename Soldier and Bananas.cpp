#include <iostream>
using namespace std;

int main(){
    int k, n, w;
    cin>>k>>n>>w;
    int money = 0;
    int ans = 0;
    for(int i=1;i<=w;i++){
        money = money + i*k;
    }
    ans = ans + money-n;
    if(ans <0){
        cout<<0<<endl;
    }
    else{
        cout<<ans<<endl;
    }
    return 0;
}