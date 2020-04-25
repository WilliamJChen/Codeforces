#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<pair <int, int>> trees;
    int n, x, h;
    cin >> n;
    while(n--){
        cin >> x >> h;
        trees.push_back(make_pair(x,h));
    }
    int count = 0, previous = 0;
    for(int i = 0; i < trees.size(); i++){
        if(i == 0 || i == trees.size()-1){
            count++;
            previous = trees[i].first;
        }else if(trees[i-1].first < trees[i].first - trees[i].second){
            count++;
            previous = trees[i].first;
        }else if(trees[i+1].first > trees[i].first + trees[i].second){
            count++;
            trees[i].first = trees[i].first + trees[i].second;
            previous = trees[i].first + trees[i].second;
        }else previous = trees[i].first;
    }
    cout<<count;
}