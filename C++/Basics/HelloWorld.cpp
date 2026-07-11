//---------------------------------------------------------
// Program to print "Hello World," and to also introduce some other basic topics
//---------------------------------------------------------

// This is a comment

/*
This is a multi-line comment
*/

// Import necessary packages
#include <iostream>
#include <utility>
#include <string>
#include <array>
#include <vector>
#include <map>
#include <unordered_map>
#include <set>
#include <unordered_set>
#include <tuple>
#include <variant>
#include <cmath>
// Include headers for functions defined in OtherFunctions.cpp
#include "OtherFunctions.hpp"

// Forward declarations for functions
int power (int base, int exponent);

// Main function, which is executed by the compiled code
int main(){
    
    //---------------------------------------------------------
    // Input & Output
    //---------------------------------------------------------

    // Console Output
    // - Print "Hello, world!" to the console and then end the line
    std::cout << "Hello, world!" << std::endl;

    // Console Input
    // - Ask the user for their name
    // - std::cin does not allow for spaces as input, std::getline would need to be used instead.
    //   However, using std::getline right after std::cin requires a cleanup statement.
    std::string first_name {};
    std::string last_name {};
    std::cout << "Enter your first and last name, please: ";
    std::cin >> first_name >> last_name;
    std::cout << "You entered the name " << first_name << " " << last_name << ".\n"; // \n, as opposed to std::endl, does not immediately cause the terminal buffer to print

    //---------------------------------------------------------
    // Basic Data Types
    //---------------------------------------------------------

    // Void

    // Booleans
    bool b {true}; // Initializing with {} is modern industry standard.
    b = false;     // Assignment for variables can then be done with =. 

    // Integers
    // - 9 digits, no decimals allowed.
    int x {};      // Zero-initialization, sets x to a preset value (in this case 0)
    x = 2;

    // Long Long
    // - 19 digits, no decimals allowed.
    long long l;   // Initializes l without setting a value
    l = 123456789123456789;

    // Floats
    // - 7 digits of precision.
    // - Need the f at the end of a float number, 
    //   since the compiler compiles the right side of the equals sign first.
    // - With list initialization, the f is not needed
    float y1 = 3.14;
    float y2 {3.14};

    // Doubles
    // - 15 digits of precision.
    [[maybe_unused]] double z {3.1415926535}; // The [[maybe_unused]] causes the compiler not to generate a warning if this variable is unused

    // Characters
    char a {'A'};

    //---------------------------------------------------------
    // Other Data Types
    //---------------------------------------------------------

    // Strings
    // - Note, this is not a fundamental datatype
    std::string message {"Hello, world!"};

    // Arrays
    // - Fixed-size lists of objects with a particular type
    int A[3] {1, 2 ,3};
    std::array<int, 3> B {1, 2, 3}; // Modern version of array with more functionality

    // Vectors
    // - Dynamically-sized lists of objects with a particular type
    std::vector<char> V {'A', 'B', 'C', 'D'};

    // Maps
    // - An ordered dictionary, where each element has an index
    std::map<std::string, int> M {{"Alice", 20}, {"Bob", 21}, {"Greg", 34}};

    // Unordered Maps
    // - A dictionary where each element does not carry an index
    std::unordered_map<char, double> m {{'A', 2}, {'B', 4}};

    // Sets
    // - An ordered vector with duplicate elements removed
    std::set<float> S {3.14, 2.56, 1.78};

    // Unordered Sets
    // - An unordered set, where each object does not correspond to an index
    std::unordered_set<int> s {1, 2, 5};

    // Pairs
    // - A list of two objects which do not necessarily need to have the same datatype
    std::pair<int, float> p {3, 4.5};

    // Tuples
    // - A generalization of pair which allows for more than two objects
    std::tuple<int, std::string, char> t {5, "Bob", 'H'};

    // Variants
    // - Can hold a single value, but that value can be of multiple datatypes
    std::variant<int, float, double> v {std::in_place_type<float>, 4.6}; // Need to specify the type when assigning

    //---------------------------------------------------------
    // Math
    //---------------------------------------------------------


    //---------------------------------------------------------
    // If Statements, While Loops, & For Loops
    //---------------------------------------------------------

    // If Statements
    // - Regular if-else statements are done as follows
    if (y1 < 4) {
        std::cout << "y1 is smaller than 4!" << std::endl;
    } else if (y1 > 4) {
        std::cout << "y1 is greater than 4!" << std::endl;
    } else {
        std::cout << "y1 IS 4!" << std::endl;
    }
    // - An alternative shorthand if-else can also be used.
    std::cout << ((y2 < 3) ? "y2 is smaller than 3!" : (y2 > 3) ? "y2 is greater than 3!" : "y2 IS 3!") << std::endl;

    // Switch Statements
    int day {3};
    char bob {};
    switch (day) {
        case 1:
            bob = 'A';
            break; // Used to leave the switch block, otherwise more cases will be checked
        case 2:
            bob = 'B';
            break;
        case 3:
            bob = 'C';
            break;
        case 4:
            bob = 'D';
            break;
        default: // Used for when no case is matched. Will always run unless the block is broken.
            bob = 'F';
            break;
    }

    // While Loops
    // - The conventional While Loop is shown below
    int i {0};
    while (i <= 5) {
        std::cout << "This is i: " << i << std::endl;
        i++;
    }
    // - An alternative "Do While" Loop is also possible, where the loop is executed once before the condition is checked
    int j {4};
    do {
        std::cout << "This is j: " << j << std::endl;
        j++;
    } while (j <= 3);

    // For Loops
    // - The standard For Loop is shown below
    for (int i {0}; i <= 2; i++) {
        std::cout << "I am looping i: " << i << std::endl;
    }
    // - A For Each Loop, which ranges over elements of an array, is also possible
    // - For Each Loops can also iterate through pretty much any compound data type, such strings, vectors, and maps
    std::array<int, 3> C {45, 62, 30};
    for (int i : C) {
        std::cout << "I am now looping in an array: " << i << std::endl;
        if (i > 60) {
            continue; // Breaks the current step of the loop and continues to the next iteration
        }
        else if (i < 40) {
            break; // Breaks the current step of the loop and exits the For Loop
        }
    }

    //---------------------------------------------------------
    // Functions
    //---------------------------------------------------------

    // Simple function to raise one positive integer to the power of another positive integer
    // - Defined within this file
    std::cout << "When I raise 2 to the power 5, I get: " << power(2, 5) << "." << std::endl;

    // Simple function to produce the factorial of a positive integer
    // - Imported from other file
    std::cout << "The factorial of 5 is: " << oth::factorial(5) << "." << std::endl;

    //---------------------------------------------------------
    // Classes, Structs, & Enumeration
    //---------------------------------------------------------

    //---------------------------------------------------------
    // Pointers & References
    //---------------------------------------------------------

    //---------------------------------------------------------
    // End of Program
    //---------------------------------------------------------

    // Return 0 to close out the program
    return 0;
}

// This is the syntax for defining a function
// - This example function raises one positive integer to the power of another positive integer
// - Note, in C++ you cannot define a function within another function
int power (int base, int exponent) {
    int result = 1; // num will be the final result
    for (int i {1}; i <= exponent; i++) {
        result *= base;
    }
    return result;
}