#include <bits/stdc++.h>

using namespace std;


int main(){
    int x, k;
    cin >> x >> k;
    while(k--){
        if(x % 10 == 0){
            x = x/10;
        }else{
            x -= 1;
        }
    }
    cout << x;
}