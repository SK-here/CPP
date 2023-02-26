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

    2) Any source file character that cannot be mapped to a charcter
    in the basic source character set  is replaced by it's universal
    charcter name (escaped with `\u` or `\U`).

    3) Trigrapgh sequences are replaced by corresponding single charcter representation.

See Also:
[Basic Source Character Set.](URL "https://en.cppreference.com/w/cpp/language/translation_phases") and [Universal Character Name](https://en.cppreference.com/w/cpp/language/escape)

***Phase - 2***

    1) 
.
.
.
