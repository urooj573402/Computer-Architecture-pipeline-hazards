// Task 20: Combined Load-Use and Branch Hazard
#include "pipeline.hpp"

int main() {
    cout << "=== Task 20: Combined Load-Use and Branch Hazard ===\n";
    runDemo({"Without NOPs (hardware stalls 2)", Config{true,false,1,2,200}, R"ASM(
LW R1, 0(R2)
BEQ R1, R0, TARGET
NOP
TARGET: ADD R9, R0, R1
)ASM", {{2,100}}, {{100,0}}});
    runDemo({"With 2 manual NOPs", Config{true,false,1,2,200}, R"ASM(
LW R1, 0(R2)
NOP
NOP
BEQ R1, R0, TARGET
NOP
TARGET: ADD R9, R0, R1
)ASM", {{2,100}}, {{100,0}}});
    return 0;
}
