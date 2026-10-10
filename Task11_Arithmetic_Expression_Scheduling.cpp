// Task 11: Arithmetic Expression Scheduling: (A + B) + (C + D)
#include "pipeline.hpp"

int main() {
    cout << "=== Task 11: Arithmetic Expression Scheduling: (A + B) + (C + D) ===\n";
    runDemo({"(A+B)+(C+D)", Config{true,false,1,2,200}, R"ASM(
ADD R5, R1, R2
ADD R6, R3, R4
ADD R7, R5, R6
)ASM", {{1,1},{2,2},{3,3},{4,4}}, {}});
    return 0;
}
