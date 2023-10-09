/// 
/// Exercise 1-2.  Experiment to find out what happens when printf's argument
/// string contains \c, where c is some character not listed above.
/// 

#include <stdio.h>

main()
{
    printf("hello, world\y");
}

///
/// Output:
///
/// >cl ex1-2.c
/// Microsoft (R) C/C++ Optimizing Compiler Version 19.37.32822 for x86
/// Copyright (C) Microsoft Corporation.  All rights reserved.
/// 
/// ex1-2.c
/// ex1-2.c(5): warning C4129: 'y': unrecognized character escape sequence
/// Microsoft (R) Incremental Linker Version 14.37.32822.0
/// Copyright (C) Microsoft Corporation.  All rights reserved.
/// 
/// /out:ex1-2.exe
/// ex1-2.obj
/// 
/// >ex1-2.exe
/// hello, worldy
/// 