// Task 13: Array Element Swapping
#include "pipeline.hpp"

int main() {
    cout << "=== Task 13: Array Element Swapping ===\n";
    runDemo({"Swap A[0] and A[1]", Config{true,false,1,2,200}, R"ASM(
LW R3, 0(R2)
LW R4, 4(R2)
SW R3, 4(R2)
SW R4, 0(R2)
)ASM", {{2,100}}, {{100,11},{104,22}}});
    return 0;
}
