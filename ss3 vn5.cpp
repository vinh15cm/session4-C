#include <iostream>
using namespace std;

int main() {
    int n, sum=0;
    cout << "Nhap vao mot so nguyen: ";
    cin >> n;

    while(n != 0) {
        sum += n%10;
        n /= 10;
    }

    cout << "Tong cac chu so cua so nguyen la: " << sum << endl;
    return 0;
}
