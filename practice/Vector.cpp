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

    vector<int> v = {2, 3, 4, 5};
    // accesing the first element of vector
    // v.front() or *v.begin()
    // cout << "First element = " << *v.begin() << endl;
    cout << "First element = " << v.front() << endl;
    // v.back() accessing the last element
    cout << "size = " << v.size() << endl << "last element = " << v.back() << endl;
    // v.pop_back() delete the last element
    v.pop_back(); // O(1)
    cout << "size = " << v.size() << endl
         << "last element = " << v.back();

    /*
    // reversing a vector
    vector<int> v = {5, 7, 9, 3, 1};
    reverse(v.begin(), v.end());
    for(auto it: v)
        cout << it << ' ';
    */

    /*
    // ----------------------------------------------
    // sorting a vector
    // O(n log 2n)
    // ----------------------------------------------
    vector<int> v = {5, 7, 9, 3, 1};
    // sort(v.begin(), v.end());
    // sort until index 3
    // sort(v.begin(), v.begin() + 3);
    // sort 1-3 index
    // sort(v.begin() + 1, v.begin() + 4);
    // sorting decreasing order
    // sort(v.begin(), v.end(), greater<int>());
    sort(v.rbegin(), v.rend());
    for(auto it: v)
        cout << it << " ";
    cout << endl;
    */

    /*
    // ----------------------------------------------
    //                 sorting an array
    // ----------------------------------------------
    int a[] = {9, 7, 5, 3, 1};
    cout << "Before sort:" << endl;
    for (auto it : a)
        cout << it << ' ';
    sort(a, a + 5);
    cout << endl << "After sort:" << endl;
    for(auto it : a)
        cout << it << ' ';
    */

    /*
    // inserting value until 0
    int n;
    vector<int> v;
    while (cin >> n && n != 0)
    {
        // if(n == 0)
        //     break;
        v.push_back(n);
    }
    for (auto &&i : v)
        cout << i << ' ';
    */

    /*
    // for each loop
    vector<int> v = {1, 2, 3, 4, 5};
    for (auto it : v) // passed by copy
        cout << it << ' ';
    cout << endl;
    for (auto &it : v) // passed by referece
        it++;
    for (auto it : v)
        cout << it << ' ';
    */

    /*
    // range based for loop
    vector<int> v = {1,2,3,4,5};
    vector<int>::iterator it;
    for (it = v.begin(); it != v.end(); it++)
        cout << *it << ' ';
    */

    /*
    // copying a vector
    vector<int> v = {2, 4, 6, 8};
    vector<int> temp = v;
    cout << "size of v = " << v.size() << endl;
    cout << "size of temp = " << temp.size() << endl;
    */

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