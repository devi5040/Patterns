#include <iostream>
using namespace std;
int main()
{
    char arr[10];
    for (int i = 0; i < 9; i++)
        arr[i] = ' ';
    int tempf = 4, tempr = 4;
    arr[tempf] = '*';
    for (int i = 0; i < 9; i++)
        printf("%c ", arr[i]);
    cout << endl;
    for (int i = 0; i < 4; i++)
    {
        tempf++;
        tempr--;
        arr[tempf] = '*';
        arr[tempr] = '*';
        for (int j = 0; j < 9; j++)
        {
            printf("%c ", arr[j]);
        }
        cout << endl;
    }
    return 0;
}