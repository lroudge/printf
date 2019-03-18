#include "holberton.h"
#include <stdio.h>
#include <limits.h>

void tusBasicTester();
void tusAdvancedTester();

int main(void)
{

    	tusBasicTester();
    	//tusAdvancedTester();
	return (0);
}


void tusBasicTester()
{
	// NULL
	printf(NULL);
	_printf(NULL);
	printf("START OF TEST\n");

	//char
	char c = 'z';
	int alen, elen;
	printf("=====================\n");
	printf("*****CHAR*****\n");
	printf("=====================\n");
	printf("Expected   : %c\n", 'a');
	_printf("Actual     : %c\n", 'a');
	elen = printf("Expected   : %c\n", c);
	alen = _printf("Actual     : %c\n", c);
	printf("Expected   : %i\n", elen);
	_printf("Actual     : %i\n", alen);
	printf("Expected   : %cc\n", 'a');
	_printf("Actual     : %cc\n", 'a');
	printf("Expected   : %c\n", 53);
	_printf("Actual     : %c\n", 53);
	printf("Expected   : %c.\n", '\0');
	_printf("Actual     : %c.\n", '\0');

	//strings
	printf("=====================\n");
	printf("*****STRINGS*****\n");
	printf("=====================\n");
	char *str = "hello, world";
	alen = elen = 0;
	printf("Expected   : %s\n", "holberton");
	_printf("Actual     : %s\n", "holberton");
	printf("Expected   : %s$\n", "");
	_printf("Actual     : %s$\n", "");
	elen = printf("Expected   : %s\n", str);
	alen = _printf("Actual     : %s\n", str);
	printf("Expected   : %s$\n", NULL);
	_printf("Actual     : %s$\n", NULL);
	printf("Expected   : %i\n", elen);
	_printf("Actual     : %i\n", alen);
	printf("Expected   : %sschool\n", "holberton");
	_printf("Actual     : %sschool\n", "holberton");

	//%%
	alen = elen = 0;
	printf("=====================\n");
	printf("*****PERCENT*****\n");
	printf("=====================\n");
	printf("Expected   : %%\n");
	_printf("Actual     : %%\n");
	elen = printf("Expected   : %%%%\n");
	alen = _printf("Actual     : %%%%\n");
	printf("Expected   : %i\n", elen);
	_printf("Actual     : %i\n", alen);
	// printf("Expected   :");
	// printf("%");
	// printf("\n");
	// printf("Actual     :");
	// _printf("%");
	// printf("\n");

	//i
	printf("=====================\n");
	printf("*****INTEGER*****\n");
	printf("=====================\n");
	alen = elen = 0;
	int p = 237482;
	int n = -328472;
	int z = 0;
	elen = printf("Expected   : %i\n", p);
	alen = _printf("Actual     : %i\n", p);
	printf("Expected   : %i\n", elen);
	_printf("Actual     : %i\n", alen);
	elen = printf("Expected   : %i\n", n);
	alen = _printf("Actual     : %i\n", n);
	printf("Expected   : %i\n", elen);
	_printf("Actual     : %i\n", alen);
	elen = printf("Expected   : %i\n", z);
	alen = _printf("Actual     : %i\n", z);
	printf("Expected   : %i\n", elen);
	_printf("Actual     : %i\n", alen);
	printf("Expected   : %i\n", INT_MAX);
	_printf("Actual     : %i\n", INT_MAX);
	printf("Expected   : %i\n", INT_MIN);
	_printf("Actual     : %i\n", INT_MIN);

	//d
	printf("=====================\n");
	printf("*****DECIMAL*****\n");
	printf("=====================\n");
	alen = elen = 0;
	p = 1134001;
	n = -4567;
	z = 0;
	elen = printf("Expected   : %d\n", p);
	alen = _printf("Actual     : %d\n", p);
	printf("Expected   : %d\n", elen);
	_printf("Actual     : %d\n", alen);
	elen = printf("Expected   : %d\n", n);
	alen = _printf("Actual     : %d\n", n);
	printf("Expected   : %d\n", elen);
	_printf("Actual     : %d\n", alen);
	elen = printf("Expected   : %i\n", z);
	alen = _printf("Actual     : %i\n", z);
	printf("Expected   : %i\n", elen);
	_printf("Actual     : %i\n", alen);
	printf("Expected   : %d\n", INT_MAX);
	_printf("Actual     : %d\n", INT_MAX);
	printf("Expected   : %d\n", INT_MIN);
	_printf("Actual     : %d\n", INT_MIN);

	//u
	printf("=====================\n");
	printf("*****UNSIGNED*****\n");
	printf("=====================\n");
	unsigned int uelen = 0;
	unsigned int ualen = 0;
	unsigned int m = 113342421;
	z = 0;
	elen = printf("Expected   : %u\n", m);
	alen = _printf("Actual     : %u\n", m);
	printf("Expected   : %u\n", elen);
	_printf("Actual     : %u\n", alen);
	uelen = printf("Expected   : %u\n", z);
	ualen = _printf("Actual     : %u\n", z);
	printf("Expected   : %u\n", uelen);
	_printf("Actual     : %u\n", ualen);
	printf("Expected   : %u\n", z);
	_printf("Actual     : %u\n", z);
	printf("Expected   : %u\n", INT_MAX);
	_printf("Actual     : %u\n", INT_MAX);
	printf("Expected   : %u\n", INT_MIN);
	_printf("Actual     : %u\n", INT_MIN);
	printf("=====================\n");

	//combos
	printf("Expected   : %u, %i, %c, %d, %s\n", INT_MIN, 324, 'g', 32, "hello");
	_printf("Expected   : %u, %i, %c, %d, %s\n", INT_MIN, 324, 'g', 32, "hello");
	return;
}

void tusAdvancedTester()
{
	printf("START OF TEST\n");
	
	//b
	printf("=====================\n");
	printf("*****BINARY*****\n");
	printf("=====================\n");
	int b = 4312;
	int alen, elen;
	printf("Expected   : %i\n", 1111011);
	_printf("Actual     : %b\n", 123);
	elen = printf("Expected   : %lu\n", 1000011011000);
	alen = _printf("Actual     : %b\n", b);
	printf("Expected   : %i\n", elen);
	_printf("Actual     : %i\n", alen);
	printf("Expected   : %i\n", 0);
	_printf("Actual     : %b\n", 0);

	//x	
	int h = 32425;
	printf("=====================\n");
	printf("*****HEXA*****\n");	
	printf("=====================\n");
	printf("Expected   : %x\n", 995);
	_printf("Actual     : %x\n", 995);
	printf("Expected   : %x\n", -995);
	_printf("Actual     : %x\n", -995);
	elen = printf("Expected   : %x\n", h);
	alen = _printf("Actual     : %x\n", h);
	printf("Expected   : %i\n", elen);
	_printf("Actual     : %i\n", alen);
	printf("Expected   : %x\n", INT_MAX);
	_printf("Actual     : %x\n", INT_MAX);
	printf("Expected   : %x\n", INT_MIN);
	_printf("Actual     : %x\n", INT_MIN);
	printf("Expected   : %x\n", 0);
	_printf("Actual     : %x\n", 0);

	//X
	h = 224211;
	printf("=====================\n");
	printf("*****HEXA_BIG*****\n");
	printf("=====================\n");
	printf("Expected   : %X\n", 81);
	_printf("Actual     : %X\n", 81);
	printf("Expected   : %X\n", -1001);
	_printf("Actual     : %X\n", -1001);
	elen = printf("Expected   : %X\n", h);
	alen = _printf("Actual     : %X\n", h);
	printf("Expected   : %X\n", elen);
	_printf("Actual     : %X\n", alen);
	printf("Expected   : %X\n", INT_MAX);
	_printf("Actual     : %X\n", INT_MAX);
	printf("Expected   : %X\n", INT_MIN);
	_printf("Actual     : %X\n", INT_MIN);
	printf("Expected   : %X\n", 0);
	_printf("Actual     : %X\n", 0);

	//o
	int o = 54352;
	printf("=====================\n");
	printf("*****OCTAL*****\n");
	printf("=====================\n");
	printf("Expected   : %o\n", o);
	_printf("Actual     : %o\n", o);
	printf("Expected   : %o\n", -991);
	_printf("Actual     : %o\n", -991);
	elen = printf("Expected   : %o\n", h);
	alen = _printf("Actual     : %o\n", h);
	printf("Expected   : %o\n", elen);
	_printf("Actual     : %o\n", alen);
	printf("Expected   : %o\n", INT_MAX);
	_printf("Actual     : %o\n", INT_MAX);
	printf("Expected   : %o\n", INT_MIN);
	_printf("Actual     : %o\n", INT_MIN);
	printf("Expected   : %o\n", 0);
	_printf("Actual     : %o\n", 0);

	//pointers
	printf("=====================\n");
	printf("*****POINTERS*****\n");
	printf("=====================\n");
	int i = 98;
	int *cp;
	cp = &i;
	void *vp = NULL;
	printf("Expected   : %p\n", cp);
	_printf("Actual     : %p\n", cp);
	printf("Expected   : %p\n", vp);
	_printf("Actual     : %p\n", vp);

	return;
}
