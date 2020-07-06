#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, b, h = 0, t;
    string a;
    vector< pair<string, int>> order;
    map<string, int> m;
    cin >> n;
    while(n--){
        cin >> a >> b;
        if(m.count(a) == 0){
            m.insert(make_pair(a, b));
        }else{
            m[a] += b;
        }
        order.push_back(make_pair(a, b));
    }
    for(auto i : m){
        h = max(i.second, h);
    }
    map<string, int> morder;
    string ans = "";
    for(auto i : order){
        if(morder.count(i.first) == 0){
            morder.insert(make_pair(i.first, i.second));
        }else{
            morder[i.first] += i.second;
        }
        for(auto j : morder){
            if(j.second >= h && m[j.first] == h){
                ans = j.first;
                break;
            }
        }
        if(ans != "") break;
    }
    cout << ans;
}