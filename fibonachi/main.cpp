#include <iostream>
using namespace std;
int main() {
    int a,b;
    int temp1,temp2 = a;
    cin >> a >> b;
    temp1 = b;
    b = a+b;
    a = temp1;
    while(a != 0 && b != 1){
        cout << b-a << endl;
        temp1 = a;
        a = b - a;
        b = temp1;
    }
    return 0;
}
