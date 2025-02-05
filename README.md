# 📚 My Libft #
# Library of reimplemented functions in C #

## Part 1: Reimplementation of the standard functions: ##

#### 🔤 Character check: ####

* `ft_isalnum` - checks for an alphanumeric character. It returns a non-zero value if it’s an alphabetic character, else it returns 0. 
* `ft_isalpha` - checks for an alphabetic character. It returns a non-zero value if it’s an alphabetic character, else it returns 0. 
* `ft_isascii` - checks whether c is an ASCII character. It returns a non-zero value if it’s an alphabetic character, else it returns 0.
* `ft_isdigit` - checks for a digit (0 through 9). It returns a non-zero value if it’s an alphabetic character, else it returns 0. 
* `ft_isprint` - checks for any printable character including space. It returns a non-zero value if it’s an alphabetic character, else it returns 0. 


#### ⛓ String manipulation: ####

* `ft_strchr` - (string first character search) returns a pointer to the first occurrence of the character in the string or NULL if the character is not found.
* `ft_strdup` - (string duplicate) returns a pointer to a duplicated string.
* `ft_strlcat` - concatenates (links together) a string with a specified length. It returns the total length: initial length of dst plus the length of src.
* `ft_strlcpy` - (string length copy) copies a string with a specified length.
* `ft_strlen` - calculates the length of a string.
* `ft_strncmp` - (string compare) compares two strings lexicographically. Returns an integer less than, equal to, or greater than zero if s1 is less than, equal to, or greater than s2 respectively.
* `ft_strrchr` - (string last character search) returns a pointer to the last occurrence of  the character c in the string s or NULL if the character is not found.
* `ft_strnstr` - locates a substring in a string.


#### 🤯 Memory manipulation: ####

* `ft_bzero` - (byte 0) erases  the  data by writing zeros (bytes  containing '\0') to that area. It is less common and has been substituted by memset on some systems.
* `ft_memchr` - (memory first character search) scans  the  initial n bytes of the memory area pointed to by a string for the first instance of a character.
* `ft_memcmp` - (memory compare) compares the first n bytes of the memory areas of strings.
* `ft_memcpy` - (memory copy) copies n bytes from source memory area to destination memory area without their overlapping.
* `ft_memmove` - (memory move) copies n bytes from source memory area to destination memory area even when they overlap: copying takes place as though the bytes in src are first copied into a temporary array that does not overlap src or dest, and the bytes are then copied from  the  temporary array to dest.
* `ft_memset` - (memory set) fills a block of memory with a specific value.


#### 🅰️ ➡️ 6️⃣5️⃣ Conversion: ####

* `ft_atoi` -  converts an ASCII string to an integer.
* `ft_tolower` - converts to lowercase.
* `ft_toupper` - converts to uppercase.


#### 🧠 Memory allocation: ####

* `ft_calloc` - (continuous allocation) contiguously allocates enough space for objects with defined size of memory and returns a pointer to the allocated memory. It initializes each block of memory with a default value of ‘0’.


## Part 2: Non-standard functions: ##

#### ⛓ String manipulation: ####

* `ft_split` - splits a string into an array of substrings.
* `ft_striteri` - (string iteration with index) applies a function to each character in a string with an index.
* `ft_strjoin` - concatenates strings.
* `ft_strmapi` - (string mapping) applies a function to each character in a string.
* `ft_strtrim` - trims the string removing 'set' characters from the beginning and from the end of the string.
* `ft_substr` - extracts a substring from a string.


#### 6️⃣5️⃣ ➡️ 🅰️ Conversion: ####

* `ft_itoa` - (integer to ASCII) converts a number into an ASCII character.


#### 🗂 Writing to a FD (file descriptor): ####

* `putchar_fd` - writes a character to a file descriptor.
* `putendl_fd` - writes a string with a new line to a file descriptor.
* `putnbr_fd` - writes a number to a file descriptor.
* `putstr_fd` - writes a string to a file descriptor.


## 🌟 Bonus 📄➡️📑 (Lists manipulation): ##

* `ft_lstnew` - is designed to create a new node for a singly linked list in C.
* `ft_lstadd_front` - adds a new node at the beginning of an existing list.
* `ft_lstsize` - counts the number of nodes in a list.
* `ft_lstlast` - returns the last node of the list.
* `ft_lstadd_back` - adds a new node at the end of an existing list.
* `ft_lstdelone` - is used to delete a single node from a linked list by freeing the memory allocated for the content of the node using a provided 'del function' and then freeing the memory allocated for the node itself.
* `ft_lstclear` - is used to delete all the nodes from a linked list using the function 'del' and free(3). At the end, the pointer to the list has to be NULL.
* `ft_lstiter` - iterates over the list and applies the function to the content of every node.
* `ft_lstmap` -  iterates the list 'lst' and applies the function in the content of every node. Creates a list resulting from the correct and successive application of the function ‘f’ on each node. The function ‘del’ is used to remove the content of a node, if necessary.
