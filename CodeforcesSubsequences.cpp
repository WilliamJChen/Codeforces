#include <bits/stdc++.h>
using namespace std;

int main(){
    int i = 0;
    long long int s, n = 1;
    string ans = "codeforces";
    int num[10] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    cin >> s;
    while(n < s){
        num[i]++;
        n /= (num[i]-1);
        n *= num[i];
        if(i < 9){
            i++;
        }else{
            i = 0;
        }
    }
    for(int j = 0; j < ans.length(); j++){
        for(int k = 0; k < num[j]; k++){
            cout << ans[j];
        }
    }
}