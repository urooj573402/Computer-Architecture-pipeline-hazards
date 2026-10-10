// Task 19: Structural Hazard (Single Unified Memory)
#include "pipeline.hpp"

int main() {
    cout << "=== Task 19: Structural Hazard (Single Unified Memory) ===\n";
    runDemo({"Unified memory (IF/MEM conflict)", Config{true,true,1,2,200}, R"ASM(
LW R1, 0(R2)
ADD R3, R4, R5
SUB R6, R7, R8
AND R9, R10, R11
)ASM", {{2,100}}, {{100,1}}});
    runDemo({"Split I-cache / D-cache (Harvard)", Config{true,false,1,2,200}, R"ASM(
LW R1, 0(R2)
ADD R3, R4, R5
SUB R6, R7, R8
AND R9, R10, R11
)ASM", {{2,100}}, {{100,1}}});
    return 0;
}
