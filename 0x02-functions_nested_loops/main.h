#ifndef main_h
#define main_h

/**
 * _putchar - the function which prints out putchar
 * Return: 0
 * print_alphabet - the function which prints out alphabets
 * print_alphabet_x10 - the function which prints out alphabets 10
 * _islower - the function which prints out islower
 * _isalpha - the function which prints out isalpha
 * @char: this looks out for char
 * print_sign - this prints out signs
 * _abs - print
 * print_last_digit
 * jack_bauer - print
 * times_table - print
 * print_times_table - this prints
 * add - this prints additions
 * print_to_98: print
 */

int _putchar(char);
void print_alphabet(void);
void print_alphabet_x10(void);
int _islower(int c);
int _isalpha(int c);
int print_sign(int n);
int _abs(int n);
int print_last_digit(int n);
void jack_bauer(void);
void times_table(void);
void print_times_table(int n);
int add(int a, int b);
void print_to_98(int n);

#endif
