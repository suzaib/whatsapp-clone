#include<bits/stdc++.h>
using namespace std;

class SGTree{
    public:
        vector<int> seg;
        SGTree(int n){
            seg.resize(4*n+1); //Just for safety reasons
        }
        //Build function for segment trees
        void build(int idx,int low,int high,vector<int> &arr){
            if(low==high){
                seg[idx]=arr[low];
                return;
            }
            int mid=(low+high)>>1;
            build(2*idx+1,low,mid,arr);
            build(2*idx+2,mid+1,high,arr);
            seg[idx]=min(seg[2*idx+1],seg[2*idx+2]);
        }

        //The query function
        int query(int idx,int low,int high,int l,int r){

            //No Overlap
            if(l>high || r<low) return INT_MAX;

            //full Overlap
            if(l<=low && r>=high) return seg[idx];

            //Partial Overlap
            int mid=(low+high)>>1;
            int left=query(2*idx+1,low,mid,l,r);
            int right=query(2*idx+2,mid+1,high,l,r);
            return min(left,right);
        }

        //The update code
        void update(int idx,int low,int high,int _idx,int val){
            if(low==high){
                seg[idx]=val;
                return;
            }
            int mid=(low+high)>>1;
            if(_idx<=mid) update(2*idx+1,low,mid,_idx,val);
            else update(2*idx+2,mid+1,high,_idx,val);
            seg[idx]=min(seg[2*idx+1],seg[2*idx+2]);
        }

        //The solve function 
        void solve(){
            int n;
            cin>>n;
            vector<int> arr(n);
            for(int i=0;i<n;i++) cin>>arr[i];
            build(0,0,n-1,arr);
            int q;
            cin>>q;
            while(q--){
                int type;
                cin>>type;
                if(type==1){
                    int l,r;
                    cin>>l>>r;
                    cout<<query(0,0,n-1,l,r)<<"\n";
                }
                else{
                    int i,val;
                    cin>>i>>val;
                    update(0,0,n-1,i,val);
                    arr[i]=val;
                }
            }
        }
};


class SGTree{
    public:
        vector<int> seg;
        SGTree(int n){
            seg.resize(4*n+1);
        }

        void build(int idx,int low,int high,vector<int> &arr){
            if(low==high){
                seg[idx]=arr[low];
                return;
            }

            int mid=low+(high-low)/2;
            build(2*idx+1,low,mid,arr);
            build(2*idx+2,mid+1,high,arr);
            seg[idx]=min(seg[2*idx+1],seg[2*idx+2]);
        }

        int query(int idx,int low,int high,int l,int r){

            //No Overlap
            if(l>high && r<low) return INT_MAX;

            //Complete Overlap
            if(l<=low && r>=high) return seg[idx];

            int mid=low+(high-low)/2;
            int left=query(2*idx+1,low,mid,l,r);
            int right=query(2*idx+2,mid+1,high,l,r);
            return min(left,right):
        }

        void update(int idx,int low,int high, int _idx,int val){
            if(low==high){
                seg[idx]=val;
                return;
            }

            int mid=low+(high-low)/2;
            if(_idx<mid) update(2*idx+1,low,mid,_idx,val);
            else update(2*idx+2,mid+1,high,_idx,val);
            seg[idx]=min(seg[2*idx+1],seg[2*idx+2]);
        }

        void solve(){
            int n;
            cin>>n;
            vector<int> arr(n);
            for(int i=0;i<n;i++) cin>>arr[i];

            build(0,0,n-1,arr);
            int q;
            cin>>q;
            while(q--){
                int type;
                cin>>type;
                if(type==1){
                    int l,r;
                    cin>>l>>r;
                    cout<<query(0,0,n-1,l,r)<<"\n";
                }
                else{
                    int i,val;
                    cin>>i>>val;
                    update(0,0,n-1,i,val);
                    arr[i]=val;
                }
            }
        }
}