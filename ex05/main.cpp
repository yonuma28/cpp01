#include "Harl.hpp"

int main(void) {
    Harl h;

    std::cout << "--- Standard Tests ---" << std::endl;
    h.complain("DEBUG");
    h.complain("INFO");
    h.complain("WARNING");
    h.complain("ERROR");

    std::cout << "\n--- Edge Case Tests ---" << std::endl;
    std::cout << "[Test: Unknown Level]" << std::endl;
    h.complain("WRONG_LEVEL");

    std::cout << "\n[Test: Empty String]" << std::endl;
    h.complain("");

    std::cout << "\n[Test: Case Sensitivity]" << std::endl;
    h.complain("debug");

    return (0);
}
