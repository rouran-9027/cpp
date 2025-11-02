#include <iostream>
#include "sum.h"

int main() {
    int a, b;
    
    // 保持原有的交互：读取两个数并打印它们的和
    std::cout << "Please input two numbers separated by space: ";
    std::cin >> a >> b;
    int c = a + b;
    std::cout << a << "+" << b << "=" << c << std::endl;
    std::cout << "Result stored in c: " << c << std::endl;

    // 调用新添加的子函数，计算并打印 1 到 100 的和
    int s = sum1to100();
    std::cout << "Sum from 1 to 100 = " << s << std::endl;
    return 0;
}