#include <bits/stdc++.h>
using namespace std;
int n,k,a[100005],res;
int main()
{
    cin >> n >> k;
    for(int i=1; i<=n; i++)
        cin >> a[i];
    for(int i=1; i<=n; i++)
    {
        int s = k-a[i];
        if(binary_search(a+i,a+n+1,s));
            res++;
    }
    cout << res;
    return 0;
}
