#include <iostream>

bool canMeet(int x1, int v1, int x2, int v2) {
    if ((v1 <= v2 && x1 < x2) || (v1 == v2 && x1 != x2)) {
        return false;
    }
    while (true) {
        x1 += v1;
        x2 += v2;
        if (x1 == x2) {
            return true;
        }
        if (x1 > x2) {
            return false;
        }
    }
    return false;
}

int main() {
    int x1, v1, x2, v2;
    std::cout << "Nhập vị trí ban đầu và vận tốc của kangaroo thứ nhất (x1 v1): ";
    std::cin >> x1 >> v1;
    std::cout << "Nhập vị trí ban đầu và vận tốc của kangaroo thứ hai (x2 v2): ";
    std::cin >> x2 >> v2;

    if (canMeet(x1, v1, x2, v2)) {
        std::cout << "YES\n";
    } else {
        std::cout << "NO\n";
    }

    return 0;
}
