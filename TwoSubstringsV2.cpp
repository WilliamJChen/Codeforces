#include <bits/stdc++.h>
using namespace std;

int main(){
    int x1 = 0, x2 = 0;
    int y1 = 0, y2 = 0;
    string s;
    cin >> s;
    
    x1 = s.find("AB");
    x2 = s.find("BA", x1 + 2);

    y1 = s.find("BA");
    y2 = s.find("AB", y1 + 2);

    if((x1 != -1 && x2 != -1) || (y1 != -1 && y2 != -1)){
        cout << "YES";
    }else{
        cout << "NO";
    }
}