/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Robin Kendrick <https://github.com/robinjee>
 *
 * Created on August 5, 2018, 11:12 AM
 * 
 * This example code contains all the variations between char array and char pointers
 * 
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) 
{
    char string1[] = {'S', 't', 'r', 'i', 'n' ,'g', '1'};
    cout << "Compiler expects char array be null terminated" << endl;
    cout << string1 << endl;
    
    char string2[] = "String 2";
    cout << "Compiler pretends array index 0" << endl;
    cout << string2 << endl;

    char *sPtr = "String pointer";
    cout << "Pointer is pointing to a read only memory, try removing the comment below" << endl;
//    *sPtr = 'a';
    cout << sPtr << endl;
    
    char array[][2] = {'a', 'b', 'c', 'd', 'e', 'f'};
    cout << "compiler divides based on given row size" << endl;
    cout << array[2][0] << endl;
    
    
    
    
    
    
    return 0;
}

