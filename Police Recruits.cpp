#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int officers = 0;
    int untreated = 0;
    for(int i=0;i<n;i++){
        int event;
        cin>>event;
        if(event == -1){
            if(officers > 0){
                officers--;
            }
            else{
                untreated++;
            }
        }
        else{
            officers += event;
        }
    }
    cout<<untreated<<endl; 
    return 0;
}