#include "bits/stdc++.h"
using namespace std;

void IO(){
     #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int main(){
    IO();

    int n;
    cin>>n;
    vector<int> p(n+1),q(n+1);
    for(int i=1;i<=n;++i) cin>>p[i];
    for(int i=1;i<=n;++i) cin>>q[i];

    vector<vector<int>> multiples(n+1);
    for(int i=1;i<=n;++i){
        for(int j=i;j<=n;j+=i){
            multiples[i].push_back(j);
        }
    }

    vector<int> invq(n+1);
    for(int i=1;i<=n;++i){
        invq[q[i]] = i;
    }

    vector<vector<int>> a(n+1);

    for(int i=1;i<=n;++i){
        for(int j:multiples[p[i]]){
            a[i].emplace_back(invq[j]);
        }
        sort(rbegin(a[i]),rend(a[i]));
    }

    vector<int> b;
    for(int i=1;i<=n;++i){
        for(int j:a[i]){
            b.push_back(j);
        }
    }

    //now finding longest increasing subsequence
    vector<int> res;
    for(int x:b){
        auto it = lower_bound(begin(res),end(res),x);
        if(it == res.end()) res.push_back(x);
        else *it = x;
    }

    cout<< res.size() <<"\n";

    return 0;
}