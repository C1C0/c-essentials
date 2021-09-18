/** Everything starting with "#" is called --preprocessor directive--
 * separate part of compiler
 * its taks ? pre-load the text of the program and make som modifications to it
*/

/**
 * include directive
 *
 * when preprocessor reaches this directive, replaces the directive with the
 * source code inside selected file
 *
 * e.g. "stdio.h"
 *
 * Note: preprocessor never modifies the content
 * preprocessor uses volatile copy of the file, which is deleteed immediately
 * after
 * compiling is done
 *
 * note: .h stands for "header" -> header files
 */
#include <stdio.h>

/**
 * neccessary for c source file to run
 *
 * return type (int), name of fucntion, arguments => prototype
 */
int main(void) {

  /**
   * Call the funtion puts
   *
   * called: "FUNCTION INVOCATION"
   */
  puts("It's me, your first program.");

  /**
   * 0 - everything good
   * 1 - hups ...
   */
  return 0;
}