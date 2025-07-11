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

    cout << "front : " << q.front() << endl
         << "back : " << q.back() << endl;

    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
}
void Priority_queue()
{
    priority_queue<int> pq; // greater element first (max heap)
    // priority_queue <int, vector<int> , greater<int> > pq; // lower first (min heap)
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        pq.push(x);
    }
    // pq.pop();
    while (!pq.empty())
    {
        cout << pq.top() << endl;
        pq.pop();
    }
    cout << "Size = " << pq.size();
}
void Set()
{
    // everything log(n) TC
    set<int> st;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.insert(x);
    }
    // st.insert(6);
    // clear the whole set
    // st.clear();
    // erase an element
    // st.erase(3);
    st.erase(st.find(3));
    // st.find() gives the pointer of the searched number

    for (auto &it : st)
        cout << it << ' ';
    cout << "\nsize of set : " << st.size() << endl;
    if (st.find(6) != st.end())
        cout << "exist" << endl;
    else
        cout << "Doesn't exist\n";
    // check occurrence
    cout << st.count(4) << endl;

    set<int> st1 = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    auto it1 = st1.find(2);
    auto it2 = st1.find(5);
    st1.erase(it1, it2);
    for (auto &it : st1)
        cout << it << ' ';
    cout << endl;
}
void Multiset()
{
    multiset<int> ms = {1, 2, 3, 4, 5, 4, 3, 2, 1, 1};
    // erase
    // all 1 erased
    // ms.erase(1);
    // occurrence of 1 in multiset
    int cnt = ms.count(1);
    cout << cnt << endl;
    // one occurrence of 1 erased
    // ms.erase(ms.find(1));

    // deleting 2 occurrence of 1
    for (int i = 0; i < 2; i++)
    {
        auto it = ms.find(1);
        if (it != ms.end())
            ms.erase(it);
    }

    cout << "size of multiset: " << ms.size() << endl;
    for (auto &it : ms)
        cout << it << ' ';
    cout << endl;
}
void UnorderedSet()
{
    unordered_set<int> un_st = {7, 3, 8, 7, 8, 3, 4, 6, 7};
    for (auto &it : un_st)
        cout << it << ' ';
    cout << endl;
}
void Map()
{
    // map = {key, value}
    // log(n)
    // map store unique keys in sorted order
    map<int, int> mp;
    int n;
    cin >> n;
    // for (int i = 0; i < n; i++)
    // {
    //     int x, y;
    //     cin >> x >> y;
    //     mp.insert({x,y});
    // }
    // for(auto &it : mp) cout << it.first << ' ' << it.second << endl;
    map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        m[x]++;
    }
    for (auto &it : m)
        cout << it.first << ' ' << it.second << endl;
    if (m.find(5) != m.end())
        cout << "exist\n";
    else
        cout << "Doesn't exist\n";

    auto it = m.find(14);
    if (it != m.end())
        cout << it->first << ' ' << it->second << endl;
    else
        cout << "nai\n";

    // If you can see * in the type (like pair<int,int>*) → use ->
    // If it's an iterator → use -> (iterators act like pointers)
    // Everything else → use .
}
void Sort()
{
    int arr[6] = {6, 1, 4, 3, 8, 7};
    // ascending order sorting
    sort(arr, arr + 6);
    // descendin order sorting
    sort(arr, arr + 6, greater<int>());
    for (auto it : arr)
        cout << it << ' ';
    cout << endl;
    int n = 5;
    vector<int> vec(n);
    for (int i = 0; i < n; i++)
        cin >> vec[i];
    sort(vec.begin(), vec.end());
    sort(vec.rbegin(), vec.rend());
    for (auto &it : vec)
        cout << it << ' ';
    cout << endl;
}
bool comp(pair<int, int> p1, pair<int, int> p2)
{
    // if(p1.second < p2.second) return true;
    // else if (p1.second > p2.second) return false;
    // else if(p1.second == p1.second){
    //     if(p1.first > p2.first) return true;
    //     else return false;
    // }
    if (p1.second == p2.second)
        return p1.first > p2.first;
    else
        return p1.second < p2.second;
}
void CustomSort()
{
    /*
    -> sort according to the second element
    -> if the second element is same
    -> then sort it according to the first element
    -> but in descending order
    */
    pair<int, int> a[] = {{1, 2}, {2, 1}, {4, 1}};
    int n = 3;
    sort(a, a + n, comp);
    for (int i = 0; i < n; i++)
        cout << a[i].first << ' ' << a[i].second << endl;
}
void NumberOfBits()
{
    int n = 6;
    int bitsCnt = __builtin_popcount(n);
    cout << bitsCnt << endl;
    long long num = 165786578687;
    bitsCnt = __builtin_popcount(num);
    cout << bitsCnt << endl;

}
void Permutation()
{
    int cnt = 0;
    string s = "1243";
    do {
        cout << s << endl;
        cnt++;
    } while (next_permutation(s.begin(), s.end()));
    cout << "total permutations: " << cnt << endl;
    
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
    // Queue();
    // Priority_queue();
    // Set();
    // Multiset();
    // UnorderedSet();
    // Map();
    // Sort();
    // CustomSort();
    // NumberOfBits();
    // Permutation();
    vector <int> v = {1,2,3,4,5};
    int maxi = *max_element(v.begin() , v.end());
    int maxIndx = max_element(v.begin() , v.end()) - v.begin();
    cout << "Maximum Element : " << maxi << endl;
    int mini = *min_element(v.begin() , v.end());
    int minIndx = min_element(v.begin() , v.end()) - v.begin();
    cout << "Minimum Element : " << mini << endl;

    cout << maxIndx << ' ' << minIndx;

    return 0;
}