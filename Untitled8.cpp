#include <iostream>
using namespace std;

int main() {
    double i1 = 15.59, i2 = 24.59, i3 = 6.59, i4 = 12.59, i5 = 3.59;

    double subtotal = i1 + i2 + i3 + i4 + i5;
    double tax = subtotal * 0.07;
    double total = subtotal + tax;

    cout << "Gia tung mon:\n";
    cout << i1 << endl;
    cout << i2 << endl;
    cout << i3 << endl;
    cout << i4 << endl;
    cout << i5 << endl;
    cout << "Tong tam tinh: " << subtotal << endl;
    cout << "Thue (7%): " << tax << endl;
    cout << "Tong phai tra: " << total << endl;

    return 0;
}
