#include <bits/stdtr1c++.h>
using namespace std;

int main(){
    int q, n;
    string s[2];
    cin >> q;
    while(q--){
        int cnth = 0, cntv = 0;
        bool up = true, valid = true;
        cin >> n >> s[0] >> s[1];
        for(int i = 0; i < n; i++){
            if(s[0][i] >= '3' && s[1][i] >= '3'){
                cntv++;
                up? up = false: up = true;
            }else{
                if(up){
                    if(s[0][i] >= '3'){
                        valid = false;
                    }
                }else{
                    if(s[1][i] >= '3'){
                        valid = false;
                    }
                }
            }
        }
        if(cntv % 2 == 1 && valid) {
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
        
    }
}
