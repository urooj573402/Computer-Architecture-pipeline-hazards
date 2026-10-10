// Task 8: Back-to-Back Address Dependency
#include "pipeline.hpp"

int main() {
    cout << "=== Task 8: Back-to-Back Address Dependency ===\n";
    runDemo({"LW -> LW (pointer chasing)", Config{true,false,1,2,200}, R"ASM(
LW R1, 0(R2)
LW R3, 4(R1)
)ASM", {{2,100}}, {{100,200},{204,99}}});
    return 0;
}
