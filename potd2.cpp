//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

vector<int> minAnd2ndMin(int a[], int n);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];

        for (int i = 0; i < n; i++) 
            cin >> a[i];

        vector<int> ans = minAnd2ndMin(a, n);
        if (ans[0] == -1)
            cout << -1 << endl;
        else 
            cout << ans[0] << " " << ans[1] << endl;
    }
    return 0;
}
// } Driver Code Ends


vector<int> minAnd2ndMin(int a[], int n) {
 if(n>=2){   int min=a[0];
    for(int i=0;i<n;i++){
        if(a[i]<min)
        min = a[i];
    }
    int min1 = INT_MAX;
    for(int i=0;i<n;i++){
        if(a[i]<min1 && a[i]>min)
        min1=a[i];
    }
    if(min1== INT_MAX){
        vector <int> v= {-1,-1};
        return v;
    }
    else {
        vector<int> v = {min,min1};
        return v;
    }
 }
    else{
        vector <int> v={-1,-1};
        return v;
    }
}

