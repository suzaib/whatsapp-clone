#include<bits/stdc++.h>
using namespace std;
int countChips(int top,int bottom,int left,int right,vector<pair<int,int>> &chips,char c,int k){
    
}
pair<int,int> countPoints(vector<pair<int,int>> &chips,vector<pair<char,int>> &moves){
    int m=moves.size();
    int n=chips.size();

    int cntA;
    int cntB;
    for(int i=0;i<m;i++){
        char c=moves.first;
        int k=moves.second;
        if(i%2==0) cntA+=countChips();
        else cntB+=countChips();
    }
    return {cntA,cntB};
}
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int a,b,n,m;
        cin>>a>>b>>n>>m;
        vector<pair<int,int>> cord;
        for(int i=0;i<n;i++){
            int x,y;
            cin>>x>>y;
            cord.push_back({x,y});
        }

        vector<pair<char,int>> moves;
        for(int i=0;i<m;i++){
            char c;
            int k;
            cin>>c>>k;
            moves.push_back({c,k});
        }
        vector<pair<int,int>> points=countPoints(cord,moves);
        cout<<points.first<<points.second;
    }
    return 0;
}