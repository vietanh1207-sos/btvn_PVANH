#include <iostream>
using namespace std;

int main() {
    double purchase = 95;
    double stateTax = purchase * 0.04;
    double countyTax = purchase * 0.02;
    double totalTax = stateTax + countyTax;

    cout << "Thue tieu bang: " << stateTax << endl;
    cout << "Thue quan: " << countyTax << endl;
    cout << "Tong thue: " << totalTax << endl;

    return 0;
}
