#include "bits/stdc++.h"
using namespace std;
#define ll long long

void FAST_IO(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
}


void solve(int cTc){
    int n;
    cin>>n;

    vector<int> v,cnt(n);

    for(int i=0;i<n;++i){
        cin>>cnt[i];
        if(v.empty() || v.back()!=cnt[i]){
            v.push_back(cnt[i]);
        }
    }

    int val = v[0];
    for(int i=1;i<v.size();++i){
        if(v[i] < v[i-1]){
            break;
        }else val = v[i];
    }

    for(int i=0;i<n;++i){
        if(cnt[i]==val) continue;
        cout<< cnt[i] <<" ";
    }

}

int main(){
       FAST_IO();
       int tc=1;
       // cin>>tc;
       for(int i=1;i<=tc;++i){
              solve(i);
       }
       return 0;
}

