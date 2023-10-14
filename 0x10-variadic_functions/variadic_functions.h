#ifndef MY_HEADER_H
#define MY_HEADER_H
#define VA_START(ap, last_arg) ((ap) = (va_list)&(last_arg) + sizeof(last_arg))
#define VA_ARG(ap, type) (*(type*)((ap) += sizeof(type), (ap) - sizeof(type)))
#define VA_END(ap) ((void)(ap))
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif
