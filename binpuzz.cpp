using namespace std;
#include <stdio.h>
#include <iostream>
int main(int argc, char * argv[])
{
    int arr[10][10] = {5};
    for(int i = 0; i < 10; i++)
    {
        for(int j = 0; j < 10; j++)
        {
            arr[i][j] = 5;
        }
    }
    arr[0][5]=1;
    arr[0][9]=1;
    arr[1][0]=1;
    arr[1][7]=0;
    arr[2][1]=0;
    arr[2][7]=0;
    arr[3][1]=0;
    arr[3][2]=0;
    arr[3][6]=0;
    arr[3][9]=1;
    arr[4][0]=1;
    arr[4][9]=1;
    arr[5][3]=0;
    arr[5][6]=1;
    arr[6][0]=0;
    arr[6][5]=0;
    arr[7][7]=0;
    arr[7][9]=0;
    arr[8][0]=0;
    arr[8][9]=0;
    arr[9][1]=0;
    arr[9][3]=0;
    arr[9][5]=1;
    for(int i = 0; i < 10; i++)
    {
        for(int j = 0; j < 10; j++)
        {
            if(arr[i][j] == 5)
                cout << "_   ";
            else
                cout << arr[i][j] << "   ";
        }
        cout << "\n" << endl;
    }
}
