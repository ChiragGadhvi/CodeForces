#include <iostream>
using namespace std;

// This function finds the soluion
long long fun(long long n){
        if(n%2 == 0){
            return n/2;
        }
        else{
            return -(n+1)/2;
        }
    
}

// This is the Main function
int main() {
    long long n;
    cin>>n;
    cout<<fun(n);
    return 0;
}
