#include <iostream>
using namespace std;
int main() {
    int a,b ,ans[100],temp = 0;
    bool tmp = true;
    cin >> a >> b;

    for(int i = a + 1 ; i < b ; i++){
        for(int j = 2 ; j < i ; j++){
            if(i % j == 0){
             tmp = false;
            }
        }
        if(tmp == true){
            ans[temp] = i;
            temp++;
        }
        tmp = true;
    }
    for(int i = 0 ; i < temp ; i++){
        if(i == (temp -1)){
            cout << ans[i];
        }else{
            cout << ans[i] << ",";
        }
    }
    return 0;
}
