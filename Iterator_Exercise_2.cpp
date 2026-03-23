#include <iostream>
#include <string>

bool isPalindroma(const std::string& s) {
    auto it = s.begin();
    auto rit = s.rbegin();

    for (; it != s.begin() + s.size() / 2; ++it, ++rit) {
        if (*it != *rit)
            return false;
    }
    return true;
}

int main() {
    std::string s;
    std::cin >> s;

    if (isPalindroma(s))
        std::cout << "Palindroma\n";
    else
        std::cout << "Non palindroma\n";

    return 0;
}
