
<h2>Resources</h2>

<h3>Read or watch</h3>
<ul>
<li><a href="https://alx-intranet.hbtn.io/rltoken/_4aLZ5nW24njUT2VbSZdQQ">Nested while loops</a></li>
<li><a href="https://alx-intranet.hbtn.io/rltoken/Vg1zzzrxLhPh71405uggSg">C - Functions</a></li>
<li><a href="https://alx-intranet.hbtn.io/rltoken/jveXtnJII2S0z7a06c7-JA">Learning to Program in C (Part 06) (stop at 14:00)</a></li>
<li><a href="https://alx-intranet.hbtn.io/rltoken/XZ--UJZO76ZoUWNA9bTmbg">What is the purpose of a function prototype?</a></li>
<li><a href="https://alx-intranet.hbtn.io/rltoken/AS8JW4ObD5gmyX2mgtqV0A">C - Header Files (stop before the “Once-Only Headers” paragraph)</a></li>
</ul>
<h2>Requirements</h2>
<h3>General</h3>
<ul>
<li>Allowed editors: vi, vim, emacs</li>
<li>All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89</li>
<li>All your files should end with a new line</li>
<li>A README.md file, at the root of the folder of the project is mandatory</li>
<li>Your code should use the Betty style. It will be checked using <a href="https://github.com/holbertonschool/Betty/blob/master/betty-style.pl">betty-style.pl</a> and <a href="https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl">betty-doc.pl<a/a></li>
<li>You are not allowed to use global variables</li>
<li>No more than 5 functions per file</li>
<li>You are not allowed to use the standard library. Any use of functions like printf, puts, etc… is forbidden</li>
<li>You are allowed to use _putchar</li>
<li>You don’t have to push <a href="https://github.com/holbertonschool/_putchar.c/blob/master/_putchar.c">_putchar.c</a>, we will use our file. If you do it won’t be taken into account</li>
<li>In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples</li>
<li>The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called main.h</li>
<li>Don’t forget to push your header file</li>
</ul>
<h2>Tasks</h2>
0. Write a program that prints _putchar, followed by a new line.
<ul><li>The program should return 0</li></ul>
1. Write a function that prints the alphabet, in lowercase, followed by a new line.
<ul>
<li>Prototype: void print_alphabet(void);</li>
<li>You can only use _putchar twice in your code</li>
</ul>
2. Write a function that prints 10 times the alphabet, in lowercase, followed by a new line.
<ul>
<li>Prototype: void print_alphabet_x10(void);</li>
<li>You can only use _putchar twice in your code</li>
</ul>
3. Write a function that checks for lowercase character.
<ul>
<li>Prototype: int _islower(int c);</li>
<li>Returns 1 if c is lowercase</li>
<li>Returns 0 otherwise</li>
</ul>
FYI: The standard library provides a similar function: islower. Run man islower to learn more.<br/>
4. Write a function that checks for alphabetic character.
<ul>
<li>Prototype: int _isalpha(int c);</li>
<li>Returns 1 if c is a letter, lowercase or uppercase</li>
<li>Returns 0 otherwise</li>
</ul>
FYI: The standard library provides a similar function: isalpha. Run man isalpha to learn more.<br/>
5. Write a function that prints the sign of a number.
<ul>
<li>Prototype: int print_sign(int n);</li>
<li>Returns 1 and prints + if n is greater than zero</li>
<li>Returns 0 and prints 0 if n is zero</li>
<li>Returns -1 and prints - if n is less than zero</li>
</ul>
6. Write a function that computes the absolute value of an integer.
<ul><li>Prototype: int _abs(int);</li></ul>
FYI: The standard library provides a similar function: abs. Run man abs to learn more.<br/>
7. Write a function that prints the last digit of a number.
<ul>
<li>Prototype: int print_last_digit(int);</li>
<li>Returns the value of the last digit</li>
</ul>
8. Write a function that prints every minute of the day of Jack Bauer, starting from 00:00 to 23:59.
<ul>
<li>Prototype: void jack_bauer(void);</li>
<li>You can listen to this soundtrack while coding :)</li>
</ul>
9. Write a function that prints the 9 times table, starting with 0.
<ul>
<li>Prototype: void times_table(void);</li>
<li>Format: see example</li>
</ul>
10. Write a function that adds two integers and returns the result.
<ul><li>Prototype: int add(int, int);</li></ul>
11. Write a function that prints all natural numbers from n to 98, followed by a new line.
<ul>
<li>Prototype: void print_to_98(int n);</li>
<li><li>Numbers must be separated by a comma, followed by a space</li>
<li>Numbers should be printed in order</li>
<li>The first printed number should be the number passed to your function</li>
<li>The last printed number should be 98</li>
<li>You are allowed to use the standard library</li>
</ul>
12. Write a function that prints the n times table, starting with 0.
<ul>
<li>Prototype: void print_times_table(int n);</li>
<li>If n is greater than 15 or less than 0 the function should not print anything</li>
</ul>
Format: see example<br/>
13. If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23. Write a program that computes and prints the sum of all the multiples of 3 or 5 below 1024 (excluded), followed by a new line.<br/>
<ul>
<li>You are allowed to use the standard library</li>
</ul>
14. Write a program that prints the first 50 Fibonacci numbers, starting with 1 and 2, followed by a new line.
<ul>
<li>The numbers must be separated by comma, followed by a space ,</li>
<li>You are allowed to use the standard library</li>
</ul>
15. Each new term in the Fibonacci sequence is generated by adding the previous two terms. By starting with 1 and 2, the first 10 terms will be: 1, 2, 3, 5, 8, 13, 21, 34, 55, 89. By considering the terms in the Fibonacci sequence whose values do not exceed 4,000,000, write a program that finds and prints the sum of the even-valued terms, followed by a new line.
<ul>
<li>You are allowed to use the standard library</li>
</ul>
16. Write a program that finds and prints the first 98 Fibonacci numbers, starting with 1 and 2, followed by a new line.
<ul>
<li>The numbers should be separated by comma, followed by a space ,</li>
<li>You are allowed to use the standard library</li>
<li>You are not allowed to use any other library (You can’t use GMP etc…)</li>
<li>You are not allowed to use long long, malloc, pointers, arrays/tables, or structures</li>
<li>You are not allowed to hard code any Fibonacci number (except for 1 and 2)</li>
</ul>
