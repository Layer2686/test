#include "arrFunc.h"
int main()
{
    int n;
    cout << "Enter order of matrix:";
    cin >> n;
    cout<<"-----------------------------------------------------"<<endl;
    int **arr = new int* [n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = new int [n];
    }
    func(arr,n);
    for (int i = 0; i < n; i++)
    {
        delete[] arr[i];
    }
    delete[] arr;
    return 0;

}