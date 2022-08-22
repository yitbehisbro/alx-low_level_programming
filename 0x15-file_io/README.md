<h1>0x15. C - File I/O</h1>
<h2>Requirements</h2>

<h3>General</h3>
<ul>
<li>Allowed editors: <code>vi</code>, <code>vim</code>, <code>emacs</code></li>
<li>All your files will be compiled on Ubuntu 20.04 LTS using <code>gcc</code>, using the options <code>-Wall -Werror -Wextra -pedantic -std=gnu89</code></li>
<li>All your files should end with a new line</li>
<li>A <code>README.md</code> file, at the root of the folder of the project is mandatory</li>
<li>Your code should use the <code>Betty</code> style. It will be checked using <a href="https://github.com/holbertonschool/Betty/blob/master/betty-style.pl" title="betty-style.pl" target="_blank">betty-style.pl</a> and <a href="https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl" title="betty-doc.pl" target="_blank">betty-doc.pl</a></li>
<li>You are not allowed to use global variables</li>
<li>No more than 5 functions per file</li>
<li>The only C standard library functions allowed are <code>malloc</code>, <code>free</code> and <code>exit</code>. Any use of functions like <code>printf</code>, <code>puts</code>, <code>calloc</code>, <code>realloc</code> etc… is forbidden</li>
<li>Allowed syscalls: <code>read</code>, <code>write</code>, <code>open</code>, <code>close</code></li>
<li>You are allowed to use <a href="https://github.com/holbertonschool/_putchar.c/blob/master/_putchar.c" title="_putchar" target="_blank">_putchar</a></li>
<li>You don’t have to push <code>_putchar.c</code>, we will use our file. If you do it won’t be taken into account</li>
<li>In the following examples, the <code>main.c</code> files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own <code>main.c</code> files at compilation. Our <code>main.c</code> files might be different from the one shown in the examples</li>
<li>The prototypes of all your functions and the prototype of the function <code>_putchar</code> should be included in your header file called <code>main.h</code></li>
<li>Don’t forget to push your header file</li>
<li>All your header files should be include guarded</li>
<li>Tip: always prefer using symbolic constants (<code>POSIX</code>) vs numbers when it makes sense. For instance <code>read(STDIN_FILENO, ...</code> vs <code>read(0, ...</code></li>
</ul>
<h2>Tasks</h2>
<p>0. Write a function that reads a text file and prints it to the <code>POSIX</code> standard output.</p>

<ul>
<li>Prototype: <code>ssize_t read_textfile(const char *filename, size_t letters);</code></li>
<li>where letters is the number of letters it should read and print</li>
<li>returns the actual number of letters it could read and print</li>
<li>if the file can not be opened or read, return <code>0</code></li>
<li>if <code>filename</code> is <code>NULL</code> return <code>0</code></li>
<li>if <code>write</code> fails or does not write the expected amount of bytes, return <code>0</code></li>
</ul>

<pre><code>julien@ubuntu:~/0x15. File descriptors and permissions$ cat Requiescat 
Requiescat
by Oscar Wilde

Tread lightly, she is near
Under the snow,
Speak gently, she can hear
The daisies grow.

All her bright golden hair
Tarnished with rust,
She that was young and fair
Fallen to dust.

Lily-like, white as snow,
She hardly knew
She was a woman, so
Sweetly she grew.

Coffin-board, heavy stone,
Lie on her breast,
I vex my heart alone,
She is at rest.

Peace, Peace, she cannot hear
Lyre or sonnet,
All my life's buried here,
Heap earth upon it.
julien@ubuntu:~/0x15. File descriptors and permissions$ cat 0-main.c
#include &lt;stdio.h&gt;
#include &lt;stdlib.h&gt;
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(int ac, char **av)
{
    ssize_t n;

    if (ac != 2)
    {
        dprintf(2, "Usage: %s filename\n", av[0]);
        exit(1);
    }
    n = read_textfile(av[1], 114);
    printf("\n(printed chars: %li)\n", n);
    n = read_textfile(av[1], 1024);
    printf("\n(printed chars: %li)\n", n);
    return (0);
}
julien@ubuntu:~/0x15. File descriptors and permissions$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-read_textfile.c -o a
julien@ubuntu:~/0x15. File descriptors and permissions$ ./a Requiescat 
Requiescat
by Oscar Wilde

Tread lightly, she is near
Under the snow,
Speak gently, she can hear
The daisies grow.
(printed chars: 114)
Requiescat
by Oscar Wilde

Tread lightly, she is near
Under the snow,
Speak gently, she can hear
The daisies grow.

All her bright golden hair
Tarnished with rust,
She that was young and fair
Fallen to dust.

Lily-like, white as snow,
She hardly knew
She was a woman, so
Sweetly she grew.

Coffin-board, heavy stone,
Lie on her breast,
I vex my heart alone,
She is at rest.

Peace, Peace, she cannot hear
Lyre or sonnet,
All my life's buried here,
Heap earth upon it.

(printed chars: 468)
julien@ubuntu:~/0x15. File descriptors and permissions$ 
</code></pre>
<p>1. Create a function that creates a file.</p>

<ul>
<li>Prototype: <code>int create_file(const char *filename, char *text_content);</code></li>
<li>where <code>filename</code> is the name of the file to create and <code>text_content</code> is a <code>NULL</code> terminated string to write to the file</li>
<li>Returns: <code>1</code> on success, <code>-1</code> on failure (file can not be created, file can not be written, <code>write</code> “fails”, etc…)</li>
<li>The created file must have those permissions: <code>rw-------</code>. If the file already exists, do not change the permissions.</li>
<li>if the file already exists, truncate it</li>
<li>if <code>filename</code> is <code>NULL</code> return <code>-1</code></li>
<li>if <code>text_content</code> is <code>NULL</code> create an empty file</li>
</ul>

<pre><code>julien@ubuntu:~/0x15. File descriptors and permissions$ cat 1-main.c
#include &lt;stdio.h&gt;
#include &lt;stdlib.h&gt;
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(int ac, char **av)
{
    int res;

    if (ac != 3)
    {
        dprintf(2, "Usage: %s filename text\n", av[0]);
        exit(1);
    }
    res = create_file(av[1], av[2]);
    printf("-&gt; %i)\n", res);
    return (0);
}
julien@ubuntu:~/0x15. File descriptors and permissions$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-create_file.c -o b
julien@ubuntu:~/0x15. File descriptors and permissions$ ./b hello world
-&gt; 1)
julien@ubuntu:~/0x15. File descriptors and permissions$ ls -l hello
-rw------- 1 julien julien 5 Dec  3 14:28 hello
julien@ubuntu:~/0x15. File descriptors and permissions$ cat hello 
worldjulien@ubuntu:~/0x15. File descriptors and permis$ 
</code></pre>
<p>2. Write a function that appends text at the end of a file.</p>

<ul>
<li>Prototype: <code>int append_text_to_file(const char *filename, char *text_content);</code></li>
<li>where <code>filename</code> is the name of the file and <code>text_content</code> is the <code>NULL</code> terminated string to add at the end of the file</li>
<li>Return: <code>1</code> on success and <code>-1</code> on failure</li>
<li>Do not create the file if it does not exist</li>
<li>If <code>filename</code> is <code>NULL</code> return <code>-1</code></li>
<li>If <code>text_content</code> is <code>NULL</code>, do not add anything to the file. Return <code>1</code> if the file exists and <code>-1</code> if the file does not exist or if you do not have the required permissions to write the file</li>
</ul>

<pre><code>julien@ubuntu:~/0x15. File descriptors and permissions$ cat 2-main.c
#include &lt;stdio.h&gt;
#include &lt;stdlib.h&gt;
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(int ac, char **av)
{
    int res;

    if (ac != 3)
    {
        dprintf(2, "Usage: %s filename text\n", av[0]);
        exit(1);
    }
    res = append_text_to_file(av[1], av[2]);
    printf("-&gt; %i)\n", res);
    return (0);
}
julien@ubuntu:~/0x15. File descriptors and permissions$ echo -n Hello &gt; hello
julien@ubuntu:~/0x15. File descriptors and permissions$ ls -l hello
-rw-rw-r-- 1 julien julien 5 Dec  3 14:48 hello
julien@ubuntu:~/0x15. File descriptors and permissions$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-append_text_to_file.c -o c
julien@ubuntu:~/0x15. File descriptors and permissions$ ./c hello " World!
&gt; "
-&gt; 1)
julien@ubuntu:~/0x15. File descriptors and permissions$ cat hello 
Hello World!
julien@ubuntu:~/0x15. File descriptors and permissions$
</code></pre>
 <p>3. Write a program that copies the content of a file to another file.</p>

<ul>
<li>Usage: <code>cp file_from file_to</code></li>
<li>if the number of argument is not the correct one, exit with code <code>97</code> and print <code>Usage: cp file_from file_to</code>, followed by a new line, on the <code>POSIX</code> standard error</li>
<li>if <code>file_to</code> already exists, truncate it</li>
<li>if <code>file_from</code> does not exist, or if you can not read it, exit with code <code>98</code> and print <code>Error: Can't read from file NAME_OF_THE_FILE</code>, followed by a new line, on the <code>POSIX</code> standard error

<ul>
<li>where <code>NAME_OF_THE_FILE</code> is the first argument passed to your program</li>
</ul></li>
<li>if you can not create or if <code>write</code> to <code>file_to</code> fails, exit with code <code>99</code> and print <code>Error: Can't write to NAME_OF_THE_FILE</code>, followed by a new line, on the <code>POSIX</code> standard error

<ul>
<li>where <code>NAME_OF_THE_FILE</code> is the second argument passed to your program</li>
</ul></li>
<li>if you can not close a file descriptor , exit with code <code>100</code> and print <code>Error: Can't close fd FD_VALUE</code>, followed by a new line, on the <code>POSIX</code> standard error

<ul>
<li>where <code>FD_VALUE</code> is the value of the file descriptor</li>
</ul></li>
<li>Permissions of the created file: <code>rw-rw-r--</code>. If the file already exists, do not change the permissions</li>
<li>You must read <code>1,024</code> bytes at a time from the <code>file_from</code> to make less system calls. Use a buffer</li>
<li>You are allowed to use <code>dprintf</code></li>
</ul>

<pre><code>julien@ubuntu:~/0x15. File descriptors and permissions$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-cp.c -o cp
julien@ubuntu:~/0x15. File descriptors and permissions$ cat incitatous 
Why you should think twice before putting pictures on social media.
(What you always wanted to know about @Incitatous)
#PrivacyAware
http://imgur.com/a/Mq1tc
julien@ubuntu:~/0x15. File descriptors and permissions$ ./cp incitatous Incitatous
julien@ubuntu:~/0x15. File descriptors and permissions$ ls -l Incitatous 
-rw-rw-r-- 1 julien julien 158 Dec  3 15:39 Incitatous
julien@ubuntu:~/0x15. File descriptors and permissions$ cat Incitatous 
Why you should think twice before putting pictures on social media.
(What you always wanted to know about @Incitatous)
#PrivacyAware
http://imgur.com/a/Mq1tc
julien@ubuntu:~/0x15. File descriptors and permissions$ 
</code></pre>
<p>4. Write a program that displays the information contained in the <code>ELF</code> header at the start of an <code>ELF</code> file.</p>

<ul>
<li>Usage: <code>elf_header elf_filename</code></li>
<li>Displayed information: (no less, no more, do not include trailing whitespace)

<ul>
<li>Magic</li>
<li>Class</li>
<li>Data</li>
<li>Version</li>
<li>OS/ABI</li>
<li>ABI Version</li>
<li>Type</li>
<li>Entry point address</li>
</ul></li>
<li>Format: the same as <code>readelf -h</code> (<em>version <code>2.26.1</code></em>)</li>
<li>If the file is not an <code>ELF</code> file, or on error, exit with status code <code>98</code> and display a comprehensive error message to <code>stderr</code></li>
<li>You are allowed to use <code>lseek</code> once</li>
<li>You are allowed to use <code>read</code> a maximum of 2 times at runtime</li>
<li>You are allowed to have as many functions as you want in your source file</li>
<li>You are allowed to use <code>printf</code></li>
</ul>

<p>man <code>elf</code>, <code>readelf</code></p>

<pre><code>julien@ubuntu:~/0x15. File descriptors and permissions$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-elf_header.c -o elf_header
julien@ubuntu:~/0x15. File descriptors and permissions$ ./elf_header ubuntu64 
ELF Header:
  Magic:   7f 45 4c 46 02 01 01 00 00 00 00 00 00 00 00 00
  Class:                             ELF64
  Data:                              2's complement, little endian
  Version:                           1 (current)
  OS/ABI:                            UNIX - System V
  ABI Version:                       0
  Type:                              EXEC (Executable file)
  Entry point address:               0x400600
julien@ubuntu:~/0x15. File descriptors and permissions$ readelf --version
GNU readelf (GNU Binutils for Ubuntu) 2.26.1
Copyright (C) 2015 Free Software Foundation, Inc.
This program is free software; you may redistribute it under the terms of
the GNU General Public License version 3 or (at your option) any later version.
This program has absolutely no warranty.
julien@ubuntu:~/0x15. File descriptors and permissions$ readelf -h ubuntu64 
ELF Header:
  Magic:   7f 45 4c 46 02 01 01 00 00 00 00 00 00 00 00 00 
  Class:                             ELF64
  Data:                              2's complement, little endian
  Version:                           1 (current)
  OS/ABI:                            UNIX - System V
  ABI Version:                       0
  Type:                              EXEC (Executable file)
  Machine:                           Advanced Micro Devices X86-64
  Version:                           0x1
  Entry point address:               0x400600
  Start of program headers:          64 (bytes into file)
  Start of section headers:          6936 (bytes into file)
  Flags:                             0x0
  Size of this header:               64 (bytes)
  Size of program headers:           56 (bytes)
  Number of program headers:         9
  Size of section headers:           64 (bytes)
  Number of section headers:         31
  Section header string table index: 28
julien@ubuntu:~/0x15. File descriptors and permissions$ ./elf_header /lib/ld-linux.so.2
ELF Header:
  Magic:   7f 45 4c 46 01 01 01 00 00 00 00 00 00 00 00 00
  Class:                             ELF32
  Data:                              2's complement, little endian
  Version:                           1 (current)
  OS/ABI:                            UNIX - System V
  ABI Version:                       0
  Type:                              DYN (Shared object file)
  Entry point address:               0xac0
julien@ubuntu:~/0x15. File descriptors and permissions$ readelf -h /lib/ld-linux.so.2
ELF Header:
  Magic:   7f 45 4c 46 01 01 01 00 00 00 00 00 00 00 00 00 
  Class:                             ELF32
  Data:                              2's complement, little endian
  Version:                           1 (current)
  OS/ABI:                            UNIX - System V
  ABI Version:                       0
  Type:                              DYN (Shared object file)
  Machine:                           Intel 80386
  Version:                           0x1
  Entry point address:               0xac0
  Start of program headers:          52 (bytes into file)
  Start of section headers:          145756 (bytes into file)
  Flags:                             0x0
  Size of this header:               52 (bytes)
  Size of program headers:           32 (bytes)
  Number of program headers:         7
  Size of section headers:           40 (bytes)
  Number of section headers:         24
  Section header string table index: 23
julien@ubuntu:~/0x15. File descriptors and permissions$ ./elf_header netbsd32 
ELF Header:
  Magic:   7f 45 4c 46 01 01 01 02 00 00 00 00 00 00 00 00
  Class:                             ELF32
  Data:                              2's complement, little endian
  Version:                           1 (current)
  OS/ABI:                            UNIX - NetBSD
  ABI Version:                       0
  Type:                              EXEC (Executable file)
  Entry point address:               0x80484c0
julien@ubuntu:~/0x15. File descriptors and permissions$ ./elf_header sortix32 
ELF Header:
  Magic:   7f 45 4c 46 01 01 01 53 00 00 00 00 00 00 00 00
  Class:                             ELF32
  Data:                              2's complement, little endian
  Version:                           1 (current)
  OS/ABI:                            &lt;unknown: 53&gt;
  ABI Version:                       0
  Type:                              EXEC (Executable file)
  Entry point address:               0x80484c0
julien@ubuntu:~/0x15. File descriptors and permissions$ ./elf_header solaris32 
ELF Header:
  Magic:   7f 45 4c 46 01 01 01 06 01 00 00 00 00 00 00 00
  Class:                             ELF32
  Data:                              2's complement, little endian
  Version:                           1 (current)
  OS/ABI:                            UNIX - Solaris
  ABI Version:                       1
  Type:                              EXEC (Executable file)
  Entry point address:               0x8052400
julien@ubuntu:~/0x15. File descriptors and permissions$ ./elf_header sparc32 
ELF Header:
  Magic:   7f 45 4c 46 01 02 01 00 00 00 00 00 00 00 00 00
  Class:                             ELF32
  Data:                              2's complement, big endian
  Version:                           1 (current)
  OS/ABI:                            UNIX - System V
  ABI Version:                       0
  Type:                              EXEC (Executable file)
  Entry point address:               0x10d20
julien@ubuntu:~/0x15. File descriptors and permissions$ 
</code></pre>
