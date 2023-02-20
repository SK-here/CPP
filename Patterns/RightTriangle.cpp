/**
 * @file Pyramid.cpp
 * @author SK-here (trivedisaksham@gmail.com)
 * @brief program to print pyramid using '*' 
 * @version 0.1
 * 
 * Output:
 *  
 *   * 
 *   * * 
 *   * * * 
 *   * * * * 
 *   * * * * * 
 */

# include <iostream>
int main(){
    int num{5};

    for (int row = 0; row <= num; row++){
        for (int col = row ; col >= 1; col--){
            std::cout <<"* ";
        }
       std::cout <<'\n';
    }
}