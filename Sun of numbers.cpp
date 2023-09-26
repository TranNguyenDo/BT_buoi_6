#include <iostream>

int main() {
    int n;
    int sum = 0;

    // Yêu cầu người dùng nhập giá trị nguyên dương
    do {
        std::cout << "Nhập một số nguyên dương: ";
        std::cin >> n;

        // Xác thực đầu vào: Kiểm tra nếu n là số nguyên dương
        if (n <= 0) {
            std::cout << "Số phải là một số nguyên dương. Vui lòng thử lại." << std::endl;
        }
    } while (n <= 0);

    // Tính tổng từ 1 đến n
    for (int i = 1; i <= n; ++i) {
        sum += i;
    }

    // In ra tổng
    std::cout << "Tổng của các số từ 1 đến " << n << " là: " << sum << std::endl;

    return 0;
}
