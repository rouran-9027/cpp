#include <iostream>
// 子函数5：斐波那契数列
void function5() {
    int n;
    std::cout << "请输入要显示的斐波那契数列项数: ";
    std::cin >> n;
    
    if (n <= 0) {
        std::cout << "请输入正整数!" << std::endl;
        return;
    }
    
    std::cout << "斐波那契数列前 " << n << " 项: ";
    int a = 0, b = 1;
    for (int i = 0; i < n; ++i) {
        std::cout << a << " ";
        int next = a + b;
        a = b;
        b = next;
    }
    std::cout << std::endl;
}