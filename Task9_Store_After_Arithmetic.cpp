// Task 9: Store After Arithmetic
#include "pipeline.hpp"

int main() {
    cout << "=== Task 9: Store After Arithmetic ===\n";
    runDemo({"EX -> MEM forwarding, 0 stalls", Config{true,false,1,2,200}, R"ASM(
ADD R4, R2, R3
SW R4, 0(R5)
)ASM", {{2,10},{3,5},{5,300}}, {}});
    return 0;
}
