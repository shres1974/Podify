
#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>
#include <string>
#include <cstdlib>

template <typename T>
class Array {
public:
    // Constructor
    Array();
    
    // Destructor
    ~Array();
    
    // Operator overloading
    Array<T>& operator+=(const T& item);
    Array<T>& operator-=(const T& item);
    
    // Const and non-const indexing
    T& operator[](int index);
    const T& operator[](int index) const;
    
    // Size getter
    int getSize() const;
    
    // Check if full
    bool isFull() const;

	void clear(); 

private:
    static const int MAX_ARR = 256;
    T* elements;
    int numElements;
};

// Template implementation in header file

template <typename T>
Array<T>::Array() {
    elements = new T[MAX_ARR];
    numElements = 0;
}

template <typename T>
Array<T>::~Array() {
    delete[] elements;
}

template <typename T>
Array<T>& Array<T>::operator+=(const T& item) {
    if (numElements < MAX_ARR) {
        elements[numElements++] = item;
    }
    return *this;
}

template <typename T>
Array<T>& Array<T>::operator-=(const T& item) {
    for (int i = 0; i < numElements; ++i) {
        if (elements[i] == item) {
            // Shift elements to close the gap
            for (int j = i; j < numElements - 1; ++j) {
                elements[j] = elements[j + 1];
            }
            --numElements;
            break;
        }
    }
    return *this;
}

template <typename T>
T& Array<T>::operator[](int index) {
    if (index < 0 || index >= numElements) {
        std::cerr << "Array index out of bounds" << std::endl;
        exit(1);
    }
    return elements[index];
}

template <typename T>
const T& Array<T>::operator[](int index) const {
    if (index < 0 || index >= numElements) {
        std::cerr << "Array index out of bounds" << std::endl;
        exit(1);
    }
    return elements[index];
}

template <typename T>
int Array<T>::getSize() const {
    return numElements;
}

template <typename T>
bool Array<T>::isFull() const {
    return numElements >= MAX_ARR;

}

template <typename T>
void Array<T>::clear() {
    numElements = 0;
}


#endif // ARRAY_H