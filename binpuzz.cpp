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

    while(1)
    {
        for(int i = 0; i < 10; i++)
        {
            for(int j = 0; j < 10; j++)
            {
                //checks for double 0's and double 1's
                if(i >= 2)
                {
                    if(arr[i-1][j] == 0 && arr[i-2][j]==0)
                    {
                        arr[i][j]=1;
                    }
                    if(arr[i-1][j] == 1 && arr[i-2][j]==1)
                    {
                        arr[i][j]=0;
                    }
                }
                if(i <= 7)
                {
                    if(arr[i+1][j] == 0 && arr[i+2][j]==0)
                    {
                        arr[i][j]=1;
                    }
                    else if(arr[i+1][j] == 1 && arr[i+2][j]==1)
                    {
                        arr[i][j]=0;
                    }
                }
                if(j >= 2)
                {
                    if(arr[i][j-1] == 0 && arr[i][j-2]==0)
                    {
                        arr[i][j]=1;
                    }
                    if(arr[i][j-1] == 1 && arr[i][j-2]==1)
                    {
                        arr[i][j]=0;
                    }
                }
                if(j <= 7)
                {
                    if(arr[i][j+1] == 0 && arr[i][j+2]==0)
                    {
                        arr[i][j]=1;
                    }
                    else if(arr[i][j+1] == 1 && arr[i][j+2]==1)
                    {
                        arr[i][j]=0;
                    }
                }
                
                //checks for the pattern '0 _ 0' and '1 _ 1'
                if(i >= 1 && i <= 8)
                {
                    if(arr[i-1][j] == 0 && arr[i+1][j]==0)
                    {
                        arr[i][j]=1;
                    }
                    if(arr[i-1][j] == 1 && arr[i-2][j]==1)
                    {
                        arr[i][j]=0;
                    }
                }
                if(i <= 7)
                {
                    if(arr[i+1][j] == 0 && arr[i+2][j]==0)
                    {
                        arr[i][j]=1;
                    }
                    else if(arr[i+1][j] == 1 && arr[i+2][j]==1)
                    {
                        arr[i][j]=0;
                    }
                }
                if(j >= 2)
                {
                    if(arr[i][j-1] == 0 && arr[i][j-2]==0)
                    {
                        arr[i][j]=1;
                    }
                    if(arr[i][j-1] == 1 && arr[i][j-2]==1)
                    {
                        arr[i][j]=0;
                    }
                }
                if(j <= 7)
                {
                    if(arr[i][j+1] == 0 && arr[i][j+2]==0)
                    {
                        arr[i][j]=1;
                    }
                    else if(arr[i][j+1] == 1 && arr[i][j+2]==1)
                    {
                        arr[i][j]=0;
                    }
                }
                
            }
        }
        break;
    }
    cout << "\n\n\n\n\n" << endl;
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
