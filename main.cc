#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <cstdlib>
#include <algorithm>
#include "sub1/sub1.h"  // 添加这一行
// ...existing code...


int main(int argc, char* argv[]) {
    if (argc != 2) {
        std::cerr << "用法: " << argv[0] << " [1-7]" << std::endl;
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
        function6,     // 6
        function7     // 7 新增函数
    };
    
    if (choice < 1 || choice >= functions.size()) {
        std::cerr << "错误: 无效的选择，请输入1-7之间的数字" << std::endl;
        return 1;
    }
    
    // 调用对应的子函数
    functions[choice]();
    
    return 0;
}    
