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
        if(i != 3)
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
    for (int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            for(int k = 0; k < 4; k++){
                cout << i << j << k << ' ';
            }cout << endl;
        }
    }
    
    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;
    cin >> n >> m;
    int a[n][m];
    int b[m][1];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> a[i][j];
    for (int i = 0; i < m; i++)
        cin >> b[i][0];
    
    int s;

    for (int i = 0; i < n; i++){
        s = 0;
        for (int j = 0; j < m; j++){
            s += a[i][j] * b[j][0];
        }cout << s << endl;
    }
    return 0;
}