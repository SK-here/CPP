# Operators & Scope of variable in C++

@SK-here

## Operators

Opearors are used when a mathematical calculation is involved in diffrent ways which requires zero or more input values (called *Operands*) and produces a new value or O/p.

The Specific operation to be performed is denoted by a *Operator* (Symbol or pair of symbols involved while evaluating a mathematical expressions).

In C++ there are 6 types of Operators that are used to perform various operations

    - Arithmetic Operators
    - Relational Operators
    - Logical Operators
    - Bitwise Operators
    - Assignment Operators
    - Ternary or Conditional Operators

### Detailed Overview :-

#### Arithmetic Operators -

Arithmatic Operators can be further divided into :-

**Uninary Operaotors:**

| Symbol | Name | Description |
| :--- | :--- | :--- |
| ++ | Increment | Increases the value by one |
| -- | Decrement | Decreases the value by one |

**Binary Operators:**

| Symbol | Name        | Description                                     |
| :---   | :---        | :---                                            |
|   +    | Addition    | Adding two or more Values                       |
|   -    | Subtraction | Subtracting two or more Values                  |
|   *    | Multiply    | Multiplying two or more Values                  |
|   /    | Divide      | Dividing two Values                             |
|   %    | Modulo      | Returns the reaminder of a division (an Integer)|

> The Modulo (`%`) Operator only returns whole integer as a output.

#### Relational Operators -

These operators are used for the comparison of the values of two operands.

| Symbol | Name | Description |
| :--- | :--- | :--- |
| == | Is equals to | Checks if both operands are equal |
| > | Greater than | Checks if first operand is greater than the second operand|
| < | Less than | Checks if first operand is less than the second operand |
| >= | Greater than or Equals | Checks if first operand is greater or equals to the second operand |
| <= | Less than or Equals | Checks if first operand is less or equals to the second operand |
| != | Not Equals | Checks if first operand is not equals to the second operand |

#### Logical Operators -

These operators are used to combine two or more conditions or constraints or to complement the evaluation of the original condition in consideration. The result returns a Boolean value, i.e., `true` or `false`.

| Symbol | Name | Description |
| :---: | :--- | :--- |
| && | Logical `AND` | Returns True in case of all operands are `true` or non-zero valued|
| ! | Logical `NOT` | Returns true if the operand is false or zero |

- (`||`) :- Logical `OR` - Rerturns true of eighter of the operands is true or non zero

> `OR` is outside of the table due to limitations of markdown

#### BitWise Operators -

These operators are used to perform bit-level operations on the operands. The operators are first converted to bit-level and then the calculation is performed on the operands. Mathematical operations such as addition, subtraction, multiplication, etc. can be performed at the bit level for faster processing.

| Symbol | Name | DEscription |
| :---: | :--- | :--- |
| & | Binary `AND` | Copies a bit to the evaluated results if it exists in both operands. |
| ^ | Binary `XOR` | Copies the bit to the evaluated results if it's present in either of the operands but not both. |
| << | Left Shift | Shifts the bits of a number to the left by specified number of shifts. |
| >> | Right Shift | Shifts the bits of a number to the Right by specified number of shifts. |
| ~ | One's complement | Inverts the Binary Digits. |

- (`|`) :- Binary `OR` - Copies a bit to the evaluated result if it exists in any of the operand.

#### Assignment Operator -

These operators are used to assign value to a variable. The left side operand of the assignment operator is a variable and the right side operand of the assignment operator is a value.

***Keep In Mind:*** *The value on the right side must be of the same data type as the variable on the left side otherwise the compiler will raise an error.*

| Symbol | Name | Description | Example |
| :---: | :--- | :--- | :--- |
| `=` | Assignment Operator | Assigns the value from right to the variable in the left. | int a = 2; // a = 2 |
| `+=` | Add and Assign | First adds the current value from left to the right side and then assigns the results to the variable.| int a = 2, b = 4; a+=b; // a = 6 |
| `-=` | Subtract and Assign | First subtracts the current value from left to the right side and then assigns the results to the variable. |int a = 2, b = 4; a-=b; // a = -2 |
| `*=` | Multiply and Assign | First multiplies the current value from left to the right side and then assigns the results to the variable. | int a = 2, b = 4; a*=b; // a = 8 |
| `/=` | Divide and Assign | First divides the current value from left to the right side and then assigns the results to the variable. |int a = 4, b = 2; a /=b; // a = 2 |

#### Conditional Operators(?:)

Often also known as ternary operator it returns the value based on the condition.

    Expression1 ? Expression 2 : Expression 3

The ternary operator ? determines the answer on the basis of the evaluation of Expression1. If it is true, then Expression2 gets evaluated and is used as the answer for the expression. If Expression1 is false, then Expression3 gets evaluated and is used as the answer for the expression.

This operator takes three operands, therefore it is known as a Ternary Operator.

***For Example***

```C++
    # include <iostream>
    int main()
    {
        int a = 3, b = 4;
        // Conditional Operator
        int result = (a < b) ? b : a;
        std::cout << "The greatest number is " << result <<'\n';
    }
```

---

## Scope

In C++ variable scope can be defined in two ways

- Local Variable
- Global Variables

### Local Variable

When a variable is defined inside the `{` `}` block then the life of variable exists only inside the Block whether it is the `main()` function.

You cannot access the variable outside the `{` `}` block

***Example:***

```C++
    /** 
     * 
     * CPP program to illustrate the
     * usage of local variables
     *
    **/ 
    #include<iostream>

    void func()
    {
        /** 
         * this variable is local to the
         * function func() and cannot be
         * accessed outside this function
        */
        int age=18;
    }

    int main()
    {
        std::cout<<"Age is: "<<age;
        // Will throw error      
    }
```

### Global Variable

As the name suggests, Global Variables can be accessed from any part of the program.

- They are available through out the life time of a program.
- They are declared at the top of the program outside all of the functions or blocks.
- Declaring global variables: Global variables are usually declared outside of all of the functions and blocks, at the top of the program.
- They can be accessed from any portion of the program.

```C++
    // CPP program to illustrate
    // usage of global variables
    #include<iostream>

    // global variable
    int global = 5;

    /** 
     * global variable accessed
     * within a function
    */ 
    void display()
    {
        std::cout<<global<<endl;
    }

    // main function
    int main()
    {
        display();
        /**
         * changing the value of global
         * variable from the main function
        */
        global = 10;
        display();
    }
```

In the above program. The variable `global` is declared at the top is global and stores the value `5` where as that declared within main function is local and stores a value `2`.

So, the question is when the value stored in the variable named `global` is printed from the main function then what will be the output? `2` or `5`?

There can be two explanation for this:

1. Usually when two variable with same name are defined then the compiler produces a ***compile time error.*** But if the variables are defined in different scopes then the compiler allows it.

2. Whenever there is a local variable defined with same name as that of a global variable then the compiler will give precedence to the local variable

So in that case C++ provides the functionality called as `scope resolution operator` or `::`

***Example:***

```C++
    /**
     *  C++ program to show that we can access a global
     * variable using scope resolution operator :: when
     * there is a local variable with same name
    */
    #include<iostream>

    // Global x
    int x = 0;

    int main()
    {
    // Local x
    int x = 10;

    //Accessing Global variable
    std::cout << "Value of global x is " << ::x;

    //Accessing local variable
    std::cout<< "\nValue of local x is " << x;

    }
```

***Output:***

    Value of global x is 0
    Value of local x is 10

---

**Thanks,**

**SK**
