#include <iostream>

int main() {
    long long n;
    std::cin >> n;

    // Get the last digit of n
    int last_digit = n % 10;

    // If last digit is less than 5, round down; otherwise, round up
    long long result;
    if (last_digit < 5) {
        result = n - last_digit;
    } else {
        result = n + (10 - last_digit);
    }

    std::cout << result << std::endl;

    return 0;
}
