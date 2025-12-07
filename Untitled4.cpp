#include <iostream>
using namespace std;

int main() {
    double mealCost = 88.67;
    double tax = mealCost * 0.0675;
    double tip = (mealCost + tax) * 0.20;
    double totalBill = mealCost + tax + tip;

    cout << "Gia bua an: " << mealCost << endl;
    cout << "Thue: " << tax << endl;
    cout << "Tien tip: " << tip << endl;
    cout << "Tong hoa don: " << totalBill << endl;

    return 0;
}
