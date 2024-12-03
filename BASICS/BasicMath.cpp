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

void Digit()
{
    // Counting number of Digits
    // Approach : 1
    // TC: O(log10N + 1)
    /*
    int n = 1025;
    int temp = n;
    int cnt = 0;
    while(temp != 0){
        cnt++;
        temp /= 10;
    }
    cout << "Number of digits = " << cnt << endl;

    // Approach : 2
    // TC: O(1)
    int cnt1 = (int)(log10(n) + 1);
    cout << "Number of digits = " << cnt1;


    // Converting a string to number without using builtin function
    string str = "789654";
    int temp = 0;
    for (int i = 0; i < str.length(); i++)
    {
        temp = (temp * 10) + (int)str[i] - 48;
    }
    cout << temp;
    */

    // sum of digits from a number
    /*
    int n = 12345;
    int sum = 0;
    while(n!=0){
        sum += n % 10;
        n /= 10;
    }
    cout << "Sum of digits = " << sum;
    */

    // sum of digits from a string
    /*
    string str = "2525";
    int sum = 0;
    for (int i = 0; i < str.length(); i++)
    {
        sum += (int)str[i] - 48;
    }
    cout << "Sum of digits = " << sum;
    */
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    Digit();

    return 0;
}