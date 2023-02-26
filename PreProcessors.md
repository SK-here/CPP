# Pre Processors in C++

Author: @SK-here

In C++ Preprocessors are the statement that tells compiler to pre-process the C++ code files before it gets converted into translation unit where the translation unit is what which get's compiled then by the comiler.

> Historically, preprocessors were the seperate program from the compiler, but in modern comilers, the preprocessors are embedded into the compiler.

Usually preprocessors does commmon tasks as

- [x] Stripping out comments.
- [x] Ensring each code file ends in a new line.
- [x] Processing of `# include` directive.
- [ ] Compilation of the code files.

After preprocessing the code file the results are called `translation unit`.

---

## The Translation

The entire process of pre-processing, compilation and linking is called **translation**

### Process of Translation -

***Phase - 1:***

1) The Individual byte of source code file are mapped in implementation defined manner to the characters of the basic character set. In particular, OS-dependent end of line indicators are replaced by the new-line characters.

2) Any source file character that cannot be mapped to a charcter in the basic source character set  is replaced by it's universal charcter name (escaped with `\u` or `\U`).

3) Trigrapgh sequences are replaced by corresponding single charcter representation.

> See Also: [Basic Source Character Set.](URL "https://en.cppreference.com/w/cpp/language/translation_phases") and [Universal Character Name](https://en.cppreference.com/w/cpp/language/escape)

***Phase - 2***

1) If the first translation character is byte order mark (U+FEFF), it is deleted. Whenever backslash appears at the end of a line (immediately followed by zero or more whitespace characters other than new-line followed by (since C++23) the newline character), these characters are deleted, combining two physical source lines into one logical source line. This is a single-pass operation; a line ending in two backslashes followed by an empty line does not combine three lines into one. If a universal character name is formed outside raw string literals (since C++11) in this phase, the behavior is undefined.

2) If a non-empty source file does not end with a newline character after this step (whether it had no newline originally, or it ended with a newline immediately preceded by a backslash), a terminating newline character is added.

***Phase - 3***

1) The source file is decomposed into comments, sequences of whitespace characters (space, horizontal tab, new-line, vertical tab, and form-feed), and preprocessing tokens, which are the following:
        - header names such as `<iostream>` or `"myFile.h"`
        - identifiers
        - preprocessing numbers
        - characters and string literals
        - operators and punctuations (including alternative tokens), such as `+` , `<<=`, `<%`, `##`, or `and`
        - individual non-whitespace charcters and that do no fit in any other category.

2) Any transformations performed during phases 1 and 2 between the initial and the final double quote of any raw string literal are reverted.

3) Each comment is replaced by one space character.

***Phase - 4***

1) The preprocessor is executed. If a universal character name is formed by token concatenation, the behavior is undefined.

2) Each file introduced with the #include directive goes through phases 1 through 4, recursively.

3) At the end of this phase, all preprocessor directives are removed from the source.

***Phase - 5***

1) All characters in character literals and string literals are converted from the source character set to the encoding (which may be a multibyte character encoding such as UTF-8, as long as the 96 characters of the basic character set have single-byte representations).

2) Escape sequences and universal character names in character literals and non-raw string literals are expanded and converted to the literal encoding. If the character specified by a universal character name cannot be encoded as a single code point in the corresponding literal encoding, the result is implementation-defined, but is guaranteed not to be a null (wide) character.

> *Note:* The conversion performed at this stage can be controlled by command line options in some implementations: gcc and clang use -finput-charset to specify the encoding of the source character set, -fexec-charset and -fwide-exec-charset to specify the ordinary and wide literal encodings respectively, while Visual Studio 2015 Update 2 and later uses /source-charset and /execution-charset to specify the source character set and literal encoding respectively.

***Phase - 6***

Adjacent string literals are concatenated.

***Phase - 7***

Compilation takes place: each preprocessing token is converted to a token. The tokens are syntactically and semantically analyzed and translated as a translation unit.

***Phase - 8***

Each translation unit is examined to produce a list of required template instantiations, including the ones requested by explicit instantiations. The definitions of the templates are located, and the required instantiations are performed to produce instantiation units.

***Phase - 9***

Translation units, instantiation units, and library components needed to satisfy external references are collected into a program image which contains information needed for execution in its execution environment.

> ***Note:*** Some compilers don't implement instantiation units (also known as template repositories or template registries) and simply compile each template instantiation at phase 7, storing the code in the object file where it is implicitly or explicitly requested, and then the linker collapses these compiled instantiations into one at phase 9.

---

## Preprocessor Directives

When the preprocessor runs, it scans through the code file (from top to bottom), looking for preprocessor directives. Preprocessor directives (often just called directives) are instructions that start with a # symbol and end with a newline (NOT a semicolon). These directives tell the preprocessor to perform certain text manipulation tasks.

> ***Note:*** The preprocessor does not understand C++ syntax --instead, the directives have their own syntax (which in some cases resembles C++ syntax, and in other cases, not so much).

`#include`: Since it is discussed earlier in [Header Files](/HeaderFiles/HeaderFile.md) Section, skipping the part here.

### Macro Defines

The `#define` directive can be used to create a macro. In C++, a macro is a rule that defines how input text is converted into replacement output text.

There are two types of macros:

- Object like Macros
- Function like Macros

*Function like Macros:*

macros act like functions, and serve a similar purpose. We will not discuss them here, because their use is generally considered dangerous, and almost anything they can do can be done by a normal function.

*Object like macros:*

Object like macros can be defined in one of two ways.

-With substitution-text

```C++
#define identifier
```

-Without substitution-text

```C++
#define identifier substitution_text
```

#### Object like macros with substitution text

When the preprocessor encounters this directive, any further occurrence of the identifier is replaced by substitution_text. The identifier is traditionally typed in all capital letters, using underscores to represent spaces.

Consider the following program:

```C++
#include <iostream>

#define MY_NAME "Alex"

int main()
{
    std::cout << "My name is: " << MY_NAME << '\n';

    return 0;
}
```

The preprocessor converts the above into the following:

```C++
// The contents of iostream are inserted here

int main()
{
    std::cout << "My name is: " << "Alex" << '\n';

    return 0;
}
```

Output:

```txt
My name is: Alex
```

Object-like macros with substitution text were used (in C) as a way to assign names to literals. This is no longer necessary, as better methods are available in C++. Object-like macros with substitution text should generally now only be seen in legacy code.

### Object-like macros without substitution text

Object-like macros can also be defined without substitution text.

```C++
#define USE_YEN
```

Macros of this form work like you might expect: any further occurrence of the identifier is removed and replaced by nothing!

This might seem pretty useless, and it is useless for doing text substitution. However, that’s not what this form of the directive is generally used for. We’ll discuss the uses of this form in just a moment.

Unlike object-like macros with substitution text, macros of this form are generally considered acceptable to use.

### Conditional Compilation

The conditional compilation preprocessor directives allow you to specify under what conditions something will or won’t compile.

There are diffrent conditional compilation directives but only three will be covered here:

- `#ifdef`
- `ifindef`
- `#endif`

#### `#ifdef`

It allows the preprocessor to check whether an identifier has been previously #defined. If so, the code between the #ifdef and matching #endif is compiled. If not, the code is ignored.

```C++
#include <iostream>

#define PRINT_JOE

int main()
{
#ifdef PRINT_JOE
    std::cout << "Joe\n"; // will be compiled since PRINT_JOE is defined
#endif

#ifdef PRINT_BOB
    std::cout << "Bob\n"; // will be excluded since PRINT_BOB is not defined
#endif

    return 0;
}
```

Because `PRINT_JOE` has been `#defined`, the line `std::cout << "Joe\n";` will be compiled.

But, Because `PRINT_BOB` has not been `#defined`, the line `std::cout << "Bob\n";` will be ignored.

> In some IDE's/ Text Editors like VS Code you can see some changes like faded code in case if the code section will not executed.

#### `#ifndef`

The opposite of #ifdef, in that it allows you to check whether an identifier has NOT been #defined yet.

```C++
#include <iostream>

int main()
{
#ifndef PRINT_BOB
    std::cout << "Bob\n";
#endif

    return 0;
}
```

This program prints `“Bob”`, because `PRINT_BOB` was never `#defined`.

In place of `#ifdef PRINT_BOB` and `#ifndef PRINT_BOB`, you’ll also see `#if defined(PRINT_BOB)` and `#if !defined(PRINT_BOB)`. These do the same, Just diffrent C++-style syntax.

#### The `#if 0`

One more common use of conditional compilation involves using #if 0 to exclude a block of code from being compiled (as if it were inside a comment block):

```C++
#include <iostream>

int main()
{
    std::cout << "Joe\n";

#if 0 // Don't compile anything starting here
    std::cout << "Bob\n";
    std::cout << "Steve\n";
#endif // until this point

    return 0;
}
```

The above code only prints “Joe”, because “Bob” and “Steve” were inside an #if 0 block that the preprocessor will exclude from compilation.

> This also provides a convenient way to “comment out” code that contains multi-line comments (which can’t be commented out using another multi-line comment due to multi-line comments being non-nestable):

***Also:*** *Object-like macros don’t affect other preprocessor directives*

#### The Scope of `#define`

Directives are resolved before compilation, from top to bottom on a file-by-file basis.

Once the preprocessor has finished, all defined identifiers from that file are discarded. This means that directives are only valid from the point of definition to the end of the file in which they are defined. Directives defined in one code file do not have impact on other code files in the same project.

For Example,

```C++
#include <iostream>

void foo()
{
#define MY_NAME "Alex"
}

int main()
{
    std::cout << "My name is: " << MY_NAME << '\n';

    return 0;
}
```

Even though it looks like `#define MY_NAME “Alex”` is defined inside function `foo`, the preprocessor won’t notice, as it doesn’t understand C++ concepts like functions. Therefore, this program behaves identically to one where `#define MY_NAME “Alex”` was defined either before or immediately after function `foo`. For general readability, you’ll generally want to `#define` identifiers outside of functions.

Consider the follwoing Example:

***Function.cpp***

```C++
#include <iostream>

void doSomething()
{
#ifdef PRINT
    std::cout << "Printing!\n";
#endif
#ifndef PRINT
    std::cout << "Not printing!\n";
#endif
}
```

***main.cpp***

```C++
void doSomething(); // forward declaration for function doSomething()

#define PRINT

int main()
{
    doSomething();

    return 0;
}
```

***Output:***

```txt
Not printing!
```

Even though `PRINT` was defined in 'main.cpp', that doesn’t have any impact on any of the code in 'function.cpp' (`PRINT` is only `#defined` from the point of definition to the end of main.cpp).
.
