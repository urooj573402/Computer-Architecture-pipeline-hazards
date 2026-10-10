// Task 14: Dot Product Element Interleaving
#include "pipeline.hpp"

int main() {
    cout << "=== Task 14: Dot Product Element Interleaving ===\n";
    runDemo({"Interleaved loads + MUL + accumulate", Config{true,false,1,2,200}, R"ASM(
LW R3, 0(R1)
LW R4, 0(R2)
LW R5, 4(R1)
MUL R6, R3, R4
ADD R10, R10, R6
)ASM", {{1,100},{2,200},{10,0}}, {{100,3},{200,4},{104,5}}});
    return 0;
}
