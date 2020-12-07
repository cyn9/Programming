#include <iostream>
#include <iomanip>
#include <deque>
#include <algorithm>
#include <vector>
#include <string>
#include <memory>

bool isPalindrome(const std::string &);

int main() {
    // Test cases:
    std::vector<std::string> test {
        "a", "aa", "aaa", "aba", "abbcbba", "ab", "abc",
        "radar", "bob", "ana", "avid diva", "Amore, Roma",
        "C++", "A Toyota's a toyota", "A Santa at NASA",
        "A man, a plan, a cat, a ham, a yak, a yam, a hat, a canal-Panama",
        "palindrome", "This is a palindrome"
    };

    std::cout << std::boolalpha;
    std::cout << std::setw(10) << std::left << "RESULT" << "STRING" << '\n';
    
    for (const auto &s: test) {
        std::cout << std::setw(10) << std::left << isPalindrome(s) << s << '\n';
    }

    return 0;
}

bool isPalindrome(const std::string &str) {
    auto d = std::make_shared<std::deque<char>>();

    for (const auto &e: str)
        if (std::isalpha(e))
            d->push_back(std::tolower(e));
        

    while (d->size() > 1) {
        if (d->front() != d->back()) {
            return false;
        }
        else {
            d->pop_back();
            d->pop_front();
        }
    }
    
    return true;
}
