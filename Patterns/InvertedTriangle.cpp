/**
 * @file Inverted-Triangle
 * @author SK-here (trivedisaksham@gmail.com)
 * @brief A program to print Inverted Triangle Pattern
 * @version 0.1
 * 
 * Output:
 *     
 *      * * * * * 
 *      * * * * 
 *      * * * 
 *      * * 
 *      * 
 * 
 */
#include <iostream>
#include <string.h>

int main(){

    std::cout <<"Enter the number: ";    
    int num{0};
    std::cin >>num;

    // For Rows
    for (int row = 0; row < num; row++){

        //For Coulmn
        for (int col = row; col < num; col++){
                std::cout <<"* ";
        }

       std::cout <<'\n';
    }
}