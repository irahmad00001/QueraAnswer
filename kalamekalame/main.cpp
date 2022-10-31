#include <iostream>
#include <string>
#include <math.h>
using namespace std;
int main() {
    int temp = 0;
    string st;
    cin >> st;
    for(int i = 0; i < st.size() ; i++){
        if(st[i] == 'a' || st[i] == 'e' || st[i] == 'i' || st[i] == 'o' || st[i] == 'u' ){
            temp++;
        }
    }
    cout << pow(2,temp);
    return 0;
}
