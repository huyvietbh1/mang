#include <bits/stdc++.h>
#define N 1000004
using namespace std;
int n,k,a[N],cnt[N],ans;
int main()
{
    cin >> n >> k;
    for(int i=1; i<=n; i++)
        cin >> a[i];
    for(int i=1; i<=n; i++)
    {
        int x = k-a[i];
        ans += cnt[x];
        cnt[a[i]]++;
    }
    cout << ans;
    return 0;
}
