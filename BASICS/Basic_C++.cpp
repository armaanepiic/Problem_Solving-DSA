#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cout << "To see the max and min value of data types:" << endl;
    cout << "int: " << endl;
    cout << "\tmax: " << numeric_limits<int>::max() << endl;
    cout << "\tmin: " << numeric_limits<int>::min() << endl;
    cout << "long:" << endl;
    cout << "\tmax: " << numeric_limits<long>::max() << endl;
    cout << "\tmin: " << numeric_limits<long>::min() << endl;
    cout << "long long:" << endl;
    cout << "\tmax: " << numeric_limits<long long>::max() << endl;
    cout << "\tmin: " << numeric_limits<long long>::min() << endl;
    cout << "double:" << endl;
    cout << "\tmax: " << numeric_limits<double>::max() << endl;
    cout << "\tsmallest positive value: " << numeric_limits<double>::min() << endl;
    cout << "\tmost negative value: " << numeric_limits<double>::lowest() << endl;

    

    return 0;
}