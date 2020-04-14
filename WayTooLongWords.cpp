#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    string x;
    cin >> n;
    while(n--){
        cin >> x;
        if(x.length() > 10){
            cout << x[0] << x.length() - 2 << x[x.length() - 1] << endl;
        }else{
            cout << x << endl;
        }
    }
}