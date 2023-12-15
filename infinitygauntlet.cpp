#include <iostream>
#include <unordered_set>
#include <unordered_map>
#include <vector>
#include <string>

int main() {
    std::unordered_map<std::string, std::string> colorToGem = {
        {"purple", "Power"},
        {"green", "Time"},
        {"blue", "Space"},
        {"orange", "Soul"},
        {"red", "Reality"},
        {"yellow", "Mind"}
    };

    int n;
    std::cin >> n;

    std::vector<std::string> colors;
    for (int i = 0; i < n; ++i) {
        std::string color;
        std::cin >> color;
        colors.push_back(color);
    }

    std::cout << 6 - n << std::endl;
    for (const auto& entry : colorToGem) {
        if (std::find(colors.begin(), colors.end(), entry.first) == colors.end()) {
            std::cout << entry.second << std::endl;
        }//this means that first we find entry.first from begin to end of colors vector and if we dont find it then
        //its equal to end()
        //if not found then it means we need to add its color value to the output
    }

    return 0;
}
