#include <iostream>
using namespace std;

int main() {
    double percent = 0.58;
    double companySales = 8.6; // triệu đô

    double eastCoastSales = percent * companySales;

    cout << "Doanh thu du doan cua East Coast = " << eastCoastSales << " trieu do";
    return 0;
}
