/**
 * @file InvertedPyramid.cpp
 * @author SK-here (trivedisaksham@gmail.com)
 * @brief A program to print Inverted pyramid
 * @version 0.1
 * 
 *  Output:
 *  
 *   * * * * * * * * * 
 *     *           * 
 *       *       * 
 *         *   * 
 *           * 
 * 
 */

# include <iostream>

int main(){
    
    std::cout <<"Enter the Number: ";

    int num{0};

    std::cin >>num;


    for (int row = 0; row < num ; row++){
        
        for (int col = 0 ; col < row ; col++){
            std::cout <<"  ";
        }
        for (int col = row ; col < num ; col++){
            row == 0 || row == num - 1 || row == col ? std::cout <<"* " : std::cout <<"  ";
        }
        for (int col = row ; col < num - 1 ; col++){
            row == 0 || col == num - 2  ? std::cout <<"* " : std::cout <<"  ";
        }
        std::cout <<'\n';
    }
}