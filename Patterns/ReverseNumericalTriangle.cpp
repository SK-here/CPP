/**
 * @file ReverseNumericalTriangle.cpp
 * @author SK-here (trivedisaksham@gmail.com)
 * @brief To print the Right Angled triangle with reversed numbers
 * @version 0.1
 * @copyright Copyright (c) 2023
 * 
 * @Output:
 * 
 * 1 
 * 2 1 
 * 3 2 1 
 * 4 3 2 1 
 * 5 4 3 2 1 
 * 
 */

# include <iostream>

int main(){

    std::cout <<"Enter The number: ";
    int num{0};
    std::cin >>num;

    for (int row = 0; row <= num; row++){

        for (int col = row; col >= 1; col--){
            std::cout <<col <<" ";
        }
            std::cout <<'\n';
    }
}