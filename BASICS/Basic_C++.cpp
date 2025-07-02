#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // string
    string s;
    cin >> s;
    int len = s.length();
    cout << s[len-1];

    /*
    // array
    int arr_1[5] = {1,2,3,4,5};
    cout << "array 1: ";
    for(int i = 0; i < 5 ; i++)cout << arr_1[i] << ' ';
    // array copying
    int arr_2[5];
    // method 1
    // for(int i = 0; i < 5; i++)
    //     arr_2[i] = arr_1[i];
    // cout << endl;
    // cout << "array 2: ";
    // for(int i = 0; i < 5 ; i++)cout << arr_2[i] << ' ';

    cout << endl << "array 2: ";
    copy(arr_1, arr_1+5, arr_2);
    for(int i = 0; i < 5 ; i++)cout << arr_2[i] << ' ';


    int arr_2d[2][3];
    for(int i=0 ; i<2 ; i++){
        for(int j=0 ; j<3 ; j++)
            cin >> arr_2d[i][j];
    }
    for(int i=0 ; i<2 ; i++){
        for(int j=0 ; j<3 ; j++)
            cout << arr_2d[i][j] << ' ';
        cout << endl;
    }
    */

    /*
    // conditions if, else
    int age;
    cin >> age;
    if(age < 18){
        cout << "Not eligible for jobs";
    } else if(age >= 18 && age <= 54) {
        cout << "Eligible for jobs";
    } else if(age >= 55 && age <= 57) {
        cout << "Eligible but retired soon";
    } else {
        cout << "Retirement Time";
    }

    // switch()
    int day;
    cin >> day;
    switch (day)
    {
        case 1:
            cout << "Saturday";
            break;
        case 2:
            cout << "Sunday";
            break;
        case 3:
            cout << "Monday";
            break;
        case 4:
            cout << "Tuesday";
            break;
        case 5:
            cout << "Wednesday";
            break;
        case 6:
            cout << "Thursday";
            break;
        case 7:
            cout << "Friday";
            break;
        default:
            cout << "invalid";
            break;
            // cout << "Check";
    }

    */

    /*

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

    */

    return 0;
}