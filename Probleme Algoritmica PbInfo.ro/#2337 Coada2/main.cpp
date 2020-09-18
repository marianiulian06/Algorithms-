#include <iostream>

using namespace std;

int main() {
 int a,b,c;

 cin >> a >> b >> c;

 if( (a < b && b < c) || (a < c && c< b) ){
    cout << a;
 }
 else
    if((b < a&& a < c) || (b < c && c < a) ){
     cout << b;
     }
 else{
    if( (c < b && b < a) || (c < a && c < b) )
     cout << c;
     }

return 0;
}
