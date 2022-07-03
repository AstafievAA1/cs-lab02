//
//  main.cpp
//  project
//
//  Created by Alexey Astafiev on 04.07.2022.
//

#include <iostream>

int main()
{
    std::cout << "Enter A and B: ";
    int a, b;
    std::cin >> a >> b;
    std::cout << "A + B = " << a + b << '\n'
              << "A - B = " << a - b << '\n'
              << "A * B = " << a * b << '\n'
              << "A / B = " << a / b << '\n'
              << " max = " << std::max(a, b) << '\n'
              << " min = " << std::min(a, b) << '\n';
}
