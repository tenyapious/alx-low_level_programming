#ifndef _PUTCHAR
#define _PUTCHAR
int _putchar(char c);
#endif

#ifndef BINARY_TO_UINT
#define BINARY_TO_UINT
unsigned int binary_to_uint(const char *b);
#endif

#ifndef PRINT_BINARY
#define PRINT_BINARY
void print_binary(unsigned long int n);
#endif

#ifndef GET_BIT
#define GET_BIT
int get_bit(unsigned long int n, unsigned int index);
#endif

#ifndef SET_BIT
#define SET_BIT
int set_bit(unsigned long int *n, unsigned int index);
#endif

#ifndef CLEAR_BIT
#define CLEAR_BIT
int clear_bit(unsigned long int *n, unsigned int index);
#endif

#ifndef FLIP_BITS
#define FLIP_BITS
unsigned int flip_bits(unsigned long int n, unsigned long int m);
#endif

#ifndef GET_ENDIANNESS
#define GET_ENDIANNESS
int get_endianness(void);
#endif
