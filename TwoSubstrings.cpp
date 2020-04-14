#include <bits/stdc++.h>
using namespace std;

int main(){
    int x = 0, c = 0;
    vector<int> y;
    vector<int> z;
    string s, t;
    cin >> s;
    t = s;
    bool flag = false;
    while(x != -1){
        x = s.find("AB");
        y.push_back(x + c);
        if(x != -1) s = s.substr(x+2);
        c += x + 2;
    }
    x = 0;
    c = 0;
    y.pop_back();
    while(x != -1){
        x = t.find("BA"); 
        z.push_back(x + c);
        if(x != -1) t = t.substr(x+2);
        c += x + 2; 
    }
    z.pop_back();
    
    for(int i = 0; i < y.size(); i++){
        for(int j = 0; j < z.size(); j++){
            if(z[j] - y[i] >= 2){
                flag = true;
                break;
            } 
            if(y[i] - z[j] >= 2){
                flag = true;
                break;
            }
        }
        if(flag) break;
    }

    if(flag){
        cout << "YES";
    }else{
        cout << "NO";
    }
}