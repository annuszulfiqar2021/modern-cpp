#include <iostream>


int main() {
    auto result = (10 <=> 20) > 0;
    std::cout << "Result of (10 <=> 20) > 0 = " << result << std::endl;
    return 0;
}