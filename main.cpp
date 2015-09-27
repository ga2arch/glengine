#define LOOP1(a) void p(std::string s) { std::cout << s << std::endl; }
#define LOOP2(a) void b(std::string s) { std::cout << s << std::endl; } LOOP1(a)
#define LOOP3(a) void xy() a LOOP2(a)

#define LOOPN(n,a) LOOP##n(a)

#include <iostream>

LOOPN(3, {
    std::cout << "ciao" << std::endl;
});

int main(void) {
    xy();
}

