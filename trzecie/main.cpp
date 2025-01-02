#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <bitset>
#include <algorithm>

// palindromy
bool isPalindrome(const std::string& binary) {
    return std::equal(binary.begin(), binary.begin() + binary.size() / 2, binary.rbegin());
}

// konwertowanie liczby
void convertAndPrint(const std::string& binary) {
    unsigned long decimalValue = std::bitset<64>(binary).to_ulong();
    std::cout << "binarnie: " << binary << "\n";
    std::cout << "osemkowo: " << std::oct << decimalValue << "\n";
    std::cout << "dziesietnie: " << std::dec << decimalValue << "\n";
    std::cout << "szesnastkowo: " << std::hex << decimalValue << "\n";
    std::cout << std::dec;
}

// czy liczba dzieli sie przez 3
bool isDivisibleBy3(unsigned long value) {
    return value % 3 == 0;
}

// czy liczba jest nieparzysta
bool isOdd(unsigned long value) {
    return value % 2 != 0;
}

int main() {
    std::ifstream inputFile("values.txt");
    if (!inputFile) {
        std::cerr << "nie mozna otworzyc pliku\n";
        return 1;
    }

    std::string line;
    std::vector<std::string> palindromes;
    int divisibleBy3Count = 0;
    int oddCount = 0;

    while (std::getline(inputFile, line)) {
        if (isPalindrome(line)) {
            palindromes.push_back(line);
        }

        unsigned long decimalValue = std::bitset<64>(line).to_ulong();
        convertAndPrint(line);

        if (isDivisibleBy3(decimalValue)) {
            divisibleBy3Count++;
        }

        if (isOdd(decimalValue)) {
            oddCount++;
        }
    }

    inputFile.close();

    std::cout << "\nPalindromy:\n";
    for (const auto& palindrome : palindromes) {
        std::cout << palindrome << "\n";
    }
    std::cout << "Liczba palindromow: " << palindromes.size() << "\n";
    std::cout << "Liczba liczb podzielnych przez 3: " << divisibleBy3Count << "\n";
    std::cout << "Liczba liczb nieparzystych: " << oddCount << "\n";

    return 0;
}