# Header Files in C++

In C++ header files are basically used to declare certain types of funtions to that they can be used throughout the whole program

So, In C++ there are ceratin types of functions that are used so in order to tell the program that the functions we are using it, does exists somewhere it can be eighter just declaration of function it self or it can contain whole defination of function.

## Below is a basic understanding of header files in C++

### Example

***Consider three files***

```txt
- HeaderFile.cpp
- Log.h
- Log.cpp
```

---

#### HeaderFile.cpp

```C++
# include "Log.cpp"

int main(){
    InitLog();
    Log("This is Happening");
}
```

#### Log.h

```C++
#pragma once

void Log(const char* text); 

void InitLog();
```

#### Log.cpp

```C++
#include <iostream>
#include "Log.h"

void InitLog(){
    Log("Initializing Log");
}

void Log(const char* text){
    std::cout <<text << std::endl;
}   
```

---

**Explanation:**

As you can see in header file i.e. `Log.h` we have only declarations of the functions not the actual body itself, Since header files can contain funtion's body too but in such case we will not be able to define what the function will be actually doing.

For instance let's take `std::cout` as an example since the working/defination of the `cout` function already exists in the header file we can only use it

but when writing an actual C++ program, there are some situation you might ran into where you just need to define that the function exists not what it actaully does. You can define the funtionality in program later. So in order to do that eighter you can copy &then paste the declaration of the function, i.e in our case,

```C++
void Log(const char* text); 

void InitLog();
```

but C++ provides the neat way to do this (`header files`)

as you can see in `Log.h` only the declaration of function exists and the body is defined in Log.cpp

Body for Log()

```C++
void Log(const char* text){
    std::cout <<text << std::endl;
}
```

Body for InitLog()

```C++
void InitLog(){
    Log("Initializing Log");
}
```

But calling of funtion is happening in the main() function of HeaderFile.cpp

```C++
InitLog();
Log("This is Happening");
```

Here, only Log.cpp is included at the top

```C++
# include "Log.cpp"
```

### Step by Step execution of HeaderFile.cpp

Step - 1: Compiler checks and includes the content of `log.cpp` into the program

Step - 2: Since, `Log.cpp` contains `Log.h` the compiler includes all the contents of `Log.h` in `Log.cpp` (In our case function declarations).

Step - 3: Where, `Log.cpp` contains the defination (body) of a both function i.e. `Log()` & `InitLog()` declared in `Log.h` all the pieces are collected and that's what actually get included into the `HeaderFile.cpp`

overall our final program before execution will look like this

```C++
// Log.cpp starts
#include <iostream>
// Log.h inside Log.cpp
void Log(const char* text); 

void InitLog();

void InitLog(){
    Log("Initializing Log");
}

void Log(const char* text){
    std::cout <<text << std::endl;
}   
// Log.cpp ends here

// HeaderFile.cpp
int main(){
    InitLog();
    Log("This is Happening");
}
```

> ***Note:*** *`include` keyword is used to include all the contents of a file mentioned after the keyword into the file but the actual content or the file itself never gets compiled the compilation happpens when the content is included to the current file and it gets compiled.*

#### Thanks

#### - SK
