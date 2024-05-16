// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;

// Đủ màu ở 4 cạnh là được
bool checkk(char key, int n, int m, vector<vector<char>> a)
{
    int dem = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i][0] == key)
        {
            dem++;
            break;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i][m - 1] == key)
        {
            dem++;
            break;
        }
    }
    for (int i = 0; i < m; i++)
    {
        if (a[0][i] == key)
        {
            dem++;
            break;
        }
    }
    for (int i = 0; i < m; i++)
    {
        if (a[n - 1][i] == key)
        {
            dem++;
            break;
        }
    }
    return dem == 4;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<vector<char>> a(n, vector<char>(m));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> a[i][j];
            }
        }
        if (checkk('W', n, m, a) || checkk('B', n, m, a))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}