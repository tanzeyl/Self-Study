#include <stdio.h>

// Defining a structrure
struct Rectangle
{
    int length;
    int breadth;
};
int main()
{
    // Declaring and initializing a structure
    struct Rectangle r = {10,5}; 
    // This will declare a variable r of the type Rectangle and it will take 8 bytes of memory.
    // Since we declared length first, the first 4 bytes will occupy lenght and rest 4 will occupy breadth. 
    //Line 12 will therefore assign 10 as length and 5 as breadth.
    //Accessing the members:
    r.length = 15;
    printf("Area of the rectangle is: %d.\n",r.length*r.breadth);
    return 0;
}
