#include<iostream>
#include<vector>
#include<cstdlib>

using namespace std;

int is_available(vector<bool> broken, int now){
    if(now == 0)
        return broken[now]? 0 : 1;
    int len = 0;
    while(now){
        if(broken[now % 10])
            return 0;
        now = now / 10;
        len++;
    }
    return len;
}

int main(){
    int n, m;
    vector<bool> broken(10, false);
    
    scanf("%d", &n);
    scanf("%d", &m);

    for(int i=0; i<m; i++){
        int key;
        scanf("%d", &key);
        broken[key] = true;
    }

    int min_push = 999999;
    for(int diff = 0; ; diff++){
        if(m == 10)
            break;
        if(n-diff >= 0){
            int len = is_available(broken, n-diff);
            if(len){
                min_push = len + diff;
                break;
            }    
        }
        int len = is_available(broken, n+diff);
        if(len){
            min_push = len + diff;
            break;
        }
    }
    printf("%d", min(min_push, abs(n-100)));
}