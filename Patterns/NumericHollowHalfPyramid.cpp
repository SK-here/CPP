/**
 * @file NumericHollowHalfPyramid.cpp
 * @author SK-here (trivedisaksham@gmail.com)
 * @brief A program to print Numeric Hollow Half Pyramid
 * @Output: 
 *           1 
 *         1   1 
 *       1       1 
 *     1           1 
 *   1 2 3 4 5 4 3 2 1
 * 
 */

# include <iostream>
using namespace std;

int main(){

    std::cout <<"Enter the number: ";
    
    int num{0};
    
    std::cin >>num;

    // Number of rows    
    for (int row = 0; row < num; row++){
        
        // Inverted Tiangle
        for (int col = row; col < num ; col++){
            cout <<"  " ;
        }
        
        // Right sided Triangle
        for (int col = 0 ; col <= row ; col++){
            
        // If...                           Print This       else  This   
            (col == 0 || row == num - 1) ? cout <<col+1 <<" " : cout <<"  ";
        }

        // Left Sided Tirangle
        for (int col = row; col >= 1 ; col--){

        //  If...                                             Print This     else  This   
            (col == 1 || col == num - 1 || row == num - 1)  ? cout <<col <<" " : cout <<" " <<" ";
        }
        
        //Go to Next Iteration
        cout <<'\n';
    }
}