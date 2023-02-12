# Condtionals or Branching

## Branching in C++

When a certain condition get's evaluated and based on that condition program performs a certain set of task or executes the certain set of statements such as function/method or another program during the execution of main program.

```md
The practices that applies the logic in a branched manner in programming is Known as Branching or Condtionals.
```

In C++ Conditionals or Branching can be done using some statements:

- if
- if-else

## Syntax

### if

```C++
bool condition = true; //or False

if (condition){ 
    /**
     * Statements...1
     * Statement...2
     *  .
     *  .
     * Statement...n!
     */
}

```

### if-else

```C++
bool condition=true; // Or false

if(condition){
    /**
     * Statements...1
     * Statement...2
     *  .
     *  .
     * Statement...n!
    */
}
else{
    /**
     * Statements...1
     * Statement...2
     *  .
     *  .
     * Statement...n!
     */
}

```

### General Explanation

When using `if` statement, our programs first evaluates the condtion and then depending on the conditions you defined that whether the block of code inside `if` will be executed if the condtion is true or false, It will jump to the code instructions written inside the block. Otherwise It just skips the block and proceeds further.

Since, `if` statement checks for only one thing that whether the memory block of a given condtion contains zero as a value at bit level or not. In case of any `non-zeroed` value the  `if` statement considers the condition as true otherwise false (when value is `0`)

And in case of `if-else` code block witten inside `else` block will get executed.

-----------------

When the execution of program starts. The whole program and the modules used for it are get stored in a memory and also the results produced by the program too, so when using branching the cpu checks a condition and then jump to the diffrent portion of the memory and start execution from there.

That's why using branching can be a overhead and when it comes to writing optimized code for performance using 'Branching' is avoided as much as possible.

#### General knowledge

- `if` Statements only takes boolean a input which can be directly passe through using condtions or indirectly evaluating a results and store it in a variable and then paas that variable to the if statement or when dealing with bits it can store value eighter in 1 = true or 0 = false.

```C++
int x = 5;

bool isTrue = x==5;

if (isTrue){
    /**
     * Statements...1
     * Statement...2
     *  .
     *  .
     * Statement...n!
     */
}

```

in case of if-else

```C++
int x = 5;

bool isTrue = x==5;

if (isTrue){
    /**
     * Statements...1
     * Statement...2
     *  .
     *  .
     * Statement...n!
     */
}
else{
    /**
     * Statements...1
     * Statement...2
     *  .
     *  .
     * Statement...n!
    */
}
```

or

```C++
if (true){
    /**
     * Statements...1
     * Statement...2
     *  .
     *  .
     * Statement...n!
     */
}

```

or

```C++
if (1){
    /**
     * Statements...1
     * Statement...2
     *  .
     *  .
     * Statement...n!
     */
}

```

In case of need, C++ supports multiple `if` or `if-else` can be used inside `if` block or `else` block.

Branching can also be done in a hirarchial/nesting way. Although, unless not needed avoid branching in nested manner since, it only adds complexity to the code.

> **Note:** Exploration of nested `if` or `if-else` will be done later.

*Thanks,*

***SK***
