#include <iostream>

using namespace std;

int main()
{
    int h,m,x,y,m1,h1;
    cin >> h >> m >> x >> y;

    m1 = m + y;
    h1 = h + x;
    h = h1 % 23;
    m = m1 % 59;
    cout << h << " " << m;
    return 0;
}
