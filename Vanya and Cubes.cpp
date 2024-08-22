#include <iostream>
using namespace std;

int sumUpTo(int n){
    int sum = 0;
    for(int i = 1; i <= n; i++){
        sum += i;
    }
    return sum;
}

int main(){
    int n;
    cin>>n;
    int ans = 1;
    while(n>0){
        if(n<sumUpTo(ans)){
            break;
        }
        n = n - sumUpTo(ans);
        ans++;
        
    }
    cout<<ans-1<<endl;
    return 0;
}