#include <iostream>
using namespace std;
int main()
{
    int k;
    cout << " enter the row ->";
    int m;
    cin >> m;
    for (int i = 1; i <= m; i++)
    {
        k = 1;
        for (int j = 1; j <= 2 * m - 1; j++)
        {
            if (j >= (m + 1) - i && j <= (m - 1) + i && k)
            {

                cout << "*";
            k=0;
            }
            else{
                cout << " ";
                k=1;
        }
        }

        printf("\n");
    }
}