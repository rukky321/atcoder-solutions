#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<pair<int,int>> sorted = {};
    vector<pair<int,int>> possibles = {};
    int n,q;
    cin >> n >> q;
    int value,p;
    int idx;
    for(int i=0;i<q;i++){
        cin >> p >> value;
        idx=0;
        for(;idx<sorted.size();idx++){
            if(value < sorted[idx].first){
                break;
            }
        }
        sorted.insert(sorted.begin()+idx,make_pair(value,i));
        possibles.push_back(make_pair(p,2));
        for(int j=idx+1;j<sorted.size();j++){
            if(possibles[sorted[j].second].first < p){
                if(possibles[sorted[j].second].second!=1){
                    possibles[sorted[j].second].second=0;
                }
                else{
                    cout << "0\n";
                    return 0;
                }
                if(possibles[i].second!=0){
                    possibles[i].second=1;
                }
                else{
                    cout << "0\n";
                    return 0;
                }
            }
            else if(possibles[sorted[j].second].first > p){
                if(possibles[sorted[j].second].second!=0){
                    possibles[sorted[j].second].second=1;
                }
                else{
                    cout << "0\n";
                    return 0;
                }
                if(possibles[i].second!=1){
                    possibles[i].second=0;
                }
                else{
                    cout << "0\n";
                    return 0;
                }
            }
            else{
                cout << "0\n";
                return 0;
            }
        }
    }
    long long ans=1;
    for(int i=0;i<possibles.size();i++){
        if(possibles[i].second==2){
            ans*=2;
            ans%=998244353;
        }
    }
    cout << ans << endl;
    return 0;
}