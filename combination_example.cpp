#include <cstdint>
#include <iostream>
using namespace std;

/*
 * *** STUDENTS SHOULD WRITE CODE FOR THIS FUNCTION ***
 */
uint16_t factorial(const uint16_t x) { 
    if (x == 0 || x == 1)
        return 1;
    uint16_t result = 1;
    for (uint16_t i = 2; i <= x; i++) {
        result *= i;
    }   
    return result;
}

/*
 * *** STUDENTS SHOULD WRITE CODE FOR THIS FUNCTION ***
 */
int main() {
    int n, k;

    // get and validate user input
    cout << "Enter n: ";
    cin >> n;
    cout << "Enter k: ";
    cin >> k;

    //Error handling
    if (n <= 0 || k <= 00) {
        cout << "Error, n and k must be positive integers." << endl;
        return 1;
    }

    if (k > n) {
        cout << "Error, k cannot be greater than n." << endl;
        return 1;
    }

    int n_fact = factorial(n);
    int k_fact = factorial(k);
    int difference_fact = factorial(n-k);
    
    // calculate C(n,k) = n! / (k! * (n-k)!)
    uint16_t c_n_k = factorial(n);

    // write out results
    cout << "result = " << c_n_k << endl;

    return 0;
}