/**
 * @file UpwardArrow.cpp
 * @author SK-here (trivedisaksham@gmail.com)
 * @brief A program to print Right Arrow Pattern
 * @version 0.1
 * 
 * Output:
 *  ############
 *  ##### #####
 *  #### # ####
 *  ### ### ###
 *  ## ##### ##
 *  # ####### #
 *  ## ##### ##
 *  ### ### ###
 *  #### # ####
 *  ##### #####
 *  ############            
 *              
*/
#  include <iostream>
int main(){
    
    std::cout <<"Enter the number: ";
    int num{5};
  //  std::cin >>num;

    std::cout <<'\n';

   for (int row = 0; row <= num; row++){
        
        for (int col = row ; col <= num  ; col++){
            std::cout <<"#";
        }

        for (int col = 1 ; col < row ; col++){
            col == 1 ? std::cout <<" " : std::cout <<"#";
        }
        
        for (int col = 0 ; col < row ; col++){
            col == row  - 1 ? std::cout <<" " : std::cout <<"#";
        }

        for (int col = row ; col <= num ; col++){
           std::cout << "#";
        }

        std::cout <<'\n';
    }
    
    for (int row = 0; row < num ; row++){
    
       for (int col = 0 ; col <= row + 1 ; col++){
            std::cout <<"#";
        }

        for (int col = row + 1; col < num - 1 ; col++){
            col == row + 1  ? std::cout <<" " : std::cout <<"#";
        }

        for (int col = row ; col < num - 1 ; col++){
            col == num - 2 ? std::cout <<" " : std::cout <<"#";
        }

        for (int col = 0 ; col <= row + 1 ; col++){
           std::cout <<"#";
        }

        std::cout <<'\n';
    }
}