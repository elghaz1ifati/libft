*This project has been created as part of the 42 curriculum by fatel-gh.*

# 📚 Libft

## 📖 1. Overview

**Libft** is a C programming project from the 42 curriculum. The objective is to create a personal C library by reimplementing selected functions from the standard C library and developing additional utility functions.

This project helps develop a deeper understanding of how common C functions work internally while building reusable tools for future projects.

The library consists of three mandatory parts:

- **Part 1 — Libc Functions:** Reimplementation of standard character, string, memory, and conversion functions.
- **Part 2 — Additional Functions:** Functions for string manipulation, integer conversion, function application, and output to file descriptors.
- **Part 3 — Linked Lists:** Functions for creating, managing, traversing, and deleting linked-list nodes.

The compiled library is named `libft.a`.

## 🧠 2. Key Skills and Concepts Learned

Throughout this project, the following programming concepts are practised:

- **C programming:** Implementing functions using C syntax, types, and control structures.
- **Pointers:** Accessing and manipulating memory addresses.
- **Memory management:** Allocating and freeing memory with `malloc()` and `free()`.
- **String manipulation:** Searching, comparing, copying, splitting, and joining strings.
- **Memory manipulation:** Initializing, copying, moving, and comparing memory regions.
- **Linked lists:** Creating nodes and managing connections between them.
- **Function pointers:** Passing functions as arguments to other functions.
- **Dynamic memory allocation:** Creating strings, arrays, and list nodes at runtime.
- **Compilation and static libraries:** Using a Makefile and `ar` to compile source files into a reusable library.
- **Debugging and testing:** Checking function behaviour, handling allocation failures, and avoiding memory errors.

## ✨ 3. Project Highlights

### 🔤 Part 1 — Libc Functions

This part recreates selected standard C library functions using the `ft_` prefix. These functions cover character classification, character conversion, string operations, memory operations, and integer conversion.

### 🛠️ Part 2 — Additional Functions

This part introduces more advanced utilities, including substring creation, string trimming, splitting strings into arrays, integer-to-string conversion, applying functions to strings, and writing data to file descriptors.

### 🔗 Part 3 — Linked Lists

This part implements a singly linked list using the `t_list` structure. It includes operations to create nodes, add nodes at the beginning or end, count nodes, access the last node, iterate over a list, create a transformed copy, and delete nodes.

### ⚙️ Build System

The Makefile automates compilation and library creation. It uses `cc` with `-Wall -Wextra -Werror` and the `ar` utility to generate `libft.a`.

## 📋 4. Functions Reference

### 🔤 Part 1 — Libc Functions

| Function | Description |
|---|---|
| `ft_isalpha` | Checks whether a character is an alphabetic letter. |
| `ft_isdigit` | Checks whether a character is a digit. |
| `ft_isalnum` | Checks whether a character is alphabetic or numeric. |
| `ft_isascii` | Checks whether a value belongs to the ASCII character set. |
| `ft_isprint` | Checks whether a character is printable. |
| `ft_toupper` | Converts a lowercase letter to uppercase. |
| `ft_tolower` | Converts an uppercase letter to lowercase. |
| `ft_strlen` | Returns the length of a string. |
| `ft_memset` | Fills a memory region with a specified byte. |
| `ft_bzero` | Sets a memory region to zero. |
| `ft_memcpy` | Copies bytes between non-overlapping memory regions. |
| `ft_memmove` | Copies bytes between memory regions, including overlapping regions. |
| `ft_strlcpy` | Copies a string into a destination buffer with size control. |
| `ft_strlcat` | Appends a string to a destination buffer with size control. |
| `ft_strchr` | Finds the first occurrence of a character in a string. |
| `ft_strrchr` | Finds the last occurrence of a character in a string. |
| `ft_strncmp` | Compares up to a specified number of characters in two strings. |
| `ft_memchr` | Searches a memory region for a byte. |
| `ft_memcmp` | Compares two memory regions byte by byte. |
| `ft_strnstr` | Searches for a substring within a string, up to a specified length. |
| `ft_atoi` | Converts the initial numeric portion of a string to an integer. |
| `ft_calloc` | Allocates memory for an array and initializes it to zero. |
| `ft_strdup` | Creates a newly allocated duplicate of a string. |

### 🛠️ Part 2 — Additional Functions

| Function | Description |
|---|---|
| `ft_substr` | Creates a substring starting at a specified index. |
| `ft_strjoin` | Concatenates two strings into a newly allocated string. |
| `ft_strtrim` | Removes specified characters from the beginning and end of a string. |
| `ft_split` | Splits a string into a NULL-terminated array of strings using a delimiter. |
| `ft_itoa` | Converts an integer into a string representation. |
| `ft_strmapi` | Applies a function to each character and stores the results in a new string. |
| `ft_striteri` | Applies a function to each character, allowing it to be modified in place. |
| `ft_putchar_fd` | Writes a character to a specified file descriptor. |
| `ft_putstr_fd` | Writes a string to a specified file descriptor. |
| `ft_putendl_fd` | Writes a string followed by a newline to a specified file descriptor. |
| `ft_putnbr_fd` | Writes an integer to a specified file descriptor. |

### 🔗 Part 3 — Linked-List Functions

The linked-list functions use the `t_list` structure defined in `libft.h`:

```c
typedef struct s_list
{
    void            *content;
    struct s_list   *next;
}   t_list;
```

Each node contains a pointer to its content and a pointer to the next node. The content can represent different data types because it uses `void *`.

| Function | Description |
|---|---|
| `ft_lstnew` | Allocates a new node and initializes its content and next pointer. |
| `ft_lstadd_front` | Adds a node at the beginning of a list. |
| `ft_lstsize` | Returns the number of nodes in a list. |
| `ft_lstlast` | Returns the last node in a list. |
| `ft_lstadd_back` | Adds a node at the end of a list. |
| `ft_lstdelone` | Deletes one node and frees its content using a supplied function. |
| `ft_lstclear` | Deletes and frees a node and all its successors, then sets the list pointer to `NULL`. |
| `ft_lstiter` | Applies a function to the content of each node. |
| `ft_lstmap` | Creates a new list by applying a function to each node's content. |

## 🚀 5. Instructions

### 📦 Requirements

Make sure the following tools are available:

- A C compiler (`cc`)
- `make`
- `ar`
- Valgrind (optional, for memory testing)

### ⬇️ Clone the Repository

```bash
git clone https://github.com/elghaz1ifati/libft.git
cd libft
```

### 🔨 Compile the Library

Run:

```bash
make
```

This compiles the source files and creates `libft.a` in the project root.

### 🧰 Makefile Commands

| Command | Description |
|---|---|
| `make` | Compiles the project and creates the library. |
| `make all` | Builds the library. |
| `make clean` | Removes generated object files. |
| `make fclean` | Removes object files and `libft.a`. |
| `make re` | Performs a clean rebuild. |

The source files are compiled with the following flags:

```bash
-Wall -Wextra -Werror
```

### 💻 Use the Library

Include the header in your C source file:

```c
#include "libft.h"
```

Compile your program and link it against the library:

```bash
cc -Wall -Wextra -Werror main.c -L. -lft -o program
```

Run the program:

```bash
./program
```

Replace `main.c` with your own source file. Make sure your program uses the functions declared in `libft.h` and implemented in the library.

### 🧪 Memory Testing with Valgrind

Valgrind helps detect memory leaks and invalid memory accesses when testing Libft functions.

Install Valgrind on Kali Linux if it is not already installed:

```bash
sudo apt update
sudo apt install valgrind
```

Compile your test program with debug information:

```bash
cc -Wall -Wextra -Werror -g main.c -L. -lft -o program
```

Run Valgrind:

```bash
valgrind --leak-check=full --show-leak-kinds=all ./program
```

Check the output for memory errors and leaks. Ensure your test program actually calls the Libft functions you want to test, including dynamically allocated strings and linked-list operations.

## 📚 6. Resources

The following references provide information about C programming, standard library functions, compilation, debugging, and documentation.

- 📘 [C Reference — cppreference](https://en.cppreference.com/w/c) — C language features and standard library documentation.
- 📖 [Linux manual pages](https://man7.org/linux/man-pages/) — Documentation for standard C functions and system interfaces.
- 🛠️ [GNU Make manual](https://www.gnu.org/software/make/manual/) — Documentation for Makefiles and build automation.
- 📦 [GNU Binutils documentation](https://sourceware.org/binutils/docs/) — Documentation for tools used to manage object files and static libraries.
- 🧪 [Valgrind](https://valgrind.org/) — A memory debugging tool used to detect memory leaks and invalid memory accesses.
- 🧩 [Python Tutor — C Visualizer](https://pythontutor.com/c.html) — Visualizes C code execution step by step, helping explain pointers, variables, memory, and data structures. <Cite refs={["turn134993search0","turn134993search8"]}/>
- 📝 [GitHub README documentation](https://docs.github.com/en/repositories/managing-your-repositorys-settings-and-features/customizing-your-repository/about-readmes) — Explains the purpose of README files and how they help people understand and use a repository. <Cite refs={["turn134993search6"]}/>
- ✍️ [GitHub Markdown guide](https://docs.github.com/en/get-started/writing-on-github) — A guide to Markdown formatting, headings, lists, links, and code blocks used to create readable README files.
- 💬 [Stack Overflow](https://stackoverflow.com/) — Community questions and answers about C programming, debugging, and compilation.
- 📄 **42 Libft project subject** — The official project specification provided by 42.

**AI and Community Assistance:** Stack Overflow’s AI-assisted features were used to help understand C programming concepts, Makefile configuration, and compilation errors. The assistance is based on community responses and contributions available on Stack Overflow.

## 🎯 7. Conclusion

Libft is a foundational project that develops a deeper understanding of C programming and the behaviour of commonly used library functions. By implementing character operations, memory and string utilities, additional functions, and linked-list management, this project builds a reusable library for future 42 assignments.

It also reinforces essential programming practices, including careful pointer handling, dynamic memory management, compilation, debugging, and code organisation.

The resulting `libft.a` serves as a personal collection of C utility functions that can be reused and extended in later projects.

## 👤 Author

**42 Login:** fatel-gh

**GitHub:** [elghaz1ifati](https://github.com/elghaz1ifati)
