#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int X;
    cin >> X;
    
    if (X >= 7) {
        cout << 3 << "\n"; 
    } 
    else if (X >= 3) {
        cout << 2 << "\n"; 
    } 
    else if (X >= 1) {
        cout << 1 << "\n";
    } 
    else {
        cout << 0 << "\n"; 
    }
    
    return 0;
}
