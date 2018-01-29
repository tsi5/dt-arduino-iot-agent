/**
 * @file DTCoTDebugOutput.h
 * @description Global debug defines. Change these to change the debug logging target.
 * @author Andreas Krause
 * @copyright (C) 2018 mm1 Technology GmbH - all rights reserved. 
 * @licence MIT licence
 * 
 * Find out more about mm1 Technology:
 * Company: http://mm1-technology.de/
 * GitHub:  https://github.com/mm1technology/
 */

#ifndef DEBUG_PRINT_h_
#define DEBUG_PRINT_h_

#include <Arduino.h>
#include <stdarg.h>
void debug_printf(String format, ...);
/**
 * Debug levels.
 * 0 - never print anything
 * 1 - only print critical logs
 * 2 - print debug logs also
 * 3 - print informational logs also
 */
#define DEBUG_LEVEL 2

#define DEBUG_PRINT(...) //
#define DEBUG_PRINT_INFO(...) //

#if DEBUG_LEVEL == 1 //
	#undef DEBUG_PRINT
	#define DEBUG_PRINT(...) debug_printf(__VA_ARGS__)
#elif DEBUG_LEVEL == 2 //
	#undef DEBUG_PRINT
	#undef DEBUG_PRINT_INFO
	#define DEBUG_PRINT(...) debug_printf(__VA_ARGS__)
	#define DEBUG_PRINT_INFO(...) debug_printf(__VA_ARGS__)
#endif

#endif
