#include <iostream>
using namespace std;

int main() {
    double cost = 14.95;
    double profitRate = 0.35;

    double sellingPrice = cost + (cost * profitRate);

    cout << "Gia ban cua bo mach: " << sellingPrice << " USD";
    return 0;
}
