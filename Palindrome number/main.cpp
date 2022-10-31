#include <iostream>
using namespace std;
int main() {
    string st;
    bool ans = true;
    cin >> st;
    for(int i = 0 ; i < st.size() ; i++ ){
        if(st[i] != st[st.size() - i -1]){ans = false;}
    }
    if(ans == true){
        cout << "Yes";
    }else{
        cout << "No";
    }
    return 0;
}
