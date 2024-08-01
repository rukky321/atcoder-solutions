#include <bits/stdc++.h>
using namespace std;

int main(){
    int h,w;
    cin >> h >> w;
    vector<vector<int>> a(h,vector<int>(w));

    vector<int> sumh(h);
    vector<int> sumw(w);

    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            cin >> a[i][j];
        }
    }

    for(int i=0;i<h;i++){
        int sum=0;
        for(int j=0;j<w;j++){
            sum+=a[i][j];
        }
        sumh[i] = sum;
    }

    for(int i=0;i<w;i++){
        int sum=0;
        for(int j=0;j<h;j++){
            sum+=a[j][i];
        }
        sumw[i] = sum;
    }

    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            cout << sumw[j]+sumh[i]-a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}