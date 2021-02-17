// ###################################################################### 
// # DEBUG_PRINTF
// ######################################################################
#define DEBUG_PRINTF

#ifdef DEBUG_PRINTF

#include <stdio.h>

#define RESET   "\033[0m"
#define BLACK   "\033[30m"      /* Black */
#define RED     "\033[31m"      /* Red */
#define GREEN   "\033[32m"      /* Green */
#define YELLOW  "\033[33m"      /* Yellow */
#define BLUE    "\033[34m"      /* Blue */
#define MAGENTA "\033[35m"      /* Magenta */
#define CYAN    "\033[36m"      /* Cyan */
#define WHITE   "\033[37m"      /* White */

#define DEBUG(format, ...)          printf(format, ##__VA_ARGS__)
#define DEBUG_RED(format, ...)      printf(RED format RESET, ##__VA_ARGS__)
#else
#define DEBUG(format, ...)
#define DEBUG_RED(format, ...)          
#endif
