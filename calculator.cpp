#include<iostream>

// Оголошення структури
struct MyStruct {
    int i;
    double d;
};

// Оголошення структури з вказівниками
struct MyStructWithPointers {
    int *p_i;
    double *p_d;
};

int main() {
    // Виведення розмірів примітивних типів
    std::cout << "Size of char: " << sizeof(char) << " bytes" << std::endl;
    std::cout << "Size of int: " << sizeof(int) << " bytes" << std::endl;
    std::cout << "Size of float: " << sizeof(float) << " bytes" << std::endl;
    std::cout << "Size of double: " << sizeof(double) << " bytes" << std::endl;
    std::cout << "Size of bool: " << sizeof(bool) << " bytes" << std::endl;
    
    // Виведення розміру структури
    std::cout << "Size of MyStruct: " << sizeof(MyStruct) << " bytes" << std::endl;
    
    // Виведення розміру вказівника на структуру
    MyStruct *p = nullptr;
    std::cout << "Size of pointer to MyStruct: " << sizeof(p) << " bytes" << std::endl;
    
    // Виведення розміру структури з вказівниками
    std::cout << "Size of MyStructWithPointers: " << sizeof(MyStructWithPointers) << " bytes" << std::endl;
    
    return 0;
}