#ifndef OTHER_FUNCTIONS_HPP // Checks to see if the tag OTHER_FUNCTIONS_HPP has been created already, reading the below block if it has
#define OTHER_FUNCTIONS_HPP // Creates the non-existent tag

// Define the namespace for these functions
// - Note: If I did not use a namespace wrapper, then I could simply call the function as 'factorial' in main()
namespace oth {
    // Declare factorial function for integers a >= 0
    int factorial(int a);
}

#endif // Closes out the if statement