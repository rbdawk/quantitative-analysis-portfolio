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
    std::string name {};
    std::cout << "Enter your first name, please: ";
    std::cin >> name;
    std::cout << "You entered the name " << name << ".\n"; // \n, as opposed to std::endl, does not immediately cause the terminal buffer to print

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
    // If Statements, While Loops, & For Loops
    //---------------------------------------------------------

    // If Statements

    // While Loops

    // For Loops

    //---------------------------------------------------------
    // Functions
    //---------------------------------------------------------

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