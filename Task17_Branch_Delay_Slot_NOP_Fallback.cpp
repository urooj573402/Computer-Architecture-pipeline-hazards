// Task 17: Branch Delay Slot: NOP Fallback
#include "pipeline.hpp"

int main() {
    cout << "=== Task 17: Branch Delay Slot: NOP Fallback ===\n";
    runDemo({"SUB feeds BEQ -> NOP in the slot", Config{true,false,1,2,200}, R"ASM(
SUB R4, R4, 1
BEQ R4, R0, EXIT
NOP
EXIT: ADD R9, R0, R4
)ASM", {{4,1}}, {}});
    return 0;
}
