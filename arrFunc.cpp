#include "arrFunc.h"
void func (int** arr, int n)
{
    for (int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if (j % 2 == 0) {
                arr[i][j]=1;
            }
        }
    }
    for (int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
            cout<<setw(4)<<arr[i][j];
        cout<<endl;
    }
}