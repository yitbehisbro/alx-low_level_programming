<h2>Resources</h2>

<h3>Read or watch</h3>
<ul>
<li><a href="https://alx-intranet.hbtn.io/rltoken/PVi2XMuApOK3jfhsoqsyXw">C - Arrays</a></li>
<li><a href="https://alx-intranet.hbtn.io/rltoken/oyHybzYBeFiLUMALpb_usA">C - Pointer</a></li>
<li><a href="https://alx-intranet.hbtn.io/rltoken/sUeh9qDyW9pePOfJIpx_Bw">C - String</a></li>
<li><a href="https://alx-intranet.hbtn.io/rltoken/0k6CD2ZMzSFOMUxMOBiAlQ">Memory Layout</a></li>
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
<p> <b> 0. Write a function that concatenates two strings.</b></p>
<p> <b> 1. Write a function that concatenates two strings.</b></p>
<p> <b>  2. Write a function that copies a string.</b></p>
<p> <b>  3. Write a function that compares two strings.</b></p>
<p> <b>  4. Write a function that reverses the content of an array of integers.</b></p>
<p> <b>  5. Write a function that changes all lowercase letters of a string to uppercase.</b></p>
<p> <b>  6. Write a function that capitalizes all words of a string.</b></p>
<p> <b>  7. Write a function that encodes a string into 1337.</b></p>
<p> <b>  8. Write a function that encodes a string using rot13.</b></p>
<p> <b>  9. Write a function that prints an integer.</b></p>
<p> <b>  10. Add one line to this code, so that the program prints a[2] = 98, followed by a new line.

- You are not allowed to use the variable a in your new line of code
- You are not allowed to modify the variable p
- You can only write one statement
- You are not allowed to use ,
- You are not allowed to code anything else than the line of expected line of code at the expected line
- Your code should be written at line 19, before the ;
- Do not remove anything from the initial code (not even the comments)
- and don’t change anything but the line of code you are adding (don’t change the spaces to tabs!)
- You are allowed to use the standard library</b></p>
<p> <b>  11. Write a function that adds two numbers.

- Prototype: char *infinite_add(char *n1, char *n2, char *r, int size_r);
- Where n1 and n2 are the two numbers
- r is the buffer that the function will use to store the result
- size_r is the buffer size
- The function returns a pointer to the result
- You can assume that you will always get positive numbers, or 0
- You can assume that there will be only digits in the strings n1 and n2
- n1 and n2 will never be empty
- If the result can not be stored in r the function must return 0</b></p>
<p> <b>  12. Write a function that prints a buffer.

- Prototype: void print_buffer(char *b, int size);
- The function must print the content of size bytes of the buffer pointed by b
- The output should print 10 bytes per line
- Each line starts with the position of the first byte of the line in hexadecimal (8 chars), starting with 0
- Each line shows the hexadecimal content (2 chars) of the buffer, 2 bytes at a time, separated by a space
- Each line shows the content of the buffer. If the byte is a printable character, print the letter, if not, print .
- Each line ends with a new line \n
- If size is 0 or less, the output should be a new line only \n
- You are allowed to use the standard library
- The output should look like the following example, and formatted exactly the same way:</b></p>
