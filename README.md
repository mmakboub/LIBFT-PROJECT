# 42LIBFT-PROJECT : 🧰 libft
YOUR VERY FIRST OWN LIBRARY ---- >> This project is your first project as a student at 42. You will need to recode a few functions of the C standard library as well as some other utility functions that you will use during your whole cursus.
# ABOUT LIBFT-PROJECT :
Programming in C can be very tedious when you don't have access to the very useful standard functions.
This project gives you the opportunity to rewrite those functions to understand them and learn to use them.
The library will help you for your future projects in C. Through this project, you have the opportunity
to extend your list of functions in your own way! For more detailed information, look at the subject of this project.

⚠️ NOTE ⚠️ : To be successful with moulinette on this project I had to put all the files in the same directory. I have just put them in folders and modified the Makefile to have a better organized repository.
# LIST OF FUNCTIONS :

---> Functions from <ctype.h> library

ୡ [ft_isascii](https://github.com/SWEETBEAVER/LIBFT-PROJECT/blob/main/libft/ft_isascii.c) - test for ASCII character.                                         
ୡ [ft_isalnum](https://github.com/SWEETBEAVER/LIBFT-PROJECT/blob/main/libft/ft_isalnum.c) - alphanumeric character test.                                    
ୡ [ft_isalpha](https://github.com/SWEETBEAVER/LIBFT-PROJECT/blob/main/libft/ft_isalpha.c) - alphabetic character test.                                      
ୡ [ft_isdigit](https://github.com/SWEETBEAVER/LIBFT-PROJECT/blob/main/libft/ft_isdigit.c) - decimal-digit character test.                                    
ୡ [ft_isprint](https://github.com/SWEETBEAVER/LIBFT-PROJECT/blob/main/libft/ft_isprint.c) - printing character test (space character inclusive).            
ୡ [ft_tolower](https://github.com/SWEETBEAVER/LIBFT-PROJECT/blob/main/libft/ft_tolower.c) - upper case to lower case letter conversion.                      
ୡ [ft_toupper](https://github.com/SWEETBEAVER/LIBFT-PROJECT/blob/main/libft/ft_toupper.c) - lower case to upper case letter conversion.                      

---> Functions from <stdlib.h> library

ୡ [ft_atoi](https://github.com/SWEETBEAVER/LIBFT-PROJECT/blob/main/libft/ft_atoi.c) - convert ASCII string to integer.                                    
ୡ [ft_calloc](https://github.com/SWEETBEAVER/LIBFT-PROJECT/blob/main/libft/ft_calloc.c) - memory allocation.

---> Functions from <strings.h> library

ୡ [ft_bzero](https://github.com/SWEETBEAVER/LIBFT-PROJECT/blob/main/libft/ft_bzero.c) - write zeroes to a byte string.                                      
ୡ [ft_memset](https://github.com/SWEETBEAVER/LIBFT-PROJECT/blob/main/libft/ft_memset.c) - write a byte to a byte string.                                    
ୡ [ft_memchr](https://github.com/SWEETBEAVER/LIBFT-PROJECT/blob/main/libft/ft_memchr.c) - locate byte in byte string.                                        
ୡ [ft_memcmp](https://github.com/SWEETBEAVER/LIBFT-PROJECT/blob/main/libft/ft_memcmp.c)- compare byte string.                                                
ୡ [ft_memove](https://github.com/SWEETBEAVER/LIBFT-PROJECT/blob/main/libft/ft_memove.c) - copy byte string.                                                  
ୡ [ft_memcpy](https://github.com/SWEETBEAVER/LIBFT-PROJECT/blob/main/libft/ft_memcpy.c) - copy memory area.                                                  

---> Functions from <string.h> library

ୡ [ft_strlen](https://github.com/SWEETBEAVER/LIBFT-PROJECT/blob/main/libft/ft_strlen.c)- find length of string.                                              
ୡ [ft_strchr](https://github.com/SWEETBEAVER/LIBFT-PROJECT/blob/main/libft/ft_strchr.c) - locate character in string (first occurrence).                    
ୡ [ft_strrchr](https://github.com/SWEETBEAVER/LIBFT-PROJECT/blob/main/libft/ft_strrchr.c) - locate character in string (last occurence).                    
ୡ [ft_strntr](https://github.com/SWEETBEAVER/LIBFT-PROJECT/blob/main/libft/ft_strnstr.c) - locate a substring in a string (size-bounded).                    
ୡ [ft_strncmp](https://github.com/SWEETBEAVER/LIBFT-PROJECT/blob/main/libft/ft_strncmp.c)- compare strings (size-bounded).                                  
ୡ [ft_strdup](https://github.com/SWEETBEAVER/LIBFT-PROJECT/blob/main/libft/ft_strdup.c) - save a copy of a string (with malloc).                            
ୡ [ft_strlcpy](https://github.com/SWEETBEAVER/LIBFT-PROJECT/blob/main/libft/ft_strlcpy.c) - size-bounded string copying.                                    
ୡ [ft_strlcat](https://github.com/SWEETBEAVER/LIBFT-PROJECT/blob/main/libft/ft_strlcat.c) - size-bounded string concatenation.                              

---> Non-standard functions

ୡ [ft_itoa](https://github.com/SWEETBEAVER/LIBFT-PROJECT/blob/main/libft/ft_itoa.c) - convert integer to ASCII string.                                      
ୡ [ft_substr](https://github.com/SWEETBEAVER/LIBFT-PROJECT/blob/main/libft/ft_substr.c) - extract substring from string.                                    
ୡ [ft_strtrim](https://github.com/SWEETBEAVER/LIBFT-PROJECT/blob/main/libft/ft_strtrim.c) - trim beginning and end of string with the specified characters.  
ୡ [strjoin](https://github.com/SWEETBEAVER/LIBFT-PROJECT/blob/main/libft/ft_strjoin.c) - concatenate two strings into a new string (with malloc).            
ୡ [ft_split](https://github.com/SWEETBEAVER/LIBFT-PROJECT/blob/main/libft/ft_split.c) - split string, with specified character as delimiter, into an array of strings.                                                                                                                                              
ୡ [ft_strmapi](https://github.com/SWEETBEAVER/LIBFT-PROJECT/blob/main/libft/ft_strmapi.c) - create new string from modifying string with specified function.                                                                                                                                                
ୡ [ft_striteri](https://github.com/SWEETBEAVER/LIBFT-PROJECT/blob/main/libft/ft_striteri.c) -applies the fonction f to each character of the string passed as argument , and passing it's index as firt argument                                                                                                    
ୡ [ft_putchar_fd](https://github.com/SWEETBEAVER/LIBFT-PROJECT/blob/main/libft/ft_putchar_fd.c) - output a character to given file.                          
ୡ [ft_putstr_fd](https://github.com/SWEETBEAVER/LIBFT-PROJECT/blob/main/libft/ft_putstr_fd.c) - output string to given file.                                
ୡ [ft_putendl_fd](https://github.com/SWEETBEAVER/LIBFT-PROJECT/blob/main/libft/ft_putendl_fd.c) - output string to given file with newline.                  
ୡ [ft_putnbr_fd](https://github.com/SWEETBEAVER/LIBFT-PROJECT/blob/main/libft/ft_putnbr.c) - output integer to given file.                                  

---> Linked list functions ( BONUS PART)

[ft_lstnew](https://github.com/SWEETBEAVER/LIBFT-PROJECT/blob/main/libft/ft_lstnew.c) - create new list.
[ft_lstsize](https://github.com/SWEETBEAVER/LIBFT-PROJECT/blob/main/libft/ft_lstsize.c) - count elements of a list.
[ft_lstlast](https://github.com/SWEETBEAVER/LIBFT-PROJECT/blob/main/libft/ft_lstlast.c) - find last element of list.
[ft_lstadd_back](https://github.com/SWEETBEAVER/LIBFT-PROJECT/blob/main/libft/ft_lstadd_back.c) - add new element at end of list.
[ft_lstadd_front](https://github.com/SWEETBEAVER/LIBFT-PROJECT/blob/main/libft/ft_lstadd_front.c) - add new element at beginning of list.
[ft_lstdelone](https://github.com/SWEETBEAVER/LIBFT-PROJECT/blob/main/libft/ft_lstdelone.c) - delete element from list.
[ft_lstclear](https://github.com/SWEETBEAVER/LIBFT-PROJECT/blob/main/libft/ft_lstclear.c) - delete sequence of elements of list from a starting point.
[ft_lstiter](https://github.com/SWEETBEAVER/LIBFT-PROJECT/blob/main/libft/ft_lstiter.c) - apply function to content of all list's elements.
[ft_lstmap](https://github.com/SWEETBEAVER/LIBFT-PROJECT/blob/main/libft/ft_lstmap.c) - apply function to content of all list's elements into new list.


