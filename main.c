/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 10:15:53 by mmakboub          #+#    #+#             */
/*   Updated: 2022/10/07 10:38:57 by mmakboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

**ISALPHA.c**

int main ()
{
	char a;
    a = 'k';
	printf("%d\n", ft_isalpha(c));
}

**ISDIGIT.c**

int main ()
{
	char a;
    a='11';
	printf("%d\n", ft_isdigit(c));
	return (0);
}


**ISALNUM.c**

int main()
{
    char c;
    c = '5';
	printf("%d\n", ft_isalnum(c));
    return 0;
}


**ISASCII.c**

int main()
{
    char a;

    a = 'Q';
	printf("%d\n", ft_isascii(c));
    return 0;
}


**ISPRINT.c**

int main()
{
    unsigned char c;

    c = '\t';
	printf("%d\n", ft_isprint(c));
    c = 'Q';
	printf("%d\n", ft_isprint(c));
    return 0;
}


**STRLEN.c**

int main ()
{
	int i;
	i = ft_strlen("Hello World");
	printf("%d",i);
	return 0;
}


**MEMSET.c**

int main ()
{
	char	str[12] = "hello world";
	char	des[12] = "hello world";
	printf("%s",str);
	printf("%s","\n");
	char *a = ft_memset(str,'*',4);
	printf("%s",a);
	printf("%s","\n");
	printf("%s","****************");
	printf("%s","\n");
	char *b = memset(des,'*',4);
	printf("%s",b);
	return (0);
}

**BZERO.c**
int main ()
{
	char s[14] = "hello world";
	char t[14] = "hello world";
	ft_bzero(t, 10);
    bzero(s, 10 );
	int i, j; 
	i = j = 0;
	while (!s[i]) i++;
	while (!t[j]) j++;
	printf("mine: %s\noriginal: %s", &t[j], &s[i]);
    return 0;
}


**MEMCPY.c**

int main ()
{
	char src[10] = "hell no!";
	char dest[4];
	char *a = ft_memcpy(dest,src,0);
	char *b = memcpy(dest,src,0);
	printf("%s",a);
	printf("\n**************");
	printf("\n%s", b);
	return 0;
}


**MEMMOVE.c**

int main ()
{
	char src[10] = "hell no!";
	char dest[4];
	char *a = ft_memmove(dest,src,4);
	char *b = memmove(dest,src,4);
	printf("%s",a);
	printf("\n**************");
	printf("\n%s", b);
	return 0;
}


**STRLCPY.c**

int main ()
{
	char src[100] = "helox eikdf dohfsdiuf sdjfh";
	char dest[4];
	printf ("%zu\n",ft_strlcpy(dest,src,4));
	return 0;
}

**STRLCAT.c**

int main ()
{
	char src[10] = "hel";
	char dest[8] = "lo!";
	printf("%u\n",ft_strlcat(src,dest,4));
	printf("%lu",strlcat(src,dest,4));
	return 0;
}


**TOUPPER.c**

int main() {
    char c;

    c = 'm';
    printf("%c -> %c", c, toupper(c));
	printf("\n%c",ft_toupper(c));
    c = 'D';
    printf("\n%c -> %c", c, toupper(c));
	printf("\n%c", ft_toupper(c));
    c = '9';
    printf("\n%c -> %c", c, toupper(c));
	printf("\n%c", ft_toupper(c));
    return 0;
}


**TOLOWER.c**

int main() {
    char c;

    c = 'M';
    printf("%c -> %c", c, tolower(c));
	printf("\n%c",ft_tolower(c));
    c = 'd';
    printf("\n%c -> %c", c, tolower(c));
	printf("\n%c", ft_tolower(c));
    c = '9';
    printf("\n%c -> %c", c, tolower(c));
	printf("\n%c", ft_tolower(c));
    return 0;
}


**STRCHR.c**

int main () {
   const char str[] = "http://www.facebook.com";
   const char ch = '.';
   char *ret;
   char *dev;

   ret = strchr(str, ch);
   dev = ft_strchr(str, ch);

   printf("String after |%c| is - |%s|\n", ch, ret);
   printf("\nString after |%c| is - |%s|\n", ch, dev); 
   return(0);
}


**STRRCHR.c**

int main () {
   int len;
   const char str[] = "http://www.facebook.com";
   const char ch = '.';
   char *ret;
   char *dev;

   ret = strrchr(str, ch);
   dev = ft_strrchr(str, ch);
   printf("String after |%c| is - |%s|\n", ch, ret);
   printf("\nString after |%c| is - |%s|\n", ch, dev);
   return(0);
}


**STRNCNMP.c**

int main()
{
	char	s1[10] = "";
	char	s2[10] = "";
	printf("%d",ft_strncmp(s1,s2,2));
	return 0;
}

**MEMCHR.c**

int main () {
   const char str[] = "http://www.facebook.com";
   const char ch = '.';
   char *ret;
   char	*dev;

   ret = memchr(str, ch, 5);
   dev = ft_memchr(str, ch, 5);
   printf("String after |%c| is - |%s|\n", ch, ret);
   printf("String after |%c| is - |%s|\n", ch, dev);

   return(0);
}


**MEMCMP.c**

int main()
{
	char	s1[10] = "abcd";
	char	s2[10] = "abCD";
	printf("%d", memcmp(s1,s2,2));
	printf("\n%d",ft_memcmp(s1,s2,2));
	return 0;
}


**STRNSTR.c**

int main ()
{
	const char *largestring = "Foo Bar Baz";
	const char *smallstring = "Bar";
	char *ptr;
	char *ptr2;

	ptr = strnstr(largestring, smallstring, 2);
	ptr2 = ft_strnstr(largestring, smallstring, 2);
	printf("%s", ptr);
	printf("\n*********\n");
	printf("%s", ptr2);
	return 0;
}


**ATOI.c**

int main () {
   int val;
   int mal;

   char str[20] = "-5481";
   char dev[20] = "hello";
   val = atoi(str);
   mal = atoi(dev);
   printf("String value = %s, Int value = %d\n", str, val);
   printf("%d",ft_atoi(str));
   printf("\nString value = %s, Int value = %d\n", dev, mal);
   printf("%d",ft_atoi(dev));
   return(0);
}


**CALLOC.c**

int main(void)
{
    int i, n;
    int *a;
    printf("Number of elements: ");
    scanf("%d", &n);

    a = ft_calloc(n, sizeof(int));

    printf("Enter numbers: \n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Numbers entered: \n");
    for(i = 0; i < n; i++)
        printf("%d  ", a[i]);
    printf("\n");


    return 0;

}


**STRDUP.c**

int main()
{
	char src[] = "ITS MMAKBOUB";
	printf("%s",ft_strdup(src));
	return 0;
}


**SUBSTR.c**

int main ()
{
	char const str[] = " U'RE THE BEST";
	printf("%s\n",ft_substr(str, 20, 5));
	return (0);
}


**STRJOIN.c**

int main ()
{
	char str[] = "HELLO ";
	char str1[] = "WORLD";
	printf("%s",ft_strjoin(str,str1));
	return 0;
}


**STRTRIM.c**

int main()
{
    char s1[]= "25hEllo World 12Feel free 2dd5";
	printf("%s\n",ft_strtrim(s1, "25"));
	return (0);
}

**SPLIT.c**

int main()
{
    char months[] = "JAN,FEB,MAR,APR,MAY,JUN,JUL,AUG,SEP,OCT,NOV,DEC";
    char** tokens;

    printf("months=[%s]\n\n", months);

    tokens = ft_split(months, ',');

    if (tokens)
    {
        int i;
        for (i = 0; *(tokens + i); i++)
        {
            printf("month=[%s]\n", *(tokens + i));
            free(*(tokens + i));
        }
        printf("\n");
        free(tokens);
    }

    return 0;
}

**ITOA.c**

int main () {
   int val;
   int mal;

   printf("%s",ft_itoa(1337));
   printf("\n%s",ft_itoa(-1337));
   return(0);
}

**STRMAPI.c**

char	f(unsigned int i, char c)
{
	return (ft_tolower(c));
}


int main ()
{
	char const str[] = "HELLOWORLD";
	char	*x;
	
	x = ft_strmapi(str, f);
	printf("%s", x);
	return (0);
}

**STRITERI.c**

void	f(unsigned int i, char *str)
{
	i = 0;
	str[i] = str[i] - 32;
}

int main ()
{
	char	str[] = "helloworld";
	
	printf("%s\n", str);
	ft_striteri(str, f);
	printf("%s", str);
	return (0);
}

**PUTCHAR_FD.c**

#include<fcntl.h>

int main ()
{
	int fd = open("test", O_RDWR | O_CREAT, 0777);

	ft_putchar_fd('B',fd);
	return (0);
}

**PUTSTR_FD.c**

#include<fcntl.h>

int main ()
{
	int fd = open("test1", O_RDWR | O_CREAT, 0777);

	ft_putstr_fd("BOO!",fd);
	return (0);
}

**PUTENDL_FD.c**

#include<fcntl.h>

int main ()
{
	int fd = open("test2", O_RDWR | O_CREAT, 0777);

	ft_putendl_fd("BOO!",fd);
	return (0);
}
**PUTNBR_FD.c**

#include<fcntl.h>

int main ()
{
	int fd = open("test3", O_RDWR | O_CREAT, 0777);

	ft_putnbr_fd(515,fd);
	return (0);
}

**LSTNEW.c**

int main ()
{
	t_list	*node1;
	t_list	*node2;

	node1 = ft_lstnew("hello");
	node2 = ft_lstnew("world");
	node1->next = node2;
	printf("content: %s\nnext: %s", node1->content, node2->content);
	return (0);
}

**LST_ADD_FRONT.c**

int main()
{
	t_list **node;
	t_list *node0 = ft_lstnew("hello");
	t_list *node1 = ft_lstnew("mj");
	t_list *node2 = ft_lstnew("maroc");

	node = &node0;
	ft_lstadd_front(node, node0);
	
	ft_lstadd_front(node, node1);
	
	ft_lstadd_front(node, node2);
	printf("%s\n", node2->content);
	printf("%s\n", node2->next->content);
	printf("%s\n", node2->next->next->content);
	return (0);
}

**LSTSIZE.c**

int main ()
{
	t_list	*node1 = ft_lstnew("MJ");
	t_list	*node2 = ft_lstnew("MJ");
	t_list	*node3 = ft_lstnew("MJ");
	t_list	*node4 = ft_lstnew("MJ");

	node1->next = node2;
	node2->next = node3;
	node3->next = node4;
	node4->next = NULL;
	printf("%d", ft_lstsize(node1));
	return (0);
}


**LSTLAST**

int main ()
{
	t_list	*node = ft_lstnew("hello");
	t_list	*node1 = ft_lstnew("mj");
	t_list	*node2 = ft_lstnew("bro");
	t_list	*node3 = ft_lstnew("yes");

	node->next = node1;
	node1->next = node2;
	node2->next = node3;
	node3->next = NULL;
	printf("%s", ft_lstlast(node)->content);
	return (0);
}

**LST_ADD_BACK.c**

int main()
{
	t_list **node;
	t_list *node0 = ft_lstnew("hello");
	t_list *node1 = ft_lstnew("mj");
	t_list *node2 = ft_lstnew("maroc");

	ft_lstadd_back(node, node0);
	
	ft_lstadd_back(node, node1);

	ft_lstadd_back(node, node2);
	printf("%s", ft_lstlast((*node))->content);
	return (0);
}

**LSTDELONE.c**

void	del(void* s)
{
	ft_bzero(s, 9);
}

int main()
{
	t_list	*node = ft_lstnew(ft_strdup("hell hell"));
	printf("%s\n",node->content);
	ft_lstdelone(node, del);
	for (int i = 0; i < 9; i++)
		printf("%d",((char *)node->content)[i]);
	return (0);
}

