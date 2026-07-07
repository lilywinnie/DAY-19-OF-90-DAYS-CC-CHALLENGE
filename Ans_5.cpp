#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int T;
    cin>>T;
    
    while (T--){
    
    int W,X,Y,Z;
    cin>>W>>X>>Y>>Z;
    
/*  W-the initial amount,
    X-the amount deposited per month,
    Y-the amount deducted per month,
    Z — the number of months.    */
    
    cout<< W + (Z * (X - Y))<<"\n";
    
    }
    
    return 0;

}
