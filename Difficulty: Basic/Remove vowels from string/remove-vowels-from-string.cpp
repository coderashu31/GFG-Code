//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:

    string removeVowels(string& str) {
        // Your code goes here
        for (int i = 0; i < str.length(); i++)
        {
            if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
            {
                str = str.substr(0,i) + str.substr(i+1);
                i--;
            }
        }
    return str;
  }
};

//{ Driver Code Starts.

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    string tc;
    getline(cin, tc);
    t = stoi(tc);
    while (t--) {
        string s, ch;

        getline(cin, s);

        Solution ob;
        cout << ob.removeVowels(s) << "\n";

        cout << "~"
             << "\n";
    }

    return 0;
}
// } Driver Code Ends