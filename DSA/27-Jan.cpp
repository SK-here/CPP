# include <iostream>

int main (){
    int number=0;
    //User Input
    std::cout << "Enter the Number:" << std::endl;
    std::cin >>number;

    // Odd Number
    for (int i = 1; i <= number; i = i + 2){
        if (i % 2 == 1){
            std::cout << i << std::endl;
        }
    }
}