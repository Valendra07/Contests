#include<bits/stdc++.h>
using namespace std;

void solve()
{
        int n;
        cin>>n;
    
        long long int sumA = 0, sumB = 0, mini=
        1e9+1, maxi = -1e9-1;
        for(int i = 0; i < n; i++){
            long long int x;
            cin >> x;
            if(i%2)
            {
                sumB += abs(x);
                maxi = max(maxi, abs(x));
            }
            else 
            {
                sumA += abs(x);
                
                mini = min(mini, abs(x));
            }
        }
        
        long long int ans = sumA - sumB;
        if(maxi > mini)
        {
            long long int diff = 2*(maxi-mini);
            ans += diff;
        }
        cout << ans << endl;
        
}



        int main()
        {
            int t = 1;
            cin >> t;
            while (t--)
            {
                solve();
            }
            return 0;
}
