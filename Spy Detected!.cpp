#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        int a;
        cin>>a;
        vector<int> v(a);
        for(int i=0;i<a;i++){
            cin>>v[i];
        }

        int unique_index = 0;

        if(v[0] != v[1] && v[0] != v[2]){
            unique_index = 0;
        }
        else if(v[1] != v[0] && v[1] != v[2]){
            unique_index = 1;
        }

        else{
            for(int i=2;i<a;i++){
                if(v[i] != v[0]){
                    unique_index = i;
                    break;
                }
            }
        }

        cout<<unique_index + 1<<endl;
    }
    return 0;
}