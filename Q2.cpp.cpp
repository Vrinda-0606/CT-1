#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;

   //inputs
    vector<int> arr(n);
    for(auto &i:arr) cin>>i;

    int target; cin>>target;

    unordered_set<int> s;

    vector<vector<int>> ans;

    //pairs
    for(auto &i: arr){
        if(s.find(target-i) != s.end()){
            ans.push_back({i, target-i}); 
        }
        s.insert(i);
    }

    if(ans.size() == 0){
        cout<<"Pair not found"<<endl;
    }
    else{
        for(auto &v: ans){
            cout<<v[0]<<" "<<v[1]<<endl;
        }
    }
}
