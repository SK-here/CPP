/**
 * @file Rectangle.cpp
 * @author SK-here (trivedisaksham@gmail.com)
 * @brief A program to print 4 various Square pattern
 * @version 0.1
 * 
 * Pattern:
 * 
 *   * * * * *   |   1 1 1 1 1 
 *   *       *   |   2       2 
 *   *       *   |   3       3 
 *   *       *   |   4       4 
 *   * * * * *   |   5 5 5 5 5 
 *   --------------------------
 *   * * * * *   |   1 1 1 1 1 
 *   *   *   *   |   2   2   2 
 *   * * * * *   |   3 3 3 3 3 
 *   *   *   *   |   4   4   4 
 *   * * * * *   |   5 5 5 5 5 
 * 
 */


# include <iostream>

int main(){
    
    std::cout <<"Enter the Dimension of a Square: ";
    
    short num{5};

    std::cin >>num;

    std::cout <<'\n';

    std::cout <<'\n';

// First Square

    //For Rows
    for (int row = 0; row < num ; row++ ){
               
        //For Coulmn 
        for (int col = 0; col < num ; col++){           
    
        // If  row or col are first or last one        
            if (col==0 || row == 0 || col == (num -1) || row == (num - 1)) 
                std::cout <<'*' <<" ";
            else std::cout <<"  ";         
        }

// Second Square
   
    std::cout <<"  |   ";
    for (int col = 0; col < num ; col++){           
    
        // If  row or col are first or last one        
            if (col==0 || row == 0 || col == (num -1) || row == (num - 1) ) 
                std::cout <<row+1 <<" ";
            else std::cout <<"  ";         
        }

        std::cout <<std::endl;

    }

for (short line = 0; line <= (num*num)-num ; line++){
    std::cout <<char(45);
}

    std::cout <<'\n';

// Third Square    
    
    for (int row = 0; row < num ; row++ ){    

        for (int col = 0; col < num ; col++){           
        
                if (col==0 || row == 0 || col == (num -1) || row == (num - 1) || col == num/2 || row == num/2 ) 
                    std::cout <<"*" <<" ";
                else std::cout <<"  ";         
            }


    std::cout <<"  |   ";

// Fourth Square
 
        for (int col = 0; col < num ; col++){           
        
                if (col==0 || row == 0 || col == (num -1) || row == (num - 1) || col == num/2 || row == num/2 ) 
                    std::cout <<(row+1) <<" ";
                else std::cout <<"  ";         
            }

        std::cout <<std::endl;

    
    }

   // Press enter to exit
    std::cin.get();
}