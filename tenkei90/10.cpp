#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,q;
    cin >> n;
    vector<pair<int,int>> res={};
    res.push_back(pair(0,0));
    int c,score;
    for(int i=0;i<n;i++){
        pair<int,int> data(res.back().first,res.back().second);
        cin >> c >> score;
        if(c==1) data.first+=score;
        else data.second+=score;
        res.push_back(data);
    }
    cin >> q;
    int l,r;
    for(int i=0;i<q;i++){
        cin >> l >> r;
        cout << res[r].first-res[l-1].first << " " << res[r].second-res[l-1].second << endl;
    }
    return 0;
}