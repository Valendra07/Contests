#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int d,l,r;
    cin>>d>>l>>r;

    if(d<l)
    {
        cout << "Too Early" << endl;
        return;
    }
    else if (d > r)
    {
        cout << "Too Late" << endl;
        return;
    }
    else
        cout << "Take second dose now" << endl;
}

int main(){
    int t=1;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
