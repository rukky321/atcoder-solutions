#include<bits/stdc++.h>
using namespace std;

int main(){
    map<int,int> dict = {};
    int q;
    cin >> q;
    int query;
    int x;
    for(int i=0;i<q;i++){
        cin >> query;
        if(query==1){
            cin >> x;
            auto iter = dict.find(x);
            if(iter!=end(dict)){
                dict[x]++;
            }
            else{
                dict[x]=1;
            }
        }
        else if(query==2){
            cin >> x;
            dict[x]--;
            if(dict[x]==0){
                dict.erase(x);
            }
        }
        else{
            cout << dict.size()<< "\n";
        }
    }
    return 0;
}