LIBFT_H 

This is my first project in c that builds on the concept that I learned during my pool day of useful functions that I will be allowed to reuse in most of my c projects this year. This will save a lot of precious time.

C programming can be very tedious when one doesn't have access to those highly useful standard functions , this project makes you to take the time to re-write those fictions understand them and learn to use them, this library will help me for all my future C projects.

Through this project I will also have the opportunity to expand the list of functions with my own.

So at first I started with alphabetic functions that manipulate the characters first of all we have :

			    	CHARACHTER

ft_tolower : that functions transform the alphabet from the a uppercase to a lower that using the ascii code table;

ft_toupper : that function do the same opposite thing make the lower cast in upper using the ascii code;

ft_isprint : that function only print the printable characters;

ft_isascii : that function only print the ascii character;

ft_isdigit : that function only checks for the numbers;

ft_isalpha : that function only checks for the alpha;

                     	    STRINGS
Ft_strcmp : we compare two strings to each other and it returns 0  if the two strings are equal and 1 if the s1 is greater and -1 if the opposition.

ft_strncmp : same the last strcmp function but this will compare as the number given in the parameter function.

ft_strchr : its look for the charchter entered in the function if it found it It will return the pointer on the string.

ft_strrchr : that functions is the same as the ft_strchr but the catch is in reverse ;

ft_strlen. : that function only counts the length of the string;

ft_strcpy : this function  copy the dst string to the src string;

ft_strncpy : is the same it copy the string to the other and also have the numbeer in the function prameter that is the num of how much we want to copy to the other dst string;

ft_strstr : that function search a needle inside the stack for example we have two strings "hello world" and the needle is "world"  the function run and when the index find the word it returns the pointer;

Ft_strnstr : is the same as the last function but here we declare a int in the parameter function to indicate how Much we need to look for;

ft_strcat : strcat is that function that append a copy the second string on the first the string :



Ft_strncat : is the same function as strcat but instead we copy the whole last string we copy the string based on the number given in the function parameter

Ft_strlcat : is again the same. Function but instead copy the whole string we copy based of the length of the both strings ;

					CONVERSION

ft_calloc : this function count the amount of bits we should allocate in the memory.

ft_strdup : it takes the string and makes a copy in the head we manually allocate the size of it and do the classic ft_strcpy function ;

ft_atoi : that function only cover the string we have to the integer ;

ft_itoa : this function tho the exact the opposite of the atoi function this function only care about transfar the int to the string;

					OUTPUT

The output is the function that able to display in we will need them very much in our library so we can be able to display using the system calls and the file descriptor;


ft_putchar_fd : this function is able to show us the charachters in the out put we use the "write(fd, "buffer" , bytes)" so in this case the fd in the write function is the only one able to show us the output we put the file number created in the processor in the makefile function so whatever the number of the file the makefile make sure to link it to the library;

ft_putnbr_fd : this function able to show the only numbers not the characters the prototype putnbr(int nb, int fd) the fd variable is the one responsible for the output ;

ft_putstr_fd : this function is able to show the string is like the putstr function as we said before now we don't have a constant output we. Have a variable and that why we added the fd to make sure it works on whatever process;

Ft_putendl_fd : this function outputs the string s to the file descriptor fd follow by  a new line;
