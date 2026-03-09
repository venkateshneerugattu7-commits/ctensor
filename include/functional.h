# Functional Operations for ctorch Framework

#ifndef FUNCTIONAL_H
#define FUNCTIONAL_H

#include <iostream>
#include <functional>

namespace ctorch {

// Example functional operation - addition
template <typename T>
T add(T a, T b) {
    return a + b;
}

// Example functional operation - subtraction
template <typename T>
T subtract(T a, T b) {
    return a - b;
}

// Example functional operation - multiplication
template <typename T>
T multiply(T a, T b) {
    return a * b;
}

// Example functional operation - division
template <typename T>
T divide(T a, T b) {
    if (b != 0) {
        return a / b;
    } else {
        std::cerr << "Division by zero error!";
        return T(); // Return default value
    }
}

} // namespace ctorch

#endif // FUNCTIONAL_H
