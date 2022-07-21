<h2>Resources</h2>

<p><strong>Read or watch</strong>:</p>

<ul>
<li><a href="https://alx-intranet.hbtn.io/rltoken/XB1iH0qE6gshx0x8TfRAPQ" title="What Is A &quot;C&quot; Library? What Is It Good For?" target="_blank">What Is A “C” Library? What Is It Good For?</a> </li>
<li><a href="https://alx-intranet.hbtn.io/rltoken/XB1iH0qE6gshx0x8TfRAPQ" title="Creating A Static &quot;C&quot; Library Using &quot;ar&quot; and &quot;ranlib&quot;" target="_blank">Creating A Static “C” Library Using “ar” and “ranlib”</a> </li>
<li><a href="https://alx-intranet.hbtn.io/rltoken/XB1iH0qE6gshx0x8TfRAPQ" title="Using A &quot;C&quot; Library In A Program" target="_blank">Using A “C” Library In A Program</a> </li>
<li><a href="https://alx-intranet.hbtn.io/rltoken/PexOGO-npR_ZDQk-SpOR9g" title="What is difference between Dynamic and Static library(Static and Dynamic linking)" target="_blank">What is difference between Dynamic and Static library(Static and Dynamic linking)</a> (<em>stop at 4:44</em>)</li>
</ul>

<p><strong>man or help</strong>:</p>

<ul>
<li><code>ar</code></li>
<li><code>ranlib</code></li>
<li><code>nm</code></li>
</ul>

<h2>Learning Objectives</h2>

<p>At the end of this project, you are expected to be able to <a href="https://alx-intranet.hbtn.io/rltoken/dkyFVPYqNQb2pkuknMb9Sw" title="explain to anyone" target="_blank">explain to anyone</a>, <strong>without the help of Google</strong>:</p>
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
<li>You are not allowed to use static variables</li>
</ul>
  <h3>Bash</h3>
  <ul>
<li>Allowed editors: <code>vi</code>, <code>vim</code>, <code>emacs</code></li>
<li>All your scripts will be tested on Ubuntu 20.04 LTS</li>
<li>All your files should end with a new line (<a href="http://unix.stackexchange.com/questions/18743/whats-the-point-in-adding-a-new-line-to-the-end-of-a-file/18789">why?</a>)</li>
<li>The first line of all your files should be exactly <code>#!/bin/bash</code></li>
<li>A <code>README.md</code> file, at the root of the folder of the project, describing what each script is doing</li>
<li>All your files must be executable</li>
</ul>
  
<h2>Tasks</h2>
  <p><b>0. Create the static library <code>libmy.a</code> containing all the functions listed below:</b>
  <pre><code>int _putchar(char c);
int _islower(int c);
int _isalpha(int c);
int _abs(int n);
int _isupper(int c);
int _isdigit(int c);
int _strlen(char *s);
void _puts(char *s);
char *_strcpy(char *dest, char *src);
int _atoi(char *s);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
</code></pre></p>
  <p>If you haven’t coded all of the above functions create empty ones with the right prototype.<br>
Don’t forget to push your <code>main.h</code> file to your repository. It should at least contain all the prototypes of the above functions.</p>
<p><b>1. Create a script called <code>create_static_lib.sh</code> that creates a static library called <code>liball.a</code> from all the <code>.c</code> files that are in the current directory.</b></p>
<pre><code>julien@ubuntu:~/0x09. Static Librairies$ ls *.c
0-isupper.c  0-strcat.c  1-isdigit.c  1-strncat.c  2-strlen.c   3-islower.c  3-strcmp.c  4-isalpha.c  5-strstr.c  9-strcpy.c  _putchar.c
0-memset.c   100-atoi.c  1-memcpy.c   2-strchr.c   2-strncpy.c  3-puts.c     3-strspn.c  4-strpbrk.c  6-abs.c
julien@ubuntu:~/0x09. Static Librairies$ ./create_static_lib.sh 
julien@ubuntu:~/0x09. Static Librairies$ ls *.a
liball.a
julien@ubuntu:~/0x09. Static Librairies$ ar -t liball.a
0-isupper.o
0-memset.o
0-strcat.o
100-atoi.o
1-isdigit.o
1-memcpy.o
1-strncat.o
2-strchr.o
2-strlen.o
2-strncpy.o
3-islower.o
3-puts.o
3-strcmp.o
3-strspn.o
4-isalpha.o
4-strpbrk.o
5-strstr.o
6-abs.o
9-strcpy.o
_putchar.o
julien@ubuntu:~/0x09. Static Librairies$ 
</code></pre>
<hr />
