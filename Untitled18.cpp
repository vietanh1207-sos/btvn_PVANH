#include <iostream>
using namespace std;

int main() {
    int surveyed = 16500;

    int weeklyBuyers = surveyed * 0.15;
    int orangeFlavors = weeklyBuyers * 0.58;

    cout << "So khach hang mua nuoc tang luc moi tuan: " << weeklyBuyers << endl;
    cout << "So khach hang thich vi cam: " << orangeFlavors << endl;

    return 0;
}
