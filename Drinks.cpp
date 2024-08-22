#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    double ans = 0.0;

    for(int i=0;i<n;i++){
        double a;
        cin>>a;
        ans += a;
    }

    double result = ans/n;
    cout.precision(14);
    cout<<result<<endl;
    return 0;

}