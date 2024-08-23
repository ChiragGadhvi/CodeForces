#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int count = 0;
        int first_three = 0;
        int last_three = 0;
        while(n>0){
            if(count < 3){
            last_three += n%10;
            n /= 10;
            count++;
            }
            else if(count >= 3){
                first_three += n%10;
                n /= 10;
                count++;
            }
        }
        // cout<<first_three<<" "<<last_three<<endl;
        if(last_three == first_three){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}