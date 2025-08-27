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

    return 0;

    // Extra notes
    /*
    (1) int is typically 4 bytes; A[5] usually takes 20 bytes
    (2) To use C-style functions like printf(), include <stdio.h>.
    (3) The 'endl' keyword adds a newline and also flushes the output buffer.
    */
}
