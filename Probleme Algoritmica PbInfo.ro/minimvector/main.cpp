#include <iostream>
#include <climits>

using namespace std;


const int N = 10;

 int main() {
     int V[N] = { 12,52,53,124,64,84,86,92,95,29 };


     int minim = INT_MAX;

     for(int i = 0; i < N; i++)
     {
         if(V[i] < minim)
         minim = V[i];

     }

    cout << " Minimul vectorului este : " << minim;
     return 0;
 }
