#include <iostream>
using namespace std;
 
int main() {
    int a, b;
    cin >> a >> b;
 
    int turn = 1;
 
    while (true) {
        if (turn % 2 == 1) {   
            if (a < turn) {
                cout << "Vladik";
                break;
            }
            a -= turn;
        } else {               
            if (b < turn) {
                cout << "Valera";
                break;
            }
            b -= turn;
        }
 
        turn++;
    }
 
    return 0;
}