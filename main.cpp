#include <iostream>


int main() {
    auto result = (10 <=> 20) > 0;
    std::cout << "Result of (10 <=> 20) > 0 = " << result << std::endl;
    int x = 0;
    for (int i=0; i<1000000000; i++) x++;
    std::cout << "Iterated a billion times; X = " << x << std::endl;
    return 0;
}