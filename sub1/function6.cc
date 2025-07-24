#include <iostream>
#include <string>

// 子函数6：判断字符串是否为回文
void function6() {
    std::string str;
    std::cout << "请输入一个字符串: ";
    std::cin.clear();
    std::getline(std::cin, str);

    // 移除空格并转换为小写
    std::string processed;
    for (char c : str) {
        if (!std::isspace(c)) {
            processed += std::tolower(c);
        }
    }

    // 判断是否为回文
    bool isPalindrome = true;
    int left = 0;
    int right = processed.length() - 1;

    while (left < right) {
        if (processed[left] != processed[right]) {
            isPalindrome = false;
            break;
        }
        left++;
        right--;
    }

    std::cout << "\"" << str << "\""
              << (isPalindrome ? " 是回文" : " 不是回文")
              << std::endl;
}