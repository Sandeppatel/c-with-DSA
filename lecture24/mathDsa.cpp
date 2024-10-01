#include <iostream>
using namespace std;

// Change return type from void to int since it returns a value.
int primeNumber(int n){

    if (n <= 1)
        return 0; // Numbers less than or equal to 1 are not prime.

    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            return 0; // Not prime.
        }
    }
    return 1; // Prime number.
}

int main() {
    int n, num;
    cout << "Enter two values: " << endl;
    cin >> n >> num;

    // Check if the first number is prime.
    if (primeNumber(n)) {
        cout << n << " is a prime number." << endl;
    } else {
        cout << n << " is not a prime number." << endl;
    }

    // Check if the second number is prime.
    if (primeNumber(num)) {
        cout << num << " is a prime number." << endl;
    } else {
        cout << num << " is not a prime number." << endl;
    }

    return 0;
}
