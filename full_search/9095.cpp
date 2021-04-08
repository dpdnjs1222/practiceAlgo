#include<iostream>
#include<vector>
#include<cstdlib>

using namespace std;

int solution(int n){
    int answer = 0;
    if(n==1 || n==2 || n==3)
        answer += 1;
    if(n > 3)
        answer += solution(n-3);
    if(n > 2)
        answer += solution(n-2);
    if(n > 1)
        answer += solution(n-1);
    return answer;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        cout << solution(n) << '\n';
    }
}