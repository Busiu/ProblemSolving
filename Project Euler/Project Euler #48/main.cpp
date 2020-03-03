#include <iostream>

using namespace std;

int main()
{
    unsigned long long int n, suma=0, potega, pom1, pom2, pom3, pom4;
    cin >> n;
    for(long long int i=1; i<=n; i++)
    {
        pom1=i;
        pom2=i;
        potega=1;
        while(pom2>0)
        {
            if(pom2%2==1)
            {
                pom3 = potega;
                pom4 = pom1/6;
                potega = 0;
                for(int j=0; j<6; j++)
                {
                    potega=(potega+(pom3*pom4))%10000000000;
                }
                potega=(potega+(pom3*(pom1%6)))%10000000000;
            }
            pom2/=2;
                pom3 = pom1;
                pom4 = pom1/6;
                pom1 = 0;
                for(int j=0; j<6; j++)
                {
                    pom1=(pom1+(pom3*pom4))%10000000000;
                }
                pom1=(pom1+(pom3*(pom3%6)))%10000000000;

        }

        suma=(suma+potega)%10000000000;

    }

    cout << suma << endl;

/*
    pom1=n;
    pom2=n;
    potega=1;
        while(pom2>0)
        {
            if(pom2%2==1)
            {
                pom3 = potega;
                pom4 = pom1/6;
                potega = 0;
                for(int j=0; j<6; j++)
                {
                    potega=(potega+(pom3*pom4))%10000000000;
                }
                potega=(potega+(pom3*(pom1%6)))%10000000000;
                cout << pom2 << " " << potega << endl;
            }

            pom2/=2;
                pom3 = pom1;
                pom4 = pom1/6;
                pom1 = 0;
                for(int j=0; j<6; j++)
                {
                    pom1=(pom1+(pom3*pom4))%10000000000;
                }
                pom1=(pom1+(pom3*(pom3%6)))%10000000000;
                //cout << pom2 << " " << pom1 << endl;

        }

        cout << potega << endl;
*/
    return 0;
}
