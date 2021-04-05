#include <iostream>
#include <queue>
#include <string>

using namespace std;

void my_solution(queue<int> q, int n, int k){
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
}

void another_solution(queue<int> q, int n, int k){
    for(int i=0; i<n-1; i++){
        for(int j=0; j<k-1; j++){
            q.push(q.front());
            q.pop();
        }
        cout << q.front() << ", ";
        q.pop();
    }
    cout << q.front();
}

int main(){

    queue<int> q;

    int n, k;
    cin >> n >> k;

    for(int i=1; i<=n; i++)
        q.push(i);

    cout << '<';
    my_solution(q, n, k);
    cout << '>';
}