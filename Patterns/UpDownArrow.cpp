/**
 * @file UpwardArrow.cpp
 * @author SK-here (trivedisaksham@gmail.com)
 * @brief A program to print UpDown Arrow Pattern
 * @version 1.6
 * 
 * Output:
 *           # # 
 *         # # # # 
 *       # # # # # # 
 *     # # # # # # # # 
 *   # # # # # # # # # # 
 *         # # # #       
 *         # # # #       
 *         # # # #       
 *         # # # #       
 *         # # # #       
 *         # # # #       
 *         # # # #       
 *         # # # #        
 *   # # # # # # # # # # 
 *     # # # # # # # # 
 *       # # # # # # 
 *         # # # # 
 *           # #  
 * 
 */

# include <iostream>
int main(){
    
    std::cout <<"Enter the number: ";
    int num{5};
    std::cin >>num;

    std::cout <<'\n';

 // First Half Arrow
   for (int row = 0; row < num ; row++){
        
        // For Arrow Head Upwards
        for (int col = row ; col < num - 1 ; col++){
            std::cout <<"  ";
        }

        for (int col = 0 ; col <= row ; col++){
            std::cout <<"# ";
        }

        for (int col = 0 ; col <= row ; col++){
            std::cout <<"# ";
        }

        std::cout <<'\n';
    }

    // For Arrow Line
    for (int row = 0; row < (num - 1) * 2 ; row++){

       for (int col = 0 ; col < num ; col++){
            col == num - 1 || col == num - 2 ? std::cout <<"# " : std::cout <<"  ";
        }

        for (int col = 0 ; col < num ; col++){
            col == 0 || col == 1 ? std::cout <<"# " : std::cout <<"  ";
        }

        std::cout <<'\n';
    }

 // For Arrow Head Downwards
    for (int row = 0; row < num ; row++){
    
       for (int col = 0 ; col < row ; col++){
            std::cout <<"  ";
        }
        for (int col = row ; col < num ; col++){
            std::cout <<"# ";
        }
        for (int col = row ; col < num ; col++){
            std::cout <<"# ";
        }
        std::cout <<'\n';
    }


}
