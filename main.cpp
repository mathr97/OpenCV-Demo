#include <iostream>

int main() {
    int i =0;
    double k = 1.0;

    auto f = [&](){
           

    };
    i = 9;

    f();


    std::cout << "Hello, World!" << std::endl;
    return 0;
}
