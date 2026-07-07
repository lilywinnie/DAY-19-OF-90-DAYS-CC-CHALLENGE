#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int T;
    cin>>T;
    
    while (T--){
    
    int X,Y,Z;
    cin>>X>>Y>>Z;
    
    if(X*Y<= Z*24*60)
        cout<<"YES\n";
    
    else
        cout<<"NO\n";
        
    }
        
    return 0;
}
