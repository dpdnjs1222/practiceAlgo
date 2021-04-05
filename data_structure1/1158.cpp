#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main(){

    queue<int> q;

    int n, k;
    cin >> n >> k;

    for(int i=1; i<=n; i++)
        q.push(i);

    cout << '<';
    int i = 1;
    while(!q.empty()){
        int now = q.front();
        q.pop();
        if(i%k == 0){
            cout << now;
            if(!q.empty())
                cout << ", ";
        }else{
            q.push(now);
        }
        i++;
    }
    cout << '>';
}