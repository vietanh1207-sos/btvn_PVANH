#include <iostream>
using namespace std;

int main() {
    double ny = 85;
    double denver = 88;
    double phoenix = 106;

    // Tang 2%
    ny *= 1.02;
    denver *= 1.02;
    phoenix *= 1.02;

    cout << "Nhiet do moi cua New York: " << ny << " F" << endl;
    cout << "Nhiet do moi cua Denver: " << denver << " F" << endl;
    cout << "Nhiet do moi cua Phoenix: " << phoenix << " F" << endl;

    return 0;
}
