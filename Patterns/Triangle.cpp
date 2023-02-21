#include <iostream>
int main(){
    int num{5};

    for (int row = 0; row < num; row++){
        for (int col = row; col < num; col++){
            std::cout <<"  ";
        }
        for (int col = 0 ; col <= row ; col++){
            std::cout <<"* ";
        }
        std::cout <<'\n';
    }
}