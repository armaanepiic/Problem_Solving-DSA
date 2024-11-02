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

int arr[5];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    // copying a vector
    vector<int> v = {2, 4, 6, 8};
    vector<int> temp = v;
    cout << "size of v = " << v.size() << endl;
    cout << "size of temp = " << temp.size() << endl;

    /*
    // global array
    cout << "Global Array: ";
    for (int i = 0; i < 5; i++)
        cout << arr[i] << ' ';
    cout << endl;

    // ----------------------------------------------
    //         Declaring vector as an array
    // ----------------------------------------------
    vector<int> v1(5); // all the values are 0 by default
    cout << "v1 = ";
    for (int i = 0; i < 5; i++)
        cout << v1[i] << ' ';
    vector<int> v2(5, 2);
    cout << endl;
    cout << "v2 = ";
    for (int i = 0; i < 5; i++)
        cout << v2[i] << ' ';
    */

    /*
    // ----------------------------------------------
    //                  Vector initialze
    // ----------------------------------------------
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    for (int i = 0; i < v.size(); i++)
        cout << v[i] << ' ';
    cout << endl;
    cout << "size = " << v.size() << endl;
    // ----------------------------------------------
    //                  v.resize()
    // ----------------------------------------------
    v.resize(10);
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << ' ';
    cout << endl;
    cout << "After using v.resize()" << endl;
    // ----------------------------------------------
    //                  v.empty()
    // ----------------------------------------------
    cout << "size = " << v.size() << endl;
    cout << "Empty? = " << v.empty() << endl;
    cout << "After using v.clear():" << endl;
    // ----------------------------------------------
    //                  v.clear()
    // ----------------------------------------------
    v.clear();
    cout << "size = " << v.size() << endl;
    cout << "Empty? = " << v.empty() << endl;
    */

    return 0;
}