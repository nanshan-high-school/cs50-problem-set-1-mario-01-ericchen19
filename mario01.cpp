#include <iostream>
using namespace std;

int main() {
    int j,h,block,space;
    do {
        cout << "請問高(0<h<9):";
        cin >> h;
    } while (h > 8 || h <= 0);
    
    for (j = 0; j <= h; j++) {
        for (space = h; space > j; space--) {
            cout << " ";
        }
        for (block = 1; block <= j; block++) {
            cout << "#";
        }
        cout << "\n";
    }
}
