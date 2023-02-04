/* 
@Program to demonstrate primitive Data Types & Size in 64 bit Arch in C++
@SK-here
*/

# include <iostream>

int main(){
    //For Char
    std::cout <<"Size of char is: " <<sizeof(char) <<" Byte" <<std::endl;
    std::cout <<"Size of wchar_t is: " <<sizeof(wchar_t) <<" Byte" <<std::endl;
    //Integer
    std::cout <<"Size of int is: " <<sizeof(int) <<std::endl;
    std::cout <<"Size of short int is: " <<sizeof(short int) <<" Byte" <<std::endl;
    std::cout <<"Size of long is: " <<sizeof(long int) <<" Byte" <<std::endl;
    //Floating Pointers
    std::cout <<"Size of float is: " <<sizeof(float) <<" Byte" <<std::endl;
    std::cout <<"Size of double is: " <<sizeof(double) <<" Byte" <<std::endl;
}