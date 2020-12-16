#include <iostream>
#include <memory>

void print(const char *, unsigned);
// void print(std::string, unsigned);

int main() {
    
    constexpr char ch[] = "Hello, C++.";
    void (*fnc_ptr) (const char *, unsigned) = &print;
    
    (*fnc_ptr)(ch, 6);
    
    return 0;
}

void print(const char* ch, unsigned n) {
    int* i = new int(0);
    size_t sz {0};
    
    for (; ch[*i] != '\0'; (*i)++) { sz++; }
    
    delete i;
    i = nullptr;
    
    for (unsigned i = 0; i < n; i++) {
        for (size_t j = 0; j < sz; j++)
            std::cout << ch[j];
        
        std::cout << '\n';
    }
    
    std::cout << std::endl;
}
