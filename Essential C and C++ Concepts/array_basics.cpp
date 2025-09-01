#include<iostream>
#include<stdio.h> // Required when we want to use C functions like printf

using namespace std;

int main() {
    
    /* Array containing garbage values */
    
    int A[5]; // Declared an array of 5 integers without initialization
    A[0] = 12; // Initialized index 0
    A[1] = 15; // Initialized index 1
    A[2] = 25; // Initialized index 2
    // A[3] and A[4] are not initialized, so elements at index 3 and 4 will contain garbage values
    
    /* Array containing NO garbage values */
    
    int B[3] = {1,1,3}; // Initialized all elements at declaration
    int C[] = {1,2};  // Array size is determinded based on the number of array elements
    int D[10] = {2,3,4,5}; // Elements from index 4 to 9 are initialized to 0
    int E[10] = {0}; // All elements are initialized to 0
    
    /* Loops */
    
    for(int i=0; i<10; i++) // for loop
    {
        cout<<E[i]<<endl;
    }
    
    for(int x:D) // foreach loop
    {
        cout<<x<<endl;
    }
    
    cout<<sizeof(A)<<endl; // prints the size of array in bytes
    cout<<A[1]<<endl;
    printf("%d\n", A[2]);

    /*  Variable-length Arrays  */ 
    /*
    int n;
    cout << "Enter size";
    cin>>n; // Takes input from User

      (a) int A[n] = {2, 4, 6, 8, 10, 12};
          - Invalid in standard C++ as C++ does not support variable-length arrays (VLAs) as part of the standard.
          - The size of an array must be a compile-time constant. This may compile with compiler extensions (e.g., GCC), but it is non-standard.
    
      (b) int A[n]; 
          A[0] = 2; 

         - This is also invalid in standard C++ (same reason as above). VLAs are not part of the C++ standard (unlike C99 where they are allowed).
         - May work with some compilers as a non-standard extension. If this does compile, an array of size n would be declared. 
           Only index 0 would be explicitly initialized, while the other elements would contain garbage values.

    */

    return 0;

    // Extra notes
    /*
    (1) int is typically 4 bytes; A[5] usually takes 20 bytes
    (2) To use C-style functions like printf(), include <stdio.h>.
    (3) The 'endl' keyword adds a newline and also flushes the output buffer.
    (4) cin>>n ->  takes input from User
    */
}
