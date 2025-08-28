#include <bits/stdc++.h>
using namespace std;

void twoDimensional()
{
    int arr[4][4] = {0};
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j] << ' ';
        }
        if (i != 3)
            cout << endl;
    }
}
void threeDimensional()
{
    int arr[2][3][4];
    // for (int i = 0; i < 2; i++){
    //     for (int j = 0; j < 3; j++){
    //         for (int k = 0; k < 4; k++){
    //             cin >> arr[i][j][k];
    //         }
    //     }
    // }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 4; k++)
            {
                cout << i << j << k << ' ';
            }
            cout << endl;
        }
    }
}
void largest_number_in_array()
{
    // Brute Force
    // O( nlog(n) ) -> sort array -> last element is the largest
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr, arr + n);
    cout << "#BRUTE FORCE -> O(nlog(n))\n";
    cout << "Largest element = " << arr[n - 1] << "\n\n";

    // Optimal solution
    // O(N)
    int largest = INT_MIN;
    for (auto &it : arr)
        largest = max(it, largest);
    cout << "#OPTIMAL METHOD -> O(N):\n";
    cout << "Largest element = " << largest;
}
void second_largest_element()
{
    // without sorting
    int n; // n > 1
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    // BRUTE FORCE METHOD -> O(logn + n)
    sort(arr, arr + n);
    int second_largest;
    bool flag = false;
    for (int i = 1; i < n; i++)
    {
        if (arr[n - i - 1] != arr[n - 1])
        {
            second_largest = arr[n - i - 1];
            flag = true;
            break;
        }
    }
    cout << "#BRUTE FORCE -> O(nlogn + n)\n";
    cout << "Largest element = " << arr[n - 1] << "\n";
    if (!flag)
        cout << "There is no second largest element";
    else
        cout << "Second largest element = " << second_largest;

    cout << "\n\n";
    // Better Approach -> O(n + n) -> O(2n)
    int largest = INT_MIN;
    second_largest = INT_MIN;
    for (auto &it : arr)
        largest = max(largest, it);
    cout << "#Better Approach -> O(2n)\n";
    cout << "Largest element = " << largest << "\n";
    for (auto &it : arr)
    {
        if (it > second_largest && it != largest)
            second_largest = it;
    }
    cout << "Second Largest element = " << second_largest << "\n";

    cout << "\n\n";
    // Optimal solution
    largest = arr[0];
    second_largest = INT_MIN;
    for (int i = 1 ; i < n ; i++)
    {
        if (arr[i] >= largest)
        {
            second_largest = largest;
            largest = arr[i];
        }
        else
        {
            if (second_largest >= arr[i])
                second_largest = arr[i];
        }
    }
    cout << "#Optimal Approach -> O(n)\n";
    cout << "Largest element = " << largest << "\n";
    cout << "Second Largest element = " << second_largest << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // max size of the array inside main func = 10^6 = 1000000
    // max size of the array globally func = 10^7 = 10000000

    // print largest element
    // largest_number_in_array();

    // print the secord-largest element
    second_largest_element();

    return 0;
}