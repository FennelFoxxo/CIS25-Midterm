#include <iostream>
#include <array>

int main() {
    // Iterate over numbers from 1 through 50
    for(int i = 1; i <= 50; i++) {
        // Print only even numbers
        if (i % 2 == 0) std::cout << i << std::endl;
    }
    
    // Int array of length 10
    std::array<int, 10> array;
    
    int current_index = 0;
    while (current_index < array.size()) {
        // Ask for number
        std::cout << "Enter number " << current_index << ": ";
        
        // Write number into array and increment index
        std::cin >> array[current_index++];
    }
    
    // Print out user provided numbers
    for (int i = 0; i < array.size(); i++) {
        std::cout << "Number #" << i << " = " << array[i] << std::endl;
    }
}
