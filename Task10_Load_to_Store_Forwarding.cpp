// Task 10: Load-to-Store Forwarding
#include "pipeline.hpp"

int main() {
    cout << "=== Task 10: Load-to-Store Forwarding ===\n";
    runDemo({"LW -> SW, 0 stalls", Config{true,false,1,2,200}, R"ASM(
LW R1, 0(R2)
SW R1, 0(R3)
)ASM", {{2,100},{3,200}}, {{100,42}}});
    return 0;
}
