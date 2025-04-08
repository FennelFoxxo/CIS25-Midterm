#include <iostream>
#include <iomanip>

int main() {
    // Set number of digits to round to
    std::cout << std::setprecision(10);

    std::cout << "Welcome to Calculator!" << std::endl;
    
    while (true) {
        int selected_operation;
        double num1, num2;
        
        std::cout << "Select an operation to perform:" << std::endl;
        
        // Currently supported operations
        std::cout << "  1. Addition" << std::endl;
        std::cout << "  2. Subtraction" << std::endl;
        std::cout << "  3. Multiplication" << std::endl;
        std::cout << "  4. Division" << std::endl;
        
        std::cout << "Enter the number of the operation to perform: ";
        
        std::cin >> selected_operation;
        
        // Option must be between 1 and 4
        if (selected_operation < 1 || selected_operation > 4) {
            std::cout << "\nInvalid option!\n" << std::endl;
            continue;   // Go back to the start of the while loop
        }
        
        // Prompt user for operands
        std::cout << "Enter the first number: ";
        std::cin >> num1;
        
        std::cout << "Enter the second number: ";
        std::cin >> num2;
        
        // Line break
        std::cout << std::endl;
        
        switch(selected_operation) {
            // Addition
            case 1:
                std::cout << num1 << " + " << num2 << " = " << num1 + num2 << std::endl;
                break;
                
            // Subtraction
            case 2:
                std::cout << num1 << " - " << num2 << " = " << num1 - num2 << std::endl;
                break;
                
            // Multiplication
            case 3:
                std::cout << num1 << " * " << num2 << " = " << num1 * num2 << std::endl;
                break;
                
            // Division
            case 4:
                // Prevent dividing by zero
                if (num2 == 0) {    
                    std::cout << "Dividing by zero is undefined!" << std::endl;
                    break;
                }
                std::cout << num1 << " / " << num2 << " = " << num1 / num2 << std::endl;
                break;
            
            // No default case needed, we've already validated selected_operation
        }
        
        // Line break
        std::cout << std::endl;
    }
}