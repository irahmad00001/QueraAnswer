#include <iostream>
#include <string>
#include <math.h>
using namespace std;
int main() {
    string st;
    cin >> st;
    int ans = 0;
    for(int i = 0 ; i < st.size() ; i++){
        ans += pow( st[i] -'0', st.size());
    }
    if(stoi(st) == ans){
        cout << "Yes";
    }else{
        cout << "No";
    }
    return 0;
}
