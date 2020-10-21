#include <bits/stdc++.h>
using namespace std;

long long l, n, f, b, sum;
vector < pair <long long,long long> > stops;
int main()
{
    freopen("reststops.in", "r", stdin);
    freopen("reststops.out", "w", stdout);
    cin >> l >> n >> f >> b;
    for (long long i = 0; i < n; i ++)
    {
        long long first, second;
        cin >> first >> second;
        stops.push_back(make_pair(first, second));
    }
    sort(stops.begin(), stops.end());
    long long highest = 0;
    for(long long i = n - 1; i >= 0; i--)
    {
        if (stops[i].second > highest)
        {
            sum += (stops[i].second - highest) * stops[i].first;
            highest = stops[i].second;
        }
    }
    cout << sum * (f - b);
    return 0;
}
