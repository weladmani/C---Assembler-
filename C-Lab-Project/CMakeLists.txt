cmake_minimum_required(VERSION 3.28)
project(C_Lab_Project C)

set(CMAKE_C_STANDARD 11)

add_executable(C_Lab_Project
        "Source Files/util.c"
        "Source Files/Errors.c"
        "Header Files/errors.h"
        "Header Files/globalvals.h"
        "Source Files/table.c"
        "Header Files/table.h"
        "Source Files/lexer.c"
        "Source Files/preproc.c"
        "Source Files/data_struct.c"
        "Source Files/texthandle.c"
        "Source Files/secondpass.c"
        "Source Files/firstpass.c"
        "Source Files/assembler.c"
        "Header Files/util.h"
        "Header Files/texthandle.h"
        "Header Files/secondpass.h"
        "Header Files/preproc.h"
        "Header Files/lexer.h"
        "Header Files/firstpass.h"
        "Header Files/data_struct.h"
        "Header Files/code_conv.h"
        "Source Files/code_conv.c")
