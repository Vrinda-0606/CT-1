#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    vector<int> arr(n);

    //input array
    for(auto &i: arr) cin>>i;

    //sorting the array
    sort(arr.begin(), arr.end());

    //choosing starting and mid index
    int i = 0,  j = n/2 + n%2;

    //ans vector to store the ans.
    vector<int> ans;

    //pushing elements in ans array in an order so that 
    //each second element in greater.
    while(i < n/2 + n%2 || j < n){
        if(i < n/2 + n%2) ans.push_back(arr[i++]);
        if(j < n) ans.push_back(arr[j++]);
    }

    //printing ans
    for(auto &i: ans) cout<<i<<" ";
    cout<<endl;
}
