#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        int n,k;
        cin>>n>>k;
        cout<<(23-n)*60+(60-k)<<endl;
    }
    return 0;
}