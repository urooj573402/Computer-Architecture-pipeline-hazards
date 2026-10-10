// Task 15: Branch Stall Penalty Calculation
#include "pipeline.hpp"

int main() {
    cout << "=== Task 15: Branch Stall Penalty Calculation ===\n";
    runDemo({"Branch resolved in EX, no delay slot (penalty 2)", Config{true,false,0,3,200}, R"ASM(
BEQ R1, R2, TARGET
ADD R7, R7, R7
TARGET: ADD R8, R1, R2
)ASM", {{1,5},{2,5},{7,1}}, {}});
    runDemo({"Branch resolved in ID, no delay slot (penalty 1)", Config{true,false,0,2,200}, R"ASM(
BEQ R1, R2, TARGET
ADD R7, R7, R7
TARGET: ADD R8, R1, R2
)ASM", {{1,5},{2,5},{7,1}}, {}});
    runDemo({"Branch resolved in ID + 1 delay slot (penalty 0)", Config{true,false,1,2,200}, R"ASM(
BEQ R1, R2, TARGET
ADD R7, R7, R7
TARGET: ADD R8, R1, R2
)ASM", {{1,5},{2,5},{7,1}}, {}});
    return 0;
}
