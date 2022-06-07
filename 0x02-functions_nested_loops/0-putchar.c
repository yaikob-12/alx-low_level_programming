#include"main.h"
/**
 * main - prints the string "_putchar" from a character array.
 * Return: 0 on success.
 */
int main (void){

        char ch[10] = "_putchar";

	int i=0;

        for(i=0; i<9; i++)
        {
          _putchar (ch[i]);
        }
        _putchar ('\n');

        return (0);
        }
