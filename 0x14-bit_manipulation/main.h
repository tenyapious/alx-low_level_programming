#ifndef BINARY_TO_UINT_H
#define BINARY_TO_UINT_H
unsigned int binary_to_uint(const char *b);
#endif

#ifndef _STRLEN_H
#define _STRLEN_H
int _strlen(const char *s);
#endif

#ifndef IS_BIN_H
#define IS_BIN_H
int is_bin(const char *b);
#endif

#ifndef PRINT_BINARY_H
#define PRINT_BINARY_H
void print_binary(unsigned long int n);
#endif

#ifndef _PUTCHAR_H
#define _PUTCHAR_H
int _putchar(char c);
#endif

#ifndef GET_BIT_H
#define GET_BIT_H
int get_bit(unsigned long int n, unsigned int index);
#endif

#ifndef SET_BIT_H
#define SET_BIT_H
int set_bit(unsigned long int *n, unsigned int index);
#endif

#ifndef CLEAR_BIT_H
#define CLEAR_BIT_H
int clear_bit(unsigned long int *n, unsigned int index);
#endif

#ifndef GET_ENDIANNESS_H
#define GET_ENDIANNESS_H
int get_endianness(void);
#endif

#ifndef FLIP_BITS_H
#define FLIP_BITS_H
unsigned int flip_bits(unsigned long int n, unsigned long int m);
#endif
