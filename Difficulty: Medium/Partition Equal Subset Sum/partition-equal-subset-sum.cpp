//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// class Solution {
//   public:
//     bool equalPartition(vector<int>& arr) {
//         // code here
        
//     }
// };


class Solution {
  public:
    int dp[105][4005];
    bool fn(vector<int>&a,int sum,int i){
        if(sum==0)return 1;
        if(i>=a.size())return 0;
        if(dp[i][sum]!=-1)return dp[i][sum];
        int ans=fn(a,sum,i+1);
        if(sum>=a[i])ans|=fn(a,sum-a[i],i+1);
        return dp[i][sum]=ans;
    }
    bool equalPartition(vector<int>& arr) {
        int sum=accumulate(arr.begin(),arr.end(),0LL);
        if(sum%2)return 0;
        memset(dp,-1,sizeof(dp));
         return fn(arr,sum/2,0);
        
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        if (ob.equalPartition(arr))
            cout << "true\n";
        else
            cout << "false\n";
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends