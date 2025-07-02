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
#define rev_sort(x) sort((x).begin(), (x).end(), greater<int>())
#define maxelement(x) max_element(v.begin(), v.end()) - v.begin()
#define minelement(x) min_element(v.begin(), v.end()) - v.begin()

int dx[8] = {1, -1, 0, 0, 1, 1, -1, -1};
int dy[8] = {0, 0, 1, -1, 1, -1, 1, -1};

bool isVowel(char ch)
{
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        return true;
    return false;
}
int maxVowels(string &s, int &k)
{
    int len = s.length();
    int cnt = 0, x = 0;
    for (int i = 0; i < k; i++)
        if (isVowel(s[i]))
            x++;
    cnt = max(cnt, x);
    int l = 0, r = k-1;
    cout << "x = " << x << endl;
    while(r < len-1)
    {
        if(isVowel(s[l])){
            x--;
        }
        if(isVowel(s[r+1])){
            x++;
        }
        l++;
        r++;
        cnt = max(cnt,x);
    }
    cout << cnt;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s;
    int k;
    cin >> s >> k;
    maxVowels(s, k);

    return 0;
}