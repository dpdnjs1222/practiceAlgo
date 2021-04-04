#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main(){

    stack<char> left, right;

    string s;
    cin >> s;

    for(int i=0; i<s.length(); i++)
        left.push(s[i]);

    int n;
    cin >> n;
    while(n--){
        char order;
        cin >> order;
        
        if(order == 'L'){
            if(!left.empty()){
                right.push(left.top());
                left.pop();
            }
        }else if(order == 'D'){
            if(!right.empty()){
                left.push(right.top());
                right.pop();
            }
        }else if(order == 'B'){
            if(!left.empty())
                left.pop();
        }else if(order == 'P'){
            char text;
            cin >> text;
            left.push(text);
        }
    }

    while(!left.empty()){
        right.push(left.top());
        left.pop();
    }
    while(!right.empty()){
        cout << right.top();
        right.pop();
    }
}