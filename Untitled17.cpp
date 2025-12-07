#include <iostream>
using namespace std;

int main() {
    int shares = 750;
    double price = 35.0;
    double commissionRate = 0.02;

    double stockCost = shares * price;
    double commission = stockCost * commissionRate;
    double totalPaid = stockCost + commission;

    cout << "Tien mua co phieu: " << stockCost << " USD\n";
    cout << "Tien hoa hong: " << commission << " USD\n";
    cout << "Tong tien phai tra: " << totalPaid << " USD\n";

    return 0;
}
