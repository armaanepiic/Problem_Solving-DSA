// Arman Hossain C193033
// Programming is fun with emotion
#include <bits/stdc++.h>
using namespace std;

using ll = long long int;
using ull = unsigned long long;
using vi = vector<int>;
using vll = vector<ll>;
using vc = vector<char>;
using vs = vector<string>;
using vvi = vector<vector<int>>;
using vpi = vector<pair<int, int>>;
using vvs = vector<vector<string>>;

#define ff first
#define ss second
#define pb push_back
#define mp make_pair
#define sz(s) (s).length()
#define digits(x) trunc(log10(x)) + 1
#define all(x) (x).begin(), (x).end()
#define sumvec(x) accumulate((x).begin(), (x).end(), 0)
#define uniq_element(x) unique((x).begin(), (x).end()) - (x).begin()
#define rev_sort(x) sort((x).begin(), (x).end(), greater<int>())
#define maxelement(x) max_element((x).begin(), (x).end()) - (x).begin()
#define minelement(x) min_element((x).begin(), (x).end()) - (x).begin()

int dx[8] = {1, -1, 0, 0, 1, 1, -1, -1};
int dy[8] = {0, 0, 1, -1, 1, -1, 1, -1};

const int N = 10000001;
bool sieve[N];

void generate_sieve()
{
    sieve[0] = sieve[1] = 1;
    for (int i = 2; i * i < N; i++)
    {
        if (!sieve[i])
        {
            for (int j = i * i; j < N; j += i)
                sieve[j] = 1;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        ll count = 0, day = 0;
        bool flag = true, f = 1;
        vector<ll> boxes;
        boxes.push_back(1);
        ll n;
        cin >> n;
        vector<ll> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];

        for (int i = 2; i <= n; i++)
        {
            ll x = (2 * i) - 1;
            x *= 4;
            x -= 4;
            boxes.push_back(x + boxes[i-2]);
        }
        for (int i = 0; i < n; i++)
        {
            count += v[i];
            if (binary_search(boxes.begin(), boxes.end(), count))
                day++;
        }
        cout  << day << endl;
    }

    return 0;
}