#include <iostream>

int nwd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int a, b;
    std::cout << "Podaj dwie liczby: ";
    std::cin >> a >> b;
    std::cout << "Najwiekszy wspolny dzielnik: " << nwd(a, b) << std::endl;
    return 0;
}