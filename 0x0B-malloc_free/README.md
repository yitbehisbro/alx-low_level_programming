<h3>General</h3>
<ul>
<li>Allowed editors: <code>vi</code>, <code>vim</code>, <code>emacs</code></li>
<li>All your files will be compiled on Ubuntu 20.04 LTS using <code>gcc</code>, using the options <code>-Wall -Werror -Wextra -pedantic -std=gnu89</code></li>
<li>All your files should end with a new line</li>
<li>A <code>README.md</code> file, at the root of the folder of the project is mandatory</li>
<li>Your code should use the <code>Betty</code> style. It will be checked using <a href="https://github.com/holbertonschool/Betty/blob/master/betty-style.pl" title="betty-style.pl" target="_blank">betty-style.pl</a> and <a href="https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl" title="betty-doc.pl" target="_blank">betty-doc.pl</a></li>
<li>You are not allowed to use global variables</li>
<li>No more than 5 functions per file</li>
<li>The only C standard library functions allowed are <code>malloc</code> and <code>free</code>. Any use of functions like <code>printf</code>, <code>puts</code>, <code>calloc</code>, <code>realloc</code> etc… is forbidden</li>
<li>You are allowed to use <a href="https://github.com/holbertonschool/_putchar.c/blob/master/_putchar.c" title="_putchar" target="_blank">_putchar</a></li>
<li>You don’t have to push <code>_putchar.c</code>, we will use our file. If you do it won’t be taken into account</li>
<li>In the following examples, the <code>main.c</code> files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own <code>main.c</code> files at compilation. Our <code>main.c</code> files might be different from the one shown in the examples</li>
<li>The prototypes of all your functions and the prototype of the function <code>_putchar</code> should be included in your header file called <code>main.h</code></li>
<li>Don’t forget to push your header file</li>
</ul>
<h3>Tasks</h3>
<p>0. Write a function that creates an array of chars, and initializes it with a specific char.</p>

<ul>
<li>Prototype: <code>char *create_array(unsigned int size, char c);</code></li>
<li>Returns <code>NULL</code> if size = <code>0</code></li>
<li>Returns a pointer to the array, or <code>NULL</code> if it fails</li>
</ul>
<p>1. Write a function that returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.</p>

<ul>
<li>Prototype: <code>char *_strdup(char *str);</code></li>
<li>The <code>_strdup()</code> function returns a pointer to a new string which is a duplicate of the string <code>str</code>.  Memory for the new string is obtained with <code>malloc</code>, and can be freed with <code>free</code>.</li>
<li>Returns <code>NULL</code> if str = NULL</li>
<li>On success, the <code>_strdup</code> function returns a pointer to the duplicated string.  It returns <code>NULL</code> if insufficient memory was available</li>
</ul>

<p>FYI: The standard library provides a similar function: <code>strdup</code>. Run <code>man strdup</code> to learn more.</p>
<p>2. Write a function that concatenates two strings.</p>

<ul>
<li>Prototype: <code>char *str_concat(char *s1, char *s2);</code></li>
<li>The returned pointer should point to a newly allocated space in memory which contains the contents of <code>s1</code>, followed by the contents of <code>s2</code>, and null terminated</li>
<li>if <code>NULL</code> is passed, treat it as an empty string</li>
<li>The function should return <code>NULL</code> on failure</li>
</ul>
<p>3. Write a function that returns a pointer to a 2 dimensional array of integers.</p>

<ul>
<li>Prototype: <code>int **alloc_grid(int width, int height);</code></li>
<li>Each element of the grid should be initialized to <code>0</code></li>
<li>The function should return <code>NULL</code> on failure</li>
<li>If <code>width</code> or <code>height</code> is <code>0</code> or negative, return <code>NULL</code></li>
</ul>
 <p>4. Write a function that frees a 2 dimensional grid previously created by your <code>alloc_grid</code> function.</p>

<ul>
<li>Prototype: <code>void free_grid(int **grid, int height);</code></li>
<li>Note that we will compile with your <code>alloc_grid.c</code> file. Make sure it compiles.</li>
</ul>
 <p>5. Write a function that concatenates all the arguments of your program.</p>

<ul>
<li>Prototype: <code>char *argstostr(int ac, char **av);</code></li>
<li>Returns <code>NULL</code> if <code>ac == 0</code> or <code>av == NULL</code></li>
<li>Returns a pointer to a new string, or <code>NULL</code> if it fails</li>
<li>Each argument should be followed by a <code>\n</code> in the new string</li>
</ul>
<p>6. Write a function that splits a string into words.</p>

<ul>
<li>Prototype: <code>char **strtow(char *str);</code></li>
<li>The function returns a pointer to an array of strings (words)</li>
<li>Each element of this array should contain a single word, null-terminated</li>
<li>The last element of the returned array should be <code>NULL</code></li>
<li>Words are separated by spaces</li>
<li>Returns <code>NULL</code> if <code>str == NULL</code> or <code>str == ""</code></li>
<li>If your function fails, it should return <code>NULL</code></li>
</ul>
