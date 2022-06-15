// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
  public:
    vector<int> duplicates(int arr[], int n) {
        vector<int>v;
        vector<int>e;
        e.push_back(-1);
        unordered_map<int,int>m;
        for(int i=0;i<n;i++){
            m[arr[i]]=m[arr[i]]+1;
        }
        for(auto x:m){
            if(x.second>1){
                v.push_back(x.first);
            }
        }
        sort(v.begin(),v.end());
        if(v.empty()==false)
            return v;
        else return e;
    }
};


// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        Solution obj;
        vector<int> ans = obj.duplicates(a, n);
        for (int i : ans) cout << i << ' ';
        cout << endl;
    }
    return 0;
}
  // } Driver Code Ends