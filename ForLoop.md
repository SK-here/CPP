# Loops In C++

In Computer programming Loops are a part of control flow instructions and used for special purposes when we have to,

- Perform a repetative tasks or executing the same instruction (or set of instructions) repeatedly.

or

- Iterating over a set of elements defined by their type such as array

Loops can be used to perform any of the above untill the condiotion meets and once the condition is satisfied the execution of statements inside the stops and program exits the loop. to execute the further isntructions

## Types of Loops in C++

There are three main types of loops in C++

- while Loop

- do-While Loop

- for loop

### Let's have a look

#### the `while` loop

**Description:**

*`while` loop is generally used to perform repeating task till the condition is true.*

*It takes condition as an argument and evaluates the condtion to proceed further.*

*For the first time if the given condition is false the program will jump to the next portion of a statements, skipping the loop. Otherwise it enters the loop and executes the same instructuions unless the breaking condition is satisfied. once the condition is satisfied program exits the loop and proceeds further.*

#### Syntax-

```C++
while (condition){ 
    /**
     * Statement - 1
     *     |
     * statement - n
    */
}
```

> ***Note:*** *In case of infinite loop (when true or 1 is provided as an argument to the while loop) press Ctrl + C or (^C) to stop the execution of a program/loop.*

#### The `do`-`while` loop

**Description:**

*`do`-`while` loop works in the same way as the `while` loop does. the only diffence is in `do`-`while` program executes the instructions inside the loop atleast once and at the end of the block condtion is checked if the condtion is true(not satisfied yet) the loop continues the execution of  `do` block otherwise the program proceeds further.*

#### Syntax -

```C++
do{ 
    /**
     * Statement - 1
     *     |
     * statement - n
    */
}while (condition);
```

#### The `for` loop

**Description:**

*`for` loop take upto three arguments i.e.*

- initialization
- condition
- increment

*Where, each arguments is seperated using `;` (semi-colon). `for` loop is the mostly used loop among all of the loops in C++. Since, it provides versatality, flexibilty, and the ease of use with lesser number of lines of codes .*

> ***Note:*** It's not mandatory to have any of the above mentioned but the general assumption is that if you're entering to the loop you will be exiting too somehow, So in such a case you had to have at least the breaking condtion

We will explore more in details while utilizing the loops and other concepts in programming.

#### Syntax

```C++
for (int i = 0; i < n ;){
    //Body of loop
}
```

#### Rules to define `for` loop

1

```C++
int i =0;
for (i = 2; i < 3; i++ ){
    //Body of the loop
}
```

or

```C++
int i =0;
for (; i < 3; i++ ){
    //Body of the loop
}
```

2

```C++
for (; ; i++ ){
    //Body of the loop
}
```

or

```C++
for (; ; i++ ){
    //Body of the loop
    if (/*consition*/){
        break; //use to break the loop/sequence
    }
}
```

3

```C++
//Infinite loop
for (; ;){
    //Body of the loop
    /* 
     * never exits unless Ctrl + C is 
     * pressed to interrupt the whole program
    */
}
```

or

```C++
for (; ;){
    //Body of the loop
    i++; //Increment/Decrement
}
```

> Although `for` and `while` loops exists because of their specific use case  but both works pretty much the same in most sense so it's upto you whether to use `for` loop or `while` loop
