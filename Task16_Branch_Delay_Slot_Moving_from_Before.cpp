// Task 16: Branch Delay Slot: Moving from Before
#include "pipeline.hpp"

int main() {
    cout << "=== Task 16: Branch Delay Slot: Moving from Before ===\n";
    runDemo({"ADD moved into the delay slot", Config{true,false,1,2,200}, R"ASM(
BEQ R4, R5, TARGET
ADD R1, R2, R3
TARGET: NOP
)ASM", {{2,2},{3,3},{4,7},{5,7}}, {}});
    return 0;
}
