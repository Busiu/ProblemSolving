#include <iostream>

using namespace std;

int main()
{
    int t[20][20];
    int iloczyn, maks=1;
    for(int i=0; i<20; i++)
    {
        for(int j=0; j<20; j++)
        {
            cin >> t[i][j];
        }
    }

    for(int i=0; i<20; i++)
    {
        for(int j=0; j<17; j++)
        {
            iloczyn=t[i][j]*t[i][j+1]*t[i][j+2]*t[i][j+3];
            if(maks<iloczyn)
                maks=iloczyn;
        }
    }

    for(int j=0; j<20; j++)
    {
        for(int i=0; i<17; i++)
        {
            iloczyn=t[i][j]*t[i+1][j]*t[i+2][j]*t[i+3][j];
            if(maks<iloczyn)
                maks=iloczyn;
        }
    }

    for(int i=0; i<17; i++)
    {
        for(int j=0; j<17-i; j++)
        {
            iloczyn=t[i][j]*t[i+1][j+1]*t[i+2][j+2]*t[i+3][j+3];
            if(maks<iloczyn)
                maks=iloczyn;
        }
    }

    for(int j=1; j<20; j++)
    {
        for(int i=0; i<17-j; j++)
        {
            iloczyn=t[i][j]*t[i+1][j+1]*t[i+2][j+2]*t[i+3][j+3];
            if(maks<iloczyn)
                maks=iloczyn;
        }
    }


    for(int j=3; j<20; j++)
    {
        for(int i=0; i<17; i++)
        {
            iloczyn=t[i][j]*t[i+1][j-1]*t[i+2][j-2]*t[i+3][j-3];
            if(maks<iloczyn)
                maks=iloczyn;
        }
    }


    cout << maks;



    return 0;
}
