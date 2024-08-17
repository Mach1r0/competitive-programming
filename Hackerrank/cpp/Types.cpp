#include <iostream>
#include <cstdio>
#include <iomanip>
using namespace std;

int main() {
    int a; long b; char c; float e; double f;
    cin >> a >> b >> c >> e >> f;
    cout << a << "\n" << b << "\n" << c << "\n" << fixed << setprecision(3) << e << "\n" << fixed << setprecision(9) << f << endl;  
return 0; 

}