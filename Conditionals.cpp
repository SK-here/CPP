/**
 * @SK-here
 * 
 * Conditionals and Branching in C++
 * 
 * if 
 * if-else
 * Nested-if/if-else
 * 
*/

# include <iostream>

int main(){
    int x{5};
    bool isTrue = x==5;
    
    std::cout <<"Outside the Block";
//------------------------------------------
    if (isTrue){
        std::cout <<"\nThis is a Block 1";
    }
    else{
        std::cout <<"\nThis is a else Block of Block 1";
        //Never get print
    }
//-----------------------------------------
    if(true){
        std::cout <<"\nThis is a Block 2";
    }
    else{
        std::cout <<"\nThis is a else block of Block 2";
        //Never get print
    }
//-------------------------------------
    isTrue = x==6; //Value updated ;b
    
    if(isTrue){
        std::cout <<"\nThis is a Block 3";
    }
    else{
        std::cout <<"\nThis is a else block of Block 3";
        // Never get executed
    }
//---------------------------------------
    if(1){ //Always True
        std::cout <<"\nThis is a Block 4";
    }
    /**
     * Any value execept 0 is considered as a True only 0 denotes
     * False since it's in binary bool occupies 1 byte of memory
     * which means that if binary value of that memory block contains
     * all bit set as 0 it is considered as false and if any of the 
     * bit contains even a single bit as 1 it will be considered true.
    */
//---------------------------------------
    if(x==5){
        std::cout <<"\nThis is a Block 5";
    }
    else{
        std::cout <<"\nThis is a else block of Block 5" ;
    }
//----------------------------------------    
    if (x){
        std::cout <<"\nThis is a X block before updation\n";
    }
    else{
        std::cout <<"This is X's else\n";
    }
    x = 0; //Updating value of X
    if (x){
        std::cout <<"This is a X block" <<'\n';
    }
    else{
        std::cout <<"This is X's else after updation\n";
    }
    std::cin.get();
}