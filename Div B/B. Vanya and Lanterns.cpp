#include<bits/stdc++.h>
using namespace std;
#define ll long long
void Fasto()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
int main()
{
    Fasto();
    int n, l;
    cin >> n >> l;

    vector<int> locations(n);

    for (int i = 0; i < n; i++) {
        cin >> locations[i];
    }

    sort(locations.begin(), locations.end());

    double distance = 2 * max(locations[0] - 0, abs(locations[n - 1] - l));

    for (int i = 0; i < n - 1; i++) {
        distance = fmax(distance, locations[i + 1] - locations[i]);
    }

    printf("%.9f", distance * 0.5);
}

