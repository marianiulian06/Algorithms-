#include <iostream>
#include <fstream>
#include <math.h>

using namespace std;
ifstream fin("9lan.in.txt");
ofstream fout("9lan.out.txt");

int main() {
    int i, p,n,m;
    fin >> p;

    for ( i = 1; i <= p; i++){
        n = pow(9,p);
        m = n % 10;
    }
   fout << m;
   fout.close();


return 0;
}
