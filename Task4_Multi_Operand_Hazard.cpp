// Task 4: Multi-Operand Hazard
#include "pipeline.hpp"

int main() {
    cout << "=== Task 4: Multi-Operand Hazard ===\n";
    runDemo({"Without NOPs", Config{false,false,1,2,200}, R"ASM(
ADD R1, R3, R4
ADD R2, R5, R6
ADD R7, R1, R2
)ASM", {{3,1},{4,2},{5,3},{6,4}}, {}});
    runDemo({"With 2 NOPs", Config{false,false,1,2,200}, R"ASM(
ADD R1, R3, R4
ADD R2, R5, R6
NOP
NOP
ADD R7, R1, R2
)ASM", {{3,1},{4,2},{5,3},{6,4}}, {}});
    return 0;
}
