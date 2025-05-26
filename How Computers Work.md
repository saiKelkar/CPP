![[Pasted image 20250525085030.png]]

CPU -- Central Processing Unit (heart of the computer, e.g., i3, i7, etc.)
ALU -- Arithmetic Logic Unit (basic operations like +, %, etc., compare quantities >, <, >=, AND, OR, NOT, etc.)
CU -- Control Unit

Hard Disk contains files:
- Program files -- like notepad.exe, audio / video player
- Data files -- files that we write my_note.txt

If we want to work with some files:
brought from files -- to main memory (working memory) -- CPU executes the user instructions line by line by working on the program

If program needs any data -- it gets from input devices via the input buffer:
input device -- input buffer -- the data required by the program to work

If program needs to display something -- it gives output to the output devices via the output buffer:
program to display something -- output buffer -- output device

Low voltage is 0 and high voltage is 1
Language of computers is binary
Binary = {0, 1}
Octal = {0, 1, 2, 3, 4, 5, 6, 7}
Decimal = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}
Hexadecimal = {0, 1, 2, ,3, 4, 5, 6, 7, 8, 9, A, B, C, D, E, F}

Basic conversion from Decimal to Binary:
25(base 10)

`_(32th place) _(16th place) _(8th place) _(4th place) _(2nd place) _(1st place)
0 1 1 0 0 1 (base 2)`

Basic conversion from Binary to Decimal:
011001(base 2)
$2^5 * 0 + 2^4 * 1 + 2^3 * 1 + 2^2 * 0 + 2^1 * 0 + 2^0 * 1$

Program -- collection of data and set of operations to work on the data
Computers -- used to perform computational tasks (those done using pen and paper)

Programmer (natural language) --> High-level Language (C++, Python, Java, etc.) --> Assembly Language (used for conversion from high-level to machine language) --> CPU / Computer (uses machine language - which is a low level binary code)

Programs are also called source code

check errors --> convert to machine code --> Execution of the program

Compiler Based Languages: (C++)
Compilers job is to convert source code into machine code
e.g., first.cpp (source code) -- first.exe (machine code)
Faster compared to Interpreter as they produce separate files

Interpreter Based Languages: (JavaScript)
Interpreter takes the responsibility of Execution of the program
Chrome works as an interpreter for JavaScript
Translates code line by line -- Convert into machine code -- Code will be executed
Interpreter Languages are easier to write compared to Compiler-based languages

Hybrid Languages: (Java or C#)
Compiler converts the source code into Byte code (after checking for errors) -- using JVM (acts as an interpreter) producing machine code

Operating systems: (Windows, Linux, Mac OSX)
Master program (operating system is also a program) -- utilizing all the resources of the computer system and provide service to the user
(resources could be accessing internet, accessing files, etc.)
When we want to work on some program -- in the presence of OS, the program is brought into the main memory -- and CPU works on it
If the program wants to interact with peripherals (such as monitor, or keyboard) -- it has to ask the OS for the access first (called System calls or API)