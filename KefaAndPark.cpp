#include <bits/stdc++.h>
using namespace std;

int cat[10000001], ans = 0, n, m;
bool previous = true;
vector<vector<int>> X(200000);
vector<int> visited(200000);

void dfs(int c, int cnt = 0){
    visited[c] = true;
    cat[c] == 1? cnt++ : cnt = 0;

    if(cnt > m) return;

    bool isLeaf = true;

    for(int z : X[c]){
        if(!visited[z]){
            dfs(z, cnt);
            isLeaf = false;
        }
    }
    if(isLeaf)ans++;
}
int main(){
    int x, y, t;
    cin >> n >> m;

    for(int i = 1; i <= n; i++){
        cin >> cat[i];
    }
    for(int i = 1; i < n; i++){
        cin >> x >> y;
        X[x].push_back(y);
        X[y].push_back(x);
    }
    dfs(1);
    cout << ans;
}