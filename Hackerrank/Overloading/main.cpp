#include <iostream>

using namespace std;

struct zespolone
{
    int re;
    int im;
};

zespolone operator + (zespolone a, zespolone &b)
{
    a.re +=b.re;
    a.im +=b.im;
    return a;
}

ostream &operator << (ostream &meme, zespolone &a)
{
    if(a.im<0)
    {
        meme << a.re << a.im << "i";
        return meme;
    }
    meme << a.re << "+" << a.im << "i";
    return meme;
}

int main()
{
    zespolone a, b, c;

    a.re=3;
    a.im=2;
    b.re=5;
    b.im=-3;

    c = a+b;

    cout << c;

    return 0;
}
