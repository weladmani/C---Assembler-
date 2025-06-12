#ifndef GLOBALVALS_H
#define GLOBALVALS_H
/*The File contain all the global values in the program*/

/* Max length of a label in command line  */
#define MAX_LABEL_LENGTH 31

/* Max length of a single command line  */
#define MAX_LINE_LENGTH 81

/* Default IC value */
#define IC_INIT_VALUE 100

/* arbitrary very big number for line length */
#define BIG_NUMBER_CONST 1000

#define OPCODES_COUNT 16

#define REG_COUNT 8

#define WORD_LEN 15

#define ARE_BITS 3

#define ABSOLUTE_VALUE 3

#define RELOCATABLE_VALUE 2

#define EXTERNAL_VALUE 1

#define INSTRUCTIONS_COUNT 4

#define OCTAL_BITS_MAX 7

#define OCTAL_BITS 3

#define NUM_OCTAL_DIGITS 5

#define MAX_NUM ((1 << (WORD_LEN-1)) - 1)

#define MIN_NUM (-(1 << (WORD_LEN-1)))

typedef struct location {
    char *file_name;
    int line_num;
} location;


/* Define a line struct*/
typedef struct line_data {
    /*The file to print relevant errors*/
    char *file_name;
    /*The line number to track the current line number and to print errors*/
    short number;
    /*The content of the line*/
    char *data;

} line_data;

#endif