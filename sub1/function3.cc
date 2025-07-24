#include <iostream>
#include <string>
#include <algorithm>

// 子函数3：字符串反转
void function3() {
    std::string str;
    std::cout << "请输入一个字符串: ";
    std::cin.ignore();
    std::getline(std::cin, str);
    
    std::string reversed = str;
    std::reverse(reversed.begin(), reversed.end());
    
    std::cout << "反转后的字符串是: " << reversed << std::endl;
}
