#include <iostream>
using namespace std;
int main() {
    double e = 1.0;
    int n = 0;

    while (1 + e != 1) {
        e /= 10;
        n++;
    }


    cout << "Cycles:" << " " << n << endl;

    return 0;
}