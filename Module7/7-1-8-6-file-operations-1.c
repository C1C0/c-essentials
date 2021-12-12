/**
 * @file 7-1-8-6-file-operations-1.c
 * @author your name (you@domain.com)
 * @brief Scenario
Write a program that copies itself and adds line numbers to each line.
 You can (for now, to simplify your task, of course) assume constant file names.

First, open the file in read mode, then open the copy file in write mode.
 After that, line by line, get the lines from the source file, append the number
of the line to
 the destination file, and append the line content.

Remember to close both files.

Note: in a real program, it's important to check whether all the needed files
 exist and that you can create a copy. In our program, you should at least check
that both files have been successfully opened.

If one of the fopen functions fails, then print the message: Error opening a
file. and end the program.

Expected output
Copy of source file with line numbers.
 * @version 0.1
 * @date 2021-12-11
 *
 * @copyright Copyright (c) 2021
 *
 */

#include <stdio.h>
#include <errno.h>
#include <string.h>
#include <stdlib.h>

extern int errno;

void openFile();
char *getValueFromEnv(char *key);
void replaceLastChar(char *str, char replaceWith);

int main() {

  FILE *from;
  FILE *to;
  
  char pathToFiles[255];
  char filePath[255];
  char buffer[1024];

  int lineNum = 1;

  strcpy(pathToFiles, getValueFromEnv("FILES_DIR"));
  strcpy(filePath, pathToFiles);

  strcat(filePath, "from.txt");
  if ((from = fopen(filePath, "r")) == NULL) {
    fprintf(stderr, "File error: %s", strerror(errno));
    return EXIT_FAILURE;
  }

  strcpy(filePath, pathToFiles);
  strcat(filePath, "to.txt");
  if ((to = fopen(filePath, "w")) == NULL) {
    fprintf(stderr, "File error: %s", strerror(errno));
    return EXIT_FAILURE;
  }


  while(fgets(buffer, __INT_MAX__, from)){
    fprintf(to, "%d %s", lineNum++, buffer);
  }


  fclose(from);
  fclose(to);

  return 0;
}

char *getValueFromEnv(char *key) {
  FILE *env;
  char line[255];
  char *key_compare;
  char *value = NULL;
  int index = 0;

  if ((env = fopen("C:\\Users\\kpsko\\Documents\\School\\1sem\\C essentials "
                   "course\\Module7\\.env",
                   "rt")) == NULL) {
    fprintf(stderr, ".env file not found: %s", strerror(errno));
    exit(EXIT_FAILURE);
  }

  while (fgets(line, 255, env)) {
    // printf("%s\n", line);
    key_compare = strtok(line, "=");

    while (key_compare[index]) {

      // if value is different,
      if (key[index] != key_compare[index]) {
        break;
      }

      index++;

      // if a both pointers reach end -> key found
      if (!key[index] && !key_compare[index]) {
        fseek(env, 0, SEEK_SET);
        goto keyFound;
      }
    }
  }

keyFound:
  if (!ftell(env)) {
    value = strtok(NULL, "");
    replaceLastChar(value, 0);
    // printf("tmp: %s", value);
  }

  fclose(env);

  return value;
}

void replaceLastChar(char *str, char replaceWith) {
  str[strlen(str) - 1] = replaceWith;
}
