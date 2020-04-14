#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, x = 0;
    string inp;
    cin >> n;
    while(n--){
        cin >> inp;
        if(inp[1] == '+'){
            x++;
        }else{
            x--;
        }
    }
    cout << x;
}