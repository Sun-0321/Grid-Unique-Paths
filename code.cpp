#include <iostream>
using namespace std;
int path(int m, int n)
{
    int total = m + n - 2; // m-1 + n-1
    int k = min(m - 1, n - 1);

    long long res = 1;
    for (int i = 0; i < k; i++)
    {
        res = res * (total - i) / (i + 1);
    }
    return int(res);
}

int main()
{
    int m,n;
    cin>>m>>n;
    //m and n are the order of the matrix ie m x n

    cout<<path(m,n);

    return 0;
}
