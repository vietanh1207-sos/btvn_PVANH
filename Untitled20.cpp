#include <iostream>
using namespace std;

int main() {
    double height = 6;
    double length = 100;
    double coveragePerGallon = 340;

    double area = height * length * 2;   // 2 lop son
    double gallonsNeeded = area / coveragePerGallon;

    cout << "Dien tich can son: " << area << " ft^2" << endl;
    cout << "So gallon can dung: " << gallonsNeeded << " gallon" << endl;

    return 0;
}
