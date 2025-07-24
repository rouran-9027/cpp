#include <iostream>
#include <cmath>

// 子函数2：判断一个数是否为素数
void function2() {
    int num;
    std::cout << "请输入一个整数: ";
    std::cin >> num;
    
    bool isPrime = true;
    if (num <= 1) isPrime = false;
    else {
        for (int i = 2; i <= std::sqrt(num); ++i) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }
    }
    
    std::cout << num << (isPrime ? " 是素数" : " 不是素数") << std::endl;
}