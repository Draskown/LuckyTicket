#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <sstream>


int main()
{
    int a = 263057, b = 0, c = 0;

    std::vector<int> numbers;

    while (a > 0){
        numbers.push_back(a % 10);
        a /= 10;
    }

    std::reverse(numbers.begin(), numbers.end());

    for (int i = 0; i < (int)(numbers.size() / 2); i++) {
        b += numbers[numbers.size() - 1 - i];
        c += numbers[i];
    }

    b == c ? std::cout << "Lucky" << std::endl : std::cout << "Nope" << std::endl;
}