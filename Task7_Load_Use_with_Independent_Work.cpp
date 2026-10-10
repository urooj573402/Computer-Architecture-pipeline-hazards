// Task 7: Load-Use with Independent Work
#include "pipeline.hpp"

int main() {
    cout << "=== Task 7: Load-Use with Independent Work ===\n";
    runDemo({"Independent SUB hides the load latency", Config{true,false,1,2,200}, R"ASM(
LW R1, 0(R2)
SUB R5, R6, R7
ADD R3, R1, R4
)ASM", {{2,100},{4,5},{6,9},{7,4}}, {{100,7}}});
    return 0;
}
