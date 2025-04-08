#include <iostream>

bool isLeapYear(int year) {
    // Leap years can only occur if the year is divisble by 4
    if (year % 4 != 0) return false;
    
    // Century years are not leap years...
    if (year % 100 == 0) {
        // ...except for every 4th century, which are leap years
        if (year % 400 == 0) return true;
        return false;
    }
    // Not a century year, just a regular leap year
    return true;
}

// Pretty print functions for printing output of printIsLeapYear
void printIsLeapYear(int year) {
    std::cout << year << " is ";
    if (!isLeapYear(year)) std::cout << "not ";
    std::cout << "a leap year" << std::endl;
}

int main() {
    int num1, num2, num3;
    
    // Ask user for 3 numbers
    std::cout << "Number 1: ";
    std::cin >> num1;
    
    std::cout << "Number 2: ";
    std::cin >> num2;
    
    std::cout << "Number 3: ";
    std::cin >> num3;
    
    // Find the maximum of the 3 numbers
    int max_num;
    if (num1 > num2) {
        // num2 is not the biggest, so now it's between num1 and num3
        if (num1 > num3) max_num = num1;
        else max_num = num3;
    } else {
        // num1 is not the biggest, so now it's between num2 and num3
        if (num2 > num3) max_num = num2;
        else max_num = num3;
    }
    
    std::cout << "The maximum number you entered is " << max_num << std::endl;
    
    // Line break
    std::cout << std::endl;
    
    printIsLeapYear(2025);  // False
    printIsLeapYear(2028);  // True
    printIsLeapYear(2000);  // True
    printIsLeapYear(1900);  // False
    
}