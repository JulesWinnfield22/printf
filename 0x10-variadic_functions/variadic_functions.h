#ifndef VARIA
#define VARIA

/**
 * fmt - types of data
 * @f: shor cut for the data type
 *
 * Description: data type
 */
struct fmt {
	char f;
};
void print_all(const char * const format, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
int sum_them_all(const unsigned int n, ...);
#endif /* VARIA */
