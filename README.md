Introduction to C language :-

Chapter - 1 :-

Variables :- Variables are names of the memory location where the data is stored
Ex:- int a = 10;
here 10 is stored in 4 bytes in memory location. a is the name of that memory location. Even though the compiler doesn't throw any error when given random names for certain functionality, it's always a better practice to give them meaningful names.

Variable Rules :- 
. variable should not start with a number or special character other than _ 
. variable should not be a keyword
. variable should not have spaces or any special characters other than _ 

Datatypes :-
Datatypes specify what kind of data should be stored in a variable.

Types and Sizes of Datatypes:-
Signed -> + , -
Unsigned -> +
Char(signed,unsigned) -> 1 byte (allows only single characters so '')
Bool -> 1 byte  -> allows only 0 or 1 (true or false)
Int (unsigned , signed) -> 2 or 4 bytes (unsigned allows only whole numbers where signed allows integer values)
Float -> 4 bytes  -> (allows long floating point values upto 8 digits)
Double -> 8 bytes   -> (allows upto 16 digits )
Long Double -> 10 bytes -> ( allows even more than double 10 to 16 bytes depending on the compiler)

Constants :-
Constants are those values which doesn't change
Ex:- const float PI = 3.14;
now the value of PI doesn't changes throughout the program

Keywords :-
Keywords are predefined values in a programming language. C has 32 keywords
Ex:- 'if' has a particular means like to check the condition

Comments :-
compiler doesn't compiles what was inside the comments. They are just used for reference

//  used for single line 
/*
Multi 
line 
comments
*/

Compilation:-
convertion of high level language to machine level language
Ex:- Suppose when hello.c is compiled as gcc hello.c -o hello, here name is given so the compiler will convert it into hello.exe for windows or hello.out for linux or Mac 
If its simply compiled as gcc hello.c then machine level file will be a.exe or a.out which is default one.
gcc is a GNU compiler
so the command means compile the hello.c file and output hello executable file

User Input :-
It prompts the user to enter the input
scanf("%d", &variable);







