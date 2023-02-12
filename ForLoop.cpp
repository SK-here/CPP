/**
 * @SK-here
*/
# include <iostream>

void whileLoop(){
    // While Loop
    short loop{0};
    short count{0};
    bool test;
    
    std::cout <<++loop;

    test = count == 0; //true
    
    while (test){
        std::cout <<"loop: " <<(++loop) <<'\n'; 
        count++;
        if (count == 3) break;
    }
    
    std::cout <<++loop;

    test = count >= 0;
    
    while (test){
        std::cout <<"loop: " <<'\n'; 
        count++;
        if (count == 3) break;
    }

    // //Infinite Loop
    std::cout <<++loop;
    // test = true;
    
    // while (test){
    //     std::cout <<"loop: " <<'\n'; 
    // }

    std::cout <<++loop;
    
    // test = 1;
    
    // while (test){
    //     std::cout <<"loop: " <<'\n'; 
    // }

    // Will not run at all
    std::cout <<++loop;

    test = false;
    
    while (test){
        std::cout <<"loop: " <<'\n'; 
    }

    std::cout <<++loop;

    test = 0;
    
    while (test){
        std::cout <<"loop: " <<'\n'; 
    }

}
//-----------------------------------------------------------
void forLoop(){
    int loop{0};
    short count = 1;
    
    std::cout <<"loop: " <<count++ <<'\n';

    for (int j = 0; j < 3; j++ ){
        std::cout <<"Hello \n";
    }

    std::cout <<"loop: " <<count++ <<'\n';

    int i =0;
    
    for (; i < 3; i++ ){
        std::cout <<"Hello \n";
    }

    std::cout <<"loop: " <<count++ <<'\n';
    // // Infinite loop
    // for (; ; i++ ){
    //     std::cout <<"Hello \n";
    // }

    std::cout <<"loop: " <<count++ <<'\n';

    for (; ; i++ ){
        std::cout <<"Hello \n";
        if (i == 3){
            break; //use to break the loop/sequence
        }
    }

    std::cout <<"loop: " <<count++ <<'\n';

    // //Infinite loop
    // for (; ;){
    //     std::cout <<"Hello \n";
    //     /* 
    //     * never exits unless Ctrl + C is 
    //     * pressed to interrupt the whole program
    //     */
    // }
}


void doWhileLoop(){
    // do-while Loop
    short loop{0};
    short count{0};
    bool test;

    std::cout <<++loop;

    test = count == 0; //true

    do{
        std::cout <<"loop: " <<loop <<'\n'; 
        count++;
        if (count == 3) break;
    }while (test);
    
    std::cout <<++loop;

    test = count >= 0;
    
    do{
        std::cout <<"loop: " <<loop <<'\n'; 
        count++;
        if (count == 3) break;
    }while (test);

    // //Infinite Loop
    
    std::cout <<++loop;
    
    // test = true;
    
    // do{
    //     std::cout <<"loop: " <<loop  <<'\n'; 
    // }while (test);
    
    std::cout <<++loop;

    // test = 1;
    
    // do{
    //     std::cout <<"loop: " <<loop <<'\n'; 
    // }while (test);

    std::cout <<++loop;

    // Will run at least once
    test = false;
    
    do{
        std::cout <<"loop: " <<loop <<'\n'; 
    }while (test);


    std::cout <<++loop;

    test = 0;
    
    do{
        std::cout <<"loop: " <<loop <<'\n'; 
    }while (test);
}


int main(){
    /**
     * Uncomment one function call at a time to know to about each loop
    */
    // whileLoop();
    // std::cout <<"\n- - - - - - - - - - - - - - - - - - - - - - -\n";
    // forLoop();
    // std::cout <<"\n- - - - - - - - - - - - - - - - - - - - - - -\n";
    // doWhileLoop();
}