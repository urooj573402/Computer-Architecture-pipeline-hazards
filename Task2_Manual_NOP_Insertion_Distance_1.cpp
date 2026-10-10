// Task 2: Manual NOP Insertion (Distance 1)
#include "pipeline.hpp"

int main() {
    cout << "=== Task 2: Manual NOP Insertion (Distance 1) ===\n";
    runDemo({"Without NOPs (hardware stalls 2 cycles)", Config{false,false,1,2,200}, R"ASM(
ADD R1, R2, R3
SUB R4, R1, R5
)ASM", {{2,10},{3,5},{5,3}}, {}});
    runDemo({"With 2 manual NOPs", Config{false,false,1,2,200}, R"ASM(
ADD R1, R2, R3
NOP
NOP
SUB R4, R1, R5
)ASM", {{2,10},{3,5},{5,3}}, {}});
    return 0;
}
