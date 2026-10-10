// Task 12: Double Load Scheduling
#include "pipeline.hpp"

int main() {
    cout << "=== Task 12: Double Load Scheduling ===\n";
    runDemo({"Naive order (2 load-use stalls)", Config{true,false,1,2,200}, R"ASM(
LW R1, 0(R4)
ADD R2, R1, R5
LW R6, 4(R4)
ADD R7, R6, R8
)ASM", {{4,100},{5,10},{8,20}}, {{100,5},{104,6}}});
    runDemo({"Scheduled order (0 stalls)", Config{true,false,1,2,200}, R"ASM(
LW R1, 0(R4)
LW R6, 4(R4)
ADD R2, R1, R5
ADD R7, R6, R8
)ASM", {{4,100},{5,10},{8,20}}, {{100,5},{104,6}}});
    return 0;
}
