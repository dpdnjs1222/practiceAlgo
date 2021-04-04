#include <iostream>
#include <stack>
#include <string>

using namespace std;

string valid(string s){
    int cnt = 0;

    for(int i=0; i<s.length(); i++){
        if(s[i] == '('){
            cnt++;
        }else if(s[i] = ')'){
            if(cnt > 0){
                cnt--;
            }else{
                return "NO";
            }
        }
        if(i == s.length() - 1){
            return (cnt == 0 ? "YES" : "NO");
        }
    }
}

int main(){

    int n;
    cin >> n;

    while(n--){
        string s;
        cin >> s;
        cout << valid(s) << '\n';
    }
}