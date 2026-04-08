#ifndef LIBFT_H
# define LIBFT_H

int ft_isdigit(int ch);
int ft_isalpha(int ch);
int ft_isprint(int ch);
int ft_isascii(int ch);
int ft_isalnum(int ch);

size_t ft_strlen(const char *str);
void *ft_memset(void *ptr, int value, size_t len);
void ft_bzero(void *s, size_t n);
void *ft_memcpy(void *dst, const void *src, size_t n);
void *ft_memmove(void *dst, const void *src, size_t len);

#endif