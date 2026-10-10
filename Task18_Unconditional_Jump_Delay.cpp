// Task 18: Unconditional Jump Delay
#include "pipeline.hpp"

int main() {
    cout << "=== Task 18: Unconditional Jump Delay ===\n";
    runDemo({"SUB in the delay slot of J (first 12 steps)", Config{true,false,1,2,12}, R"ASM(
LOOP: J LOOP
SUB R1, R1, 1
)ASM", {{1,10}}, {}});
    return 0;
}
