/**
 * @file TwoDirArrow.cpp
 * @author SK-here (you@domain.com)
 * @brief  Program to Print Two  Directional Arrow
 * @version 1.5
 * Output: 
 * 
 *        #                     # 
 *      # #                     # # 
 *    # # # # # # # # # # # # # # # # 
 *  # # # # # # # # # # # # # # # # # # 
 *  # # # # # # # # # # # # # # # # # # 
 *    # # # # # # # # # # # # # # # # 
 *      # #                     # # 
 *        #                     # 
 * 
 */

# include <iostream>
int main(){
    
    std::cout <<"Enter The Number: ";
    int num{5};
    std::cin >>num;

 //Half Arrow Up Part

    for (int row = 0 ; row < num ; row ++){
        
        // Half Left Arrow half up
        for (int col = row ; col < num - 1 ; col++){
            std::cout <<"  ";
        }
        for (int col = 0 ; col < row ; col++){
            std::cout <<"# ";
        }

        
        // Middle Line - 0
        for (int col = 0 ; col < num*2 ; col++){
            row >= num - 2 ? std::cout <<"# " : std::cout <<"  ";
        }

        // For Half Right Arrow Up
        for (int col = 0 ; col < row ; col++){
            std::cout <<"# ";
        }
        
        //New Iteration
        std::cout <<'\n';
    }

 //---------------------------------------------------------------------


 //Half Arrow Down Part 
   
    for (int row = 0 ; row < num ; row++){
        
        // Half Arrow left bottom
        for (int col = 0 ; col < row ; col++){
            std::cout <<"  ";
        }
        for (int col = row ; col < num - 1 ; col++){
            std::cout <<"# ";
        }

        // Middle Line - 1
        for (int col = 0 ; col < num*2 ; col++){
            row <= 1  ? std::cout <<"# " : std::cout <<"  ";
        }

        // Half Arrow Right Down
        for (int col = row ; col < num - 1 ; col++){
            std::cout <<"# ";
        }

        //New Iteration
        std::cout <<'\n';
    }


}