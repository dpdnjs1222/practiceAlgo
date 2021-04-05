#include<iostream>

using namespace std;

int main(){
    int e, s, m;
    scanf("%d %d %d", &e, &s, &m);

    for(int i=0; ;i++){
        int x = 28 * i + s;
        if(x%15 == e%15 && x%19 == m%19){
            printf("%d", x);
            break;
        }
    }
}