# Control Flow Statements in C++

Control flow statements decides the flow of program using some special keywords provided in C++ theese statements manipulates the flow of the program in way developer wants.

Usually, theese statements are used with loops to give more control.

## Theese statements are -

- The ***switch*** case
- *break*
- *contrinue*
- *return*
- *goto*

## The Switch Case -

Switch allows selection among multiple sections of code, depending on the value of an integral expression.

***Syntax:***

Switch case can be initialized by using `switch` keyword follwed by an argument of type interger `int`
or character `char` and then follwed by the `case` blocks with colon `:` where each case contains
the set of instructions to be followed after selection of case. 

- > The program will not throw any errors if the switch statement doesn't contains `break` statements.

- > There are some other ways too when using switch statements I will update about them later.

```C++
switch(expression)
{    
case value1: /* statement_1; */    
    break;
    
case value2: /*statement_2; */ 
    break;
/**
 * 
 * 
*/
case value_n: /* statement_n; */
    break;

default: /* default statement; */
 
}    
```

**Note:** `break` keyword is used to stop the execution of next switch case.

***Example:***

```C++
int caseNume{0};

std::cin >>caseNum;

switch (x) {
case 1:
    std::cout << "Case 1";
    break;
case 2:
    std::cout << "Case 2";
    break;
case 3:
    std::cout << "Case 3";
    break;

// if the value of argument exceeds than the number of cases
default:
    std::cout << "Case out of Range";
    break;
}
```

---

### Control Flow Statements

### Break -

The `break` keyword used to terminate the instruction that it can terminate the execution of the particular code block (here it can be a case inside the switch or a loop)

**Syntax:**

Break can be used just by writing the keyword `break` followed by a semicolon `;`

```C++
    break;
```

**Example:**

In loop `break` is used to terminate the loop

```C++
condition = false;
while (true){
    if ( condtion != true ){
        break;
    }
}
```

In switch case `break` is used to terminate the case otherwise next case will start it's execution. and will noly stop to the case where `break` is used or till last case.

```C++
    short caseNum{0};
    std::cin >>caseNum;
    switch (caseNum){
        case 1 : std::cout <<"Case - 1 \n";
        break;
        case 2 : std::cout <<"Case - 2 \n";
        break;
        default : std::cout <<"Error!!! input out of Range \n";
        break;
    }
```

---

### Continue -

the `continue` statement is used when we need to skip the iteration of the loop.

**Syntax:**

Continue can be used just by writing the keyword `continue` followed by a semicolon `;`

```C++
    continue;
```

**Example:**

```C++
short i{0};

while ( i < 5 ){
    std::cout <<i <<'\n';
    //Skip the iteration when i = 3
    if ( i == 3 ){
        continue;
    }
    i++;
}
```

***Output:***

```txt
0
1
2
4 
```

---

### Return -

A `return` statement is used to return a value of specific type in a function or block of code (condtional or loop). Once the return statement gets executed the block of code get's terminated entirely after returning the value specified by it's return type.

**Syntax:**

Return can be used just by writing the keyword `return` followed by a return value and semicolon `;`

```C++
    return 0;
```

**Example:**

```C++
    //Function
    int main(){
        return 0;
    }
```

> In C++ since the main function has a return type (of integer) it returns `0` at the end of the program by default. maybe you don't write it in modern IDE/Editor but modern compiler adds the return statements at the end of the main() block.

---

### GoTo -

GoTo is a special control flow statement that is used to jump to the specific line

***Syntax:***

Goto can be used by typing `goto` keyword follwed by specified label_name (name of a line) and then colon `:`

```C++
    label_name:
    goto labele_name;
```

***Example:***

```C++
    int age;
    
    election:
    std::cout <<"Enter your age :";
    std::cin >>age;
    
    if (age <= 17) { 
      std::cout<<"\nYou are not eligible to vote.";  
      goto election;  
    } else {
        std::cout<<"\nYou are eligible to vote.";
    }  
```

This was a short Introduction to the control flow statements apart from the loops & conditionals.

***Thanks,***

***SK***
