# include <iostream>
int main(){
    
    std::cout <<"Enter the number: ";
    int num{0};
    std::cin >>num;

    for (int row = 0; row < num ; row++){
        
        for (int col = 0 ; col < num; col++){
            row == num - 1 || row == num - 2 ? std::cout <<"# " : std::cout <<"  ";
        }
        for (int col = 0 ; col <= row ; col++){
            std::cout <<"# ";
        }
        std::cout <<'\n';
    }
    
    for (int row = 0; row < num ; row++){
       for (int col = 0 ; col < num ; col++){
            row == 0 || row == 1 ? std::cout <<"# " : std::cout <<"  ";
        }
        for (int col = row ; col < num ; col++){
            std::cout <<"# ";
        }
        std::cout <<'\n';
    }
}