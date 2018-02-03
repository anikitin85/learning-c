#include <stdio.h>

/*  Constants */
int main()
{
    // Non-FP are integers:         123     (INT - DEFAULT)
    // u or U - unsigned:           123U    (UNSIGNED INT)
    // l or L - long:               123L    (LONG)
    // ul or UL - unsigned long:    123UL   (UNSIGNED LONG)
    // FP are double:               123.4   (DOUBLE - DEFAULT)
    // Numbers with exponent:       123e-4  (DOUBLE - DEFAULT)
    // f or F - float:              123.4F  (FLOAT)
    // l or L for long double:      123.4L  (LONG DOUBLE)

    // Leading zero - octal:        0123    (OCTAL)
    // Zero + x - hexadecimal:      0x123   (HEXADECIMAL)
    // U and/or L possible:         0xFUL   (dec 15, unsigned long)

    // character constant:          'x'     (INT)
    // octal possible:              '\013'  (OCTAL)
    // hexadecimal possible:        '\xFF'  (HEXADECIMAL)
    // Examples:
    //      #define VTAB '\013'             (ASCII VERTICAL TAB)
    //      #define BELL '\007'             (ASCII BELL CHARACTER)

    // ALL ESCAPE SEQUENCES FOR CHAR:
    /*  \a  alert (bell)
        \b  backspace
        \f  formfeed
        \n  newline
        \r  carriage return
        \t  horizaontal tab
        \v  vertical tab
        \\  backslash
        \?  question mark
        \'  single quote
        \"  double quote
        \123 octal
        \xAB hexadecimal    */

    //it works! UPPERCASE TO LOWERCASE
    for (char c = 'A'; c <= 'Z'; c++) {
        printf("%c -> %c\n", c, c + ' ');    
    }
}