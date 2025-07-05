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

void Pair()
{
    pair<int, int> p1 = {1, 3};
    cout << p1.first << ' ' << p1.second << endl;

    pair<int, pair<int, int>> p2 = {1, {2, 3}};
    cout << p2.first << ' ' << p2.second.first << ' ' << p2.second.second << endl;

    pair<int, int> arr[4] = {{1, 2}, {3, 4}, {5, 6}, {7, 8}};
    for (int i = 0; i < 4; i++)
    {
        cout << arr[i].first << ' ' << arr[i].second << endl;
    }
}
void Vector()
{
    int n;
    cin >> n;
    vector<int> v1(n);
    for (int i = 0; i < n; i++)
        cin >> v1[i];
    cout << "vector of integers: \n";
    // for (int i = 0; i < n; i++)
    //     cout << v1[i] << ' ';
    // cout << endl;

    // insert and element
    v1.insert(v1.begin() + 1, 1, 10);

    // insert a vector(copy) into another vector
    vector<int> copy = {5, 6, 7, 8};
    v1.insert(v1.begin() + 1, copy.begin(), copy.end());

    // delete an element
    // v1.erase(v1.begin() + 1, v1.begin() +3);
    sort(v1.rbegin(), v1.rend());
    cout << "Sorted descending order: \n";
    for (vector<int>::iterator it = v1.begin(); it != v1.end(); it++)
    {
        cout << *it << ' ';
    }
    cout << endl;
    sort(v1.begin(), v1.end());
    cout << "Sorted ascending order: \n";
    for (vector<int>::iterator it = v1.begin(); it != v1.end(); it++)
    {
        cout << *it << ' ';
    }
    cout << endl;
    cout << "Size of the vector: " << v1.size() << endl;

    // clear a vector
    v1.clear();
    if (v1.empty())
        cout << "Empty vector" << endl;
    else
        cout << "Not empty" << endl;

    cout << "First element: " << v1.front() << endl;
    cout << "Last element: " << v1.back() << endl;

    cout << "vector of pairs: \n";
    vector<pair<int, int>> v2;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        // v2[i].first = x;
        // v2[i].second = y;
        // v2.emplace_back(x, y);
        v2.push_back({x, y});
        // cout << 'jo' ;
    }
    for (int i = 0; i < n; i++)
        cout << v2[i].first << ' ' << v2[i].second << endl;
    cout << "Copy of vector v2:\n";
    vector<pair<int, int>> v3(v2); // copying v2 to v3
    for (auto &it : v3)
    {
        cout << it.first << ' ' << it.second << endl;
    }
}
void List()
{
    list<int> ls = {1, 2};
    ls.push_back(3);
    for (auto &it : ls)
        cout << it << ' ';
    // push_back() => insert element at end
    // push_front() => insert element at the begining
    // pop_back() => delete element from the end
    // pop_front() => delete element from the begining
    cout << endl
         << "first element: " << ls.front() << endl
         << "last element: " << ls.back();
}
void Deque()
{
    int n;
    cin >> n;
    deque<int> dq;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        dq.push_back(x);
    }
    for (auto &it : dq)
        cout << it << ' ';
    // push_back() => insert element at end
    // push_front() => insert element at the begining
    // pop_back() => delete element from the end
    // pop_front() => delete element from the begining
    cout << endl
         << "first element: " << dq.front() << endl
         << "last element: " << dq.back();
}
void Stack()
{
    // LIFO => Last in First out
    // push, pop, top, size, empty
    int n;
    cin >> n;
    stack<int> st;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }
    cout << "Size of stack: " << st.size() << endl;
    while (!st.empty())
    {
        cout << "Size of stack: " << st.size() << endl;
        cout << st.top() << endl;
        st.pop();
    }
    cout << "Size of stack: " << st.size() << endl;

    // swapping stack
    stack<int> st2;
    st.swap(st2);
    cout << "Size of stack: " << st2.size() << endl;
}
void Queue()
{
    // FIFO => First IN, First OUT
    int n;
    cin >> n;
    queue<int> q;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        q.push(x);
    }
    cout << "Size of queue : " << q.size() << endl;

    cout << "front : " << q.front() << endl << "back : " << q.back() << endl;
    
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // Pair();
    // Vector();
    // List();
    // Deque();
    // Stack();
    Queue();

    return 0;
}