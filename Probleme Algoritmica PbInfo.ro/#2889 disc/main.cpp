#include <iostream>
#include <math.h>



using namespace std;



int main()
{
    long double r;
    cin >> r;
   long double p = 2 * 3.14159265358979323846264338327950288 * r;
   long double a = 3.141592653589793238462643383279502889 * r*r;
    cout << fixed << a << " " << p;


    return 0;
}
