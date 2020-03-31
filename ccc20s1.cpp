#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    double gd = 0;
    int n,m,s;
    map<int,int> mp;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> s >> m;
        mp[s] = m;
    }
    map<int, int>::iterator it;
    map<int, int>::iterator it2 = mp.end();
    it2--;
    for(it = mp.end();it!=mp.begin();it--){
        double a = (double)(abs((it->second)-(it2->second))) / ((it->first)-(it2->first));
        gd = (gd>a) ? gd : a;
        it2--;
    }

    cout << fixed << setprecision(6) << gd << endl;
    return 0;
}
