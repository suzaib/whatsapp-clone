#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        vector<int> cake(n);
        for(int i=0;i<n;i++) cin>>dist[i];


    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        long long pref=0;
        long long mini=LLONG_MAX;
        int n;
        cin>>n;

        for(int i=1;i<=n;i++){
            int x;
            cin>>x;
            pref+=x;
            mini=min(mini,pref/i);
            cout<<mini;
            if(i<n) cout<<' ';
        }
        cout<<"\n";
    }
    return 0;
}

    while (T--) {
        int n;
        cin >> n;

        long long pref = 0;
        long long mn = LLONG_MAX;

        for (int i = 1; i <= n; i++) {
            long long x;
            cin >> x;

            pref += x;
            mn = min(mn, pref / i);

            cout << mn;
            if (i < n) cout << ' ';
        }

        cout << '\n';
    }

    return 0;
}

0 7 7 8 5 0 7 7 8 5 0 5 5 7 3 0 5 5 7 3 1 1 5 1 0
