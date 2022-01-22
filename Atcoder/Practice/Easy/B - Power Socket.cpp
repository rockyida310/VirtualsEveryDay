#include "bits/stdc++.h"
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;

    int cnt = 0 ,curr=1;

    while(curr < b){
        ++cnt;
        curr += a-1;
    }

    cout<<cnt;

    return 0;
}