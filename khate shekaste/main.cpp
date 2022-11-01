#include <iostream>
using namespace std;

int main() {
    int a;
    float ans = 0;
    cin >> a ;
    for(int s = 0 ; s < a ; s++){
        int i = 0, j =0;
        cin >> i >> j;
        string graph[i];
        for(int k = 0 ; k < i ; k++){
            cin >> graph[k];
        }
        for(int k = (j-1) ; k >= 0 ; k--){
            for(int l = (i-1) ; l >= 0 ; l--){
                if(graph[l][k] == 46){
                    ans += 1;
                }if(graph[l][k] == 47 || graph[l][k] == 92){
                    ans += 0.5;
                    break;
                }if(graph[l][k] == 95){
                    break;
                }
            }
        }
        cout << ans << endl;
        ans = 0;
    }
    return 0;
}
