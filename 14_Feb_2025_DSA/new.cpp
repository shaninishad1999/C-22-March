#include <iostream>

namespace stdx {
    class iostreamx {
    public:
        static void coutx(const std::string& message) {
            std::cout << message << std::endl;
        }
    };
}

int main() {
    stdx::iostreamx::coutx("Hello, Custom Namespace!");
    return 0;
}
// Output: Hello, Custom Namespace!