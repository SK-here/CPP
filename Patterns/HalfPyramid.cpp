/**
 * @file Pyramid.cpp
 * @author SK-here (trivedisaksham@gmail.com)
 * @brief A program to print Pyramid pattern
 * Output: 
 * 
 *          * 
 *        * * * 
 *      * * * * * 
 *    * * * * * * * 
 *  * * * * * * * * * 
 * 
 */

# include <iostream>

int main(){
    int num{5};

// For rows
    for (int row = 0 ; row <= num ; row++){
       
    // For Spaces
        for (int col = row; col < num; col++ ){
            std::cout <<"  ";
        }
    // For First Triangle
        for (int col = 0; col < row; col++ ){
            std::cout <<"* ";
        }
    // For Second Triangle
        for (int col = 1 ; col < row ; col++ ){
            std::cout <<"* ";
        }
        
        std::cout <<'\n';
    }
}