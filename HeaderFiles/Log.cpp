#include <iostream>
#include "Log.h"


void InitLog(){
    Log("Initializing Log");
}

void Log(const char* text){
    std::cout <<text << std::endl;
}   