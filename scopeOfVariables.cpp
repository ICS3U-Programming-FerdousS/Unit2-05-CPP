// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Ferdous Sediqi
// Created on: March 10. 2022
// This program shows how local and global variables work

#include <iostream>

// global variable
int variableX = 32;

void localVariable() {
    // this shows what happens with local variables

    int variableX = 12;
    int variableY = 30;
    int variableZ = variableX + variableY;
    std::cout << "Local variableX, variableY, variableZ: " << variableX
              << " + " << variableY << " = " << variableZ << std::endl;
}


void globalVariable() {
    // this shows what happens with global variables

    variableX = variableX + 3;
    int variableY = 20;
    int variableZ = variableX + variableY;
    std::cout << "Local variableX, variableY, variableZ: " << variableX
              << " + " << variableY << " = " << variableZ << std::endl;
}

int main() {
    // this function calls local and global

    localVariable();
    globalVariable();
}
