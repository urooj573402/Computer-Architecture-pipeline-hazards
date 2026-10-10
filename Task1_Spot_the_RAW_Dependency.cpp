// Task 1: Spot the RAW Dependency
#include "pipeline.hpp"

int main() {
    cout << "=== Task 1: Spot the RAW Dependency ===\n";
    runDemo({"RAW hazard, no forwarding (hardware interlock)", Config{false,false,1,2,200}, R"ASM(
ADD R1, R2, R3
SUB R4, R1, R5
)ASM", {{2,10},{3,5},{5,3}}, {}});
    return 0;
}
