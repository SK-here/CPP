/**
 * @file Triangle.cpp
 * @author SK-here (trivedisaksham@gmail.com)
 * @brief A program to print Triangle
 * @version 0.1
 *
 *  Output:
 * 
 *            * 
 *          * * 
 *        * * * 
 *      * * * * 
 *    * * * * * 
 * 
 */
#include <iostream>
int main(){
    
    std::cout <<"Enter the Number: ";

    int num{0};

    std::cin >>num;


    for (int row = 0; row < num; row++){
        for (int col = row; col < num; col++){
            std::cout <<"  ";
        }
        for (int col = 0 ; col <= row ; col++){
            std::cout <<"* ";
        }
        std::cout <<'\n';
    }
}