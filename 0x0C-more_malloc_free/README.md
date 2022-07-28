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
<p>0. Write a function that allocates memory using <code>malloc</code>.</p>

<ul>
<li>Prototype: <code>void *malloc_checked(unsigned int b);</code></li>
<li>Returns a pointer to the allocated memory</li>
<li>if <code>malloc</code> fails, the <code>malloc_checked</code> function should cause normal process termination with a status value of <code>98</code></li>
</ul>
<p>1. Write a function that concatenates two strings.</p>

<ul>
<li>Prototype: <code>char *string_nconcat(char *s1, char *s2, unsigned int n);</code></li>
<li>The returned pointer shall point to a newly allocated space in memory, which contains <code>s1</code>, followed by the first <code>n</code> bytes of <code>s2</code>, and null terminated</li>
<li>If the function fails, it should return <code>NULL</code></li>
<li>If <code>n</code> is greater or equal to the length of <code>s2</code> then use the entire string <code>s2</code></li>
<li>if <code>NULL</code> is passed, treat it as an empty string</li>
</ul>
<p>2. Write a function that allocates memory for an array, using <code>malloc</code>.</p>

<ul>
<li>Prototype: <code>void *_calloc(unsigned int nmemb, unsigned int size);</code></li>
<li>The <code>_calloc</code> function allocates memory for an array of <code>nmemb</code> elements of <code>size</code> bytes each and returns a pointer to the allocated memory.</li>
<li>The memory is set to zero</li>
<li>If <code>nmemb</code> or <code>size</code> is <code>0</code>, then <code>_calloc</code> returns <code>NULL</code></li>
<li>If <code>malloc</code> fails, then <code>_calloc</code> returns <code>NULL</code></li>
</ul>

<p>FYI: The standard library provides a different function: <code>calloc</code>. Run <code>man calloc</code> to learn more.</p>
<p>3. Write a function that creates an array of integers.</p>

<ul>
<li>Prototype: <code>int *array_range(int min, int max);</code></li>
<li>The array created should contain all the values from <code>min</code> (included) to <code>max</code> (included), ordered from <code>min</code> to <code>max</code></li>
<li>Return: the pointer to the newly created array</li>
<li>If <code>min</code> &gt; <code>max</code>, return <code>NULL</code></li>
<li>If <code>malloc</code> fails, return <code>NULL</code></li>
</ul>
<p>4. Write a function that reallocates a memory block using <code>malloc</code> and <code>free</code></p>

<ul>
<li>Prototype: <code>void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);</code></li>
<li>where <code>ptr</code> is a pointer to the memory previously allocated with a call to <code>malloc</code>: <code>malloc(old_size)</code></li>
<li><code>old_size</code> is the size, in bytes, of the allocated space for <code>ptr</code></li>
<li>and <code>new_size</code> is the new size, in bytes of the new memory block</li>
<li>The contents will be copied to the newly allocated space, in the range from the start of <code>ptr</code> up to the minimum of the old and new sizes</li>
<li>If <code>new_size</code> &gt; <code>old_size</code>, the “added” memory should not be initialized</li>
<li>If <code>new_size</code> == <code>old_size</code> do not do anything and return <code>ptr</code></li>
<li>If <code>ptr</code> is <code>NULL</code>, then the call is equivalent to <code>malloc(new_size)</code>, for all values of <code>old_size</code> and <code>new_size</code></li>
<li>If <code>new_size</code> is equal to zero, and <code>ptr</code> is not <code>NULL</code>, then the call is equivalent to <code>free(ptr)</code>. Return <code>NULL</code></li>
<li>Don’t forget to free <code>ptr</code> when it makes sense</li>
</ul>

<p>FYI: The standard library provides a different function: <code>realloc</code>. Run <code>man realloc</code> to learn more.</p>
<p>5. Write a program that multiplies two positive numbers.</p>

<ul>
<li>Usage: <code>mul num1 num2</code></li>
<li><code>num1</code> and <code>num2</code> will be passed in base 10</li>
<li>Print the result, followed by a new line</li>
<li>If the number of arguments is incorrect, print <code>Error</code>, followed by a new line, and exit with a status of <code>98</code></li>
<li><code>num1</code> and <code>num2</code> should only be composed of digits. If not, print <code>Error</code>, followed by a new line, and exit with a status of <code>98</code></li>
<li>You are allowed to use more than 5 functions in your file</li>
</ul>

<p>You can use <code>bc</code> (<code>man bc</code>) to check your results.</p>

