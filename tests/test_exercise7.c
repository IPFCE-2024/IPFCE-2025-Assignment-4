#include <stdio.h>
#include <assert.h>
#include <math.h>

// Include the student's implementation
double average(int list[], int n); // Declaration only

int main() {
    // Test case 1: Normal array
    int test1[] = {1, 2, 3, 4, 5};
    double result1 = average(test1, 5);
    assert(fabs(result1 - 3.0) < 0.001);
    
    // Test case 2: Single element
    int test2[] = {42};
    double result2 = average(test2, 1);
    assert(fabs(result2 - 42.0) < 0.001);
    
    // Test case 3: Negative numbers
    int test3[] = {-1, -2, -3};
    double result3 = average(test3, 3);
    assert(fabs(result3 - (-2.0)) < 0.001);
    
    // Test case 4: Mixed positive and negative
    int test4[] = {-5, 5, -3, 3};
    double result4 = average(test4, 4);
    assert(fabs(result4 - 0.0) < 0.001);
    
    printf("Exercise 7 tests passed\n");
    return 0;
}
