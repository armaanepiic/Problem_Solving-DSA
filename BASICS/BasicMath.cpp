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

void Reverse()
{
    // reversing a number and store it into another int variable
    int num = 6789;
    int rev_num = 0;
    while(num != 0){
        rev_num = (rev_num * 10) + (num % 10);
        num /= 10;
    }
    cout << rev_num << endl;

    // From a string
    string str = "12345";
    int reverse_number = 0;
    for (int i = 0; i < str.length(); i++)
    {
        int temp = (int)str[str.length() - i - 1] - 48;
        reverse_number = (reverse_number * 10) + temp;
    }
    cout << reverse_number;
}

void Palindrome(){
    // Approach: 1
    // comparing with the reverse version
    // comparing using loop in time of string
    string str = "MBABM";
    bool isPalindrom = true;
    for (int i = 0; i < str.length() / 2; i++)
    {
        if(str[i] != str[str.length()-i-1]){
            isPalindrom = false;
            break;
        }
    }
    if(isPalindrom)
        cout << "Palindrome" << endl;
    else
        cout << "Not Palindrome" << endl;
}

void Armstrong(){
    // n = number of digits
    // sum of the power of n of each digit = num
    int num = 153;
    int temp = num;
    int sum = 0;
    while(temp != 0){
        int x = temp % 10;
        sum += x * x * x;
        temp /= 10;
    }
    cout << "sum = " << sum << endl;
    if (sum == num)
        cout << "Armstrong Number" << endl;
    else
        cout << "Not Armstrong Number" << endl;
}

void Divisors()
{
    // TC: O(sqrt(n))
    int num = 48;
    // vector<int> divisors;
    set<int> s;
    for (int i = 1; i * i <= num; i++)
    {
        if(num % i == 0){
            // divisors.push_back(i);
            // divisors.push_back(num / i);
            s.insert(i);
            s.insert(num/i);
        }
    }
    // sort TC: O(n log n)
    // sort(divisors.begin(), divisors.end());
    // for(auto &it:divisors)
    //     cout << it << ' ';
    for(auto &it:s)
        cout << it << ' ';
}

void Prime()
{
    // Brute Force approach
    /*
    // TC : O(n)
    int num = 5, cnt = 0;
    bool isPrime = false;
    for (int i = 1; i <= num; i++)
    {
        if(num % i == 0)
            cnt++;
    }
    if(cnt == 2)
        isPrime = true;
    if(isPrime)
        cout << "Prime Number" << endl;
    else
        cout << "Not Prime Number" << endl;
    */
    // Better Approach
    // loop till sqrt of num
    // TC: O(sqrt n)
    /*
    int num = 2, cnt = 0;
    bool isPrime = false;
    for (int i = 1; i * i <= num; i++)
    {
        if (num % i == 0)
            cnt++;
        if((num / i) != i)
            cnt++;
    }
    if (cnt == 2)
        isPrime = true;
    if (isPrime)
        cout << "Prime Number" << endl;
    else
        cout << "Not Prime Number" << endl;
    */
}

void sieve()
{
    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // Digit();
    // Reverse();
    // Palindrome()
    // Armstrong();
    // Divisors();
    // Prime();
    sieve();
    return 0;
}