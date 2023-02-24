/**
 * @file Heart.cpp
 * @author SK-here 
 * @brief A C++ Program to print Heart Pattern
 * @version 1.0
 * @copyright Copyright (c) 2023
 * 
 * Output:
 * 
 *    @ @   @ @   
 *  @     @     @ 
 *  @           @ 
 *    @       @   
 *      @   @     
 *        @  
 * 
 */


#include<iostream>

int main()
{

    int num{6};

    std::cout <<'\n';

    for(int row = 0 ; row < num ; row++){

        for(int col = 0 ; col < num + 1 ; col++){
        
            (row == 0 && col % 3 != 0) || ( row == 1 && col % 3 == 0) || (row - col == 2) || (row + col == 8) ? std::cout <<"@ " : std::cout<<"  ";


        }
        std::cout<<'\n';
    }

}