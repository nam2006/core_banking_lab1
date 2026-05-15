#include <iostream>
// Vẫn đang gọi hàm cũ: int calculate(int a)
extern int calculate(int a); 

void run_logic() {
    int result = calculate(10); 
    std::cout << "Result: " << result << std::endl;
}
