#include <iostream>

// 子函数4：计算阶乘
void function4() {
    int n;
    std::cout << "请输入一个非负整数: ";
    std::cin >> n;
    
    if (n < 0) {
        std::cout << "负数没有阶乘!" << std::endl;
        return;
    }
    
    unsigned long long factorial = 1;
    for (int i = 1; i <= n; ++i) {
        factorial *= i;
    }
    
    std::cout << n << " 的阶乘是: " << factorial << std::endl;
}