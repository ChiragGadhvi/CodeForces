#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int ans = 0;
    while(n--){
        int a;
        cin>>a;
        if(a==1){
            ans++;
        }
    }
    if(ans!=0)
        cout<<"Hard"<<endl;
    else    
        cout<<"Easy"<<endl;
    return 0;
}