#include<iostream>
using namespace std;


// Function to add two numbers
int sum(int x, int y) { 
    int result = x + y;
    return result;
}

// Function to subtract two numbers
int subtract(int x, int y) {
    int result = x - y;
    return result;
}

// Function to multiply two numbers
int multiply(int x, int y) {
    int result = x * y;
    return result;
}

// Function to divide two numbers
int divide(int x, int y) {
    int result = x / y;
    return result;
}

// Function to find the modulus of two numbers
int mod(int x, int y) {
    int result = x % y;
    return result;
}

int main() {
    int a, b;
    
    // Add two numbers
    cout << "Add two numbers " << endl;
    cout << "Enter your number first: ";
    cin >> a;
    cout << "Enter your number second: ";
    cin >> b;
    int resultSum = sum(a, b);
    cout << "Sum of Two Numbers: " << resultSum << endl;

    cout << endl;

    // Subtract two numbers
    cout << "Subtraction of two numbers " << endl;
    cout << "Enter your number first: ";
    cin >> a;
    cout << "Enter your number second: ";
    cin >> b;
    int resultSub = subtract(a, b);
    cout << "Subtraction of Two Numbers: " << resultSub << endl;

    cout << endl;

    // Multiply two numbers
    cout << "Multiplication of two numbers " << endl;
    cout << "Enter your number first: ";
    cin >> a;
    cout << "Enter your number second: ";
    cin >> b;
    int resultMul = multiply(a, b);
    cout << "Multiplication of Two Numbers: " << resultMul << endl;

    cout << endl;

    // Divide two numbers
    cout << "Division of two numbers " << endl;
    cout << "Enter your number first: ";
    cin >> a;
    cout << "Enter your number second: ";
    cin >> b;
    int resultDiv = divide(a, b);
    cout << "Division of Two Numbers: " << resultDiv << endl;

    cout << endl;

    // Modulus of two numbers
    cout << "Modulus of two numbers " << endl;
    cout << "Enter your number first: ";
    cin >> a;
    cout << "Enter your number second: ";
    cin >> b;
    int resultMod = mod(a, b);
    cout << "Modulus of Two Numbers: " << resultMod << endl;

    return 0;
}