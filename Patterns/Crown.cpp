/**
 * @file Crown.cpp
 * @author SK-here (you@domain.com)
 * @brief A Program to print crown pattern
 * @version 1.0
 * 
 * @copyright Copyright (c) 2023
 * 
 */

# include <iostream>
int main(){

    // std::cout <<"Enter the Number: ";
    int num{5};
    // std::cin >>num;
    std::cout <<'\n';

    // For Crown Top

    for (int row = 0 ; row <= num ; row++){
       
    // For First Pyramid    
        for (int col = 0 ; col < row ; col++){
            std::cout <<"#";
        }
        for (int col = row ; col < num ; col++){
            std::cout <<" ";
        }   
    // For Diamond
        for (int col = row; col < num; col++ ){
            std::cout <<" ";
        }
       
        for (int col = 0; col < row; col++ ){
            std::cout <<"#";
        }
       
        for (int col = 1 ; col < row ; col++ ){
            std::cout <<"#";
        }

        for (int col = row ; col < num ; col++){
            std::cout <<" ";
        }   

    // For Hollow Diamond

        //  For Blankspace
        for (int col = row; col < num ; col++){
            std::cout <<" ";
        }

        // For First Triangle
        for (int col = 0; col < row ; col++){
            col == 0 || row == num || col  == row - 1 ? std::cout <<"#" : std::cout <<" ";
        }
    
        // For Second Triangle 
        for (int col = 1 ; col < row ; col++){
            row == num || col == row - 1 ? std::cout <<"#" : std::cout <<" ";
        }
 
        for (int col = row ; col < num ; col++){
            std::cout <<" ";
        }   

    // For Diamond - 2

        // For Diamond
        for (int col = row; col < num; col++ ){
            std::cout <<" ";
        }
       
        for (int col = 0; col < row; col++ ){
            std::cout <<"#";
        }
       
        for (int col = 1 ; col < row ; col++ ){
            std::cout <<"#";
        }

        for (int col = row ; col < num ; col++){
            std::cout <<" ";
        }   
        
        for (int col = row ; col < num ; col++){
            std::cout <<" ";
        }
        for (int col = 1 ; col <= row ; col++){
            std::cout <<"#";
        }
 

        std::cout <<'\n';
    }


    // For Crown Bottom

    for (int row = 0 ; row < num - 1 ; row++){
        for (int col = 0; col <= num * 4 - 2 ; col++){
            col % 2 == 0 || row == 0 || row == num - 3 || row == num - 2 ? std::cout <<"#" <<" ": std::cout <<"  ";
        }
        std::cout <<'\n';
    }
}