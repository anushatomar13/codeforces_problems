#include <iostream>

int main() {
    int n;
    std::cin >> n;

    // Calculate the number of cells
    int cells = n * n + (n - 1) * (n - 1);

    // Print the result
    std::cout << cells << std::endl;

    return 0;
}
