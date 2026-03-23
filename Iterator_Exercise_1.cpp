#include <iostream>
#include <vector>
#include <iterator>

int main() {
    std::vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8};

    for (auto it = v.begin(); it != v.end(); it = std::next(it, 2)) {
        std::cout << *it << " ";
    }

    return 0;
}
