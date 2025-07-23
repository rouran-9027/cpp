#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <cstdlib>
#include <algorithm>  // 添加这一行

// 子函数1：计算两个数的和
void function1() {
    int a, b;
    std::cout << "请输入两个整数: ";
    std::cin >> a >> b;
    std::cout << "它们的和是: " << a + b << std::endl;
}

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

int main(int argc, char* argv[]) {
    if (argc != 2) {
        std::cerr << "用法: " << argv[0] << " [1-5]" << std::endl;
        return 1;
    }
    
    int choice = std::atoi(argv[1]);
    
    // 函数映射表
    std::vector<void(*)()> functions = {
        nullptr,      // 索引0不使用
        function1,    // 1
        function2,    // 2
        function3,    // 3
        function4,    // 4
        function5,    // 5
        function6     // 6
    };
    
    if (choice < 1 || choice >= functions.size()) {
        std::cerr << "错误: 无效的选择，请输入1-5之间的数字" << std::endl;
        return 1;
    }
    
    // 调用对应的子函数
    functions[choice]();
    
    return 0;
}    
