#include <iostream>
#include <iomanip>

// Returns the area of a rectangle with given length and width
float calculateArea(float length, float width) {
    return length * width;  // Area is simply length * width
}

// Returns true if the given number is a prime, false otherwise
bool isPrime(int n) {
    if (n <= 1) return false;   // Prime numbers are greater than 1 by definition
    
    // Only need to consider candidate factors up to sqrt(n) since a composite number will always
    // have a factor less than or equal to its square root
    for(int factor = 2; factor * factor <= n; factor++) {
        if (n % factor == 0) return false;
    }
    return true;    // Return true if no factors found
}

// Pretty print functions for printing output of calculateArea and isPrime
void printCalculateArea(float length, float width) {
    std::cout
        << "calculateArea(" << length
        << ", " << width
        << ") = "<< calculateArea(length, width) << std::endl;
}

void printIsPrime(int n) {
    std::cout
        << "isPrime(" << n
        << ") = " << (isPrime(n) ? "true" : "false") << std::endl;
}

int main() {
    // Set number of digits to round to
    std::cout << std::setprecision(10);
    
    printCalculateArea(1.0, 1.0);
    printCalculateArea(2.0, 3.0);
    printCalculateArea(123.45, 567.89);
    
    printIsPrime(1);
    printIsPrime(2);
    printIsPrime(15);
    printIsPrime(64);
    printIsPrime(139);
    printIsPrime(479001599);
}
