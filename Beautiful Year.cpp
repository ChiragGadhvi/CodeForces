#include <iostream>
#include <string>
#include <unordered_set>

using namespace std;

bool hasDistinctYear(int year){
    string yearStr = to_string(year);
    unordered_set<char> distinctChars;
    for(char c : yearStr){
        if(distinctChars.find(c) != distinctChars.end()){
            return false;
        }
        distinctChars.insert(c);
    }
    return true;
}

int main() {
    int year;
    cin >> year;
    int nextYear = year + 1;
    
    while(true){
        if(hasDistinctYear(nextYear)){
            cout << nextYear << endl;
            break;
        }
        nextYear++;
    }

    return 0;
}