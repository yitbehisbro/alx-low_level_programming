<p><b>0. Multiple mains</b></p>
<p>In most projects, we often give you only one main file to test with. For example, this main file is a test for a <code>postitive_or_negative()</code> function similar to the one you worked with in <a href="https://github.com/yitbehisbro/alx-low_level_programming/blob/master/0x01-variables_if_else_while/0-positive_or_negative.c" title="an earlier C project" target="_blank">an earlier C project</a>:</p>
<pre><code>carrie@ubuntu:/debugging$ cat main.c
<p>#include "main.h"</p>

<p>/**
* main - tests function that prints if integer is positive or negative
* Return: 0
*/</p>
int main(void)
{
        int i;

        i = 98;
        positive_or_negative(i);

        return (0);
}
carrie@ubuntu:/debugging$
</code></pre>
<pre><code>carrie@ubuntu:/debugging$ cat main.h
#ifndef MAIN_H
#define MAIN_H

#include &lt;stdio.h&gt;

void positive_or_negative(int i);

#endif /* MAIN_H */
carrie@ubuntu:/debugging$ 
</code></pre>
<pre><code>carrie@ubuntu:/debugging$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 positive_or_negative.c main.c
carrie@ubuntu:/debugging$ ./a.out
98 is positive
carrie@ubuntu:/debugging$
</code></pre>
<p>Based on the <code>main.c</code> file above, create a file named <code>0-main.c</code>. This file must test that the function <code>positive_or_negative()</code> gives the correct output when given a case of <code>0</code>.</p>
<p>You are not coding the solution / function, you’re just testing it! However, you can adapt your function from <a href="https://github.com/yitbehisbro/alx-low_level_programming/blob/master/0x01-variables_if_else_while/0-positive_or_negative.c" title="0x01. C - Variables, if, else, while - Task #0" target="_blank">0x01. C - Variables, if, else, while - Task #0</a> to compile with this main file to test locally.</p>
<ul>
<li>You only need to upload <code>0-main.c</code> and <code>main.h</code> for this task. We will provide our own <code>positive_or_negative()</code> function.</li>
<li>You are not allowed to add or remove lines of code, you may change only <strong>one</strong> line in this task.</li>
</ul>
<pre><code>carrie@ubuntu:/debugging$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 positive_or_negative.c 0-main.c -o 0-main
carrie@ubuntu:/debugging$ ./0-main
0 is zero
carrie@ubuntu:/debugging$ wc -l 0-main.c
16 1-main.c
carrie@ubuntu:/debugging$ 
</code></pre>
<p><strong>Repo:</strong></p>
        <ul>
          <li>GitHub repository: <code>alx-low_level_programming</code></li>
            <li>Directory: <code>0x03-debugging</code></li>
            <li>File: <code>0-main.c, main.h</code></li>
        </ul>
<p><b>1. Copy this main file. Comment out (don’t delete it!) the part of the code that is causing the output to go into an infinite loop.</b></p>
<ul>
<li>Don’t add or remove any lines of code, as we will be checking your line count. You are only allowed to comment out existing code.</li>
<li>You do not have to compile with -Wall -Werror -Wextra -pedantic for this task.</li>
</ul>
<p>2. This program prints the largest of three integers.</p>
<p>3. This program converts a date to the day of year and determines how many days are left in the year, taking leap year into consideration.</p>
