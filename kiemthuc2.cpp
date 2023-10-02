#include <iostream>
using namespace std;

int LaNamNhuan(int year) {
    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) {
        return 1;
    }
    return 0;
}
int main() {
    int year = 2016;
    if (LaNamNhuan(year)) {
        cout << "La Nam Nhuan";

    }
    else {
        cout << "Khong la nam nhuan";
        
    }
    return 0;
}