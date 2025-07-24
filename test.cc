#include <iostream>
#include <vector>
#include <cmath>

bool isPrime(int num) {
    if (num <= 1) return false;
    if (num == 2) return true;
    if (num % 2 == 0) return false;

    for (int i = 3; i <= std::sqrt(num); i += 2) {
        if (num % i == 0) return false;
    }

    return true;
}

std::vector<int> findPrimesInRange(int start, int end) {
    std::vector<int> primes;
    for (int num = start; num <= end; ++num) {
        if (isPrime(num)) {
            primes.push_back(num);
        }
    }
    return primes;
}

int main() {
    int start, end;
    std::cout << "请输入范围的起始值: ";
    std::cin >> start;
    std::cout << "请输入范围的结束值: ";
    std::cin >> end;

    std::vector<int> primes = findPrimesInRange(start, end);

    std::cout << "在范围 [" << start << ", " << end << "] 内的素数有: ";
    for (int prime : primes) {
        std::cout << prime << " ";
    }
    std::cout << std::endl;

    return 0;
}