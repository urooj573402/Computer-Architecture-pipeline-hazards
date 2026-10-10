// Task 6: The Classic Load-Use Stall
#include "pipeline.hpp"

int main() {
    cout << "=== Task 6: The Classic Load-Use Stall ===\n";
    runDemo({"Hardware stall (forwarding ON)", Config{true,false,1,2,200}, R"ASM(
LW R1, 0(R2)
ADD R3, R1, R4
)ASM", {{2,100},{4,5}}, {{100,7}}});
    runDemo({"Compiler-inserted NOP", Config{true,false,1,2,200}, R"ASM(
LW R1, 0(R2)
NOP
ADD R3, R1, R4
)ASM", {{2,100},{4,5}}, {{100,7}}});
    return 0;
}
