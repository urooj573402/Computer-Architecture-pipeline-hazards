// Task 5: Chain of Cumulative Additions
#include "pipeline.hpp"

int main() {
    cout << "=== Task 5: Chain of Cumulative Additions ===\n";
    runDemo({"Without NOPs (2 stalls per dependency)", Config{false,false,1,2,200}, R"ASM(
ADD R1, R1, R2
ADD R1, R1, R3
ADD R1, R1, R4
)ASM", {{1,1},{2,2},{3,3},{4,4}}, {}});
    runDemo({"With manual NOPs", Config{false,false,1,2,200}, R"ASM(
ADD R1, R1, R2
NOP
NOP
ADD R1, R1, R3
NOP
NOP
ADD R1, R1, R4
)ASM", {{1,1},{2,2},{3,3},{4,4}}, {}});
    return 0;
}
