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
    vector<int> v(n);
    int sum = 0;

    for(int i=0;i<n;++i){
        cin>>v[i];
        sum += v[i];
    }

    sum /= n;
    int ans1 = 0,ans2=0;

    for(int i=0;i<n;++i){
        ans1 += (v[i]-sum)*(v[i]-sum);
    }

    ++sum;

    for(int i=0;i<n;++i){
        ans2 += (v[i]-sum)*(v[i]-sum);
    }

    cout<<min(ans1,ans2);

    return 0;
}