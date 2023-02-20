/**
 * @file HollowPyramid.cpp
 * @author SK-here (trivedisaksham@gmail.com)
 * @brief A program to print Hollow Half Pyramid 
 * Output:
 *           * 
 *         *   * 
 *       *       * 
 *     *           * 
 *   * * * * * * * * * 
 *  
 * 
 */

# include <iostream>
int main(){
    int num{5};
    
    for (int row = 0; row < num ; row++){

    //  For Blankspace
        for (int col = row; col < num - 1 ; col++){
            std::cout <<"  ";
        }

    // For First Triangle
        for (int col = 0; col <= row ; col++){
            col == 0 || row == num - 1  ? std::cout <<"* " : std::cout <<"  ";
        }
    
    // For Second Triangle 
    for (int col = 1; col <= row ; col++){
        row == num -1 || col == row  ? std::cout <<"* " : std::cout <<"  ";
    }
        std::cout <<'\n';
    }
}