// Task 3: Manual NOP Insertion (Distance 2)
#include "pipeline.hpp"

int main() {
    cout << "=== Task 3: Manual NOP Insertion (Distance 2) ===\n";
    runDemo({"Without NOP (1 stall)", Config{false,false,1,2,200}, R"ASM(
ADD R2, R4, R5
AND R6, R7, R8
OR R9, R2, R10
)ASM", {{4,1},{5,2},{7,6},{8,3},{10,8}}, {}});
    runDemo({"With 1 NOP", Config{false,false,1,2,200}, R"ASM(
ADD R2, R4, R5
AND R6, R7, R8
NOP
OR R9, R2, R10
)ASM", {{4,1},{5,2},{7,6},{8,3},{10,8}}, {}});
    return 0;
}
