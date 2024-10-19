# Basic File IO

Process keep a list of open files

files can be opend for reading writing

eacbh file is referencedby a fikel descriptor

Tree files are opened automatically

FD0: stdin
FD1 stdout

fd22 stderr

Closed by the OS at the end of the program.


Anything you explicitly open, you should close before the end of the program.


## Open

int open (const char *pathname, int flags, [mode_t mode]
#include <fcntl.h>


## Close
retval = close(fd)

int close (int filedes)

returns 0 on success or -1 if error.

## Read

bytes_read = read(int fd, void *buffer, size_t count)

read up to count bytes from file and place into buffer

fd file descriptor

buffer: pointer to array

count: number of bytes to read

returns number of bytes read or -1 if error

# write

bytes_written = write(fd, buffer, count)

fd file descriptor

biffer pointer to array

count number of bytes to write

returns number of bytes written or -1 if error

# Example
## fileIO_lib.c
```c
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>  //For usleep function

/*
 * Return 1 if c is an upper case English letter,
 * othwerise return 0.
 */
char isUpperCaseLetter(char c);

/*
 * Convert s to lowercase, where s is a pointer
 * to a null terminated string.
 */
void toLowerCase(char * s);

/*
 * Handle exceptions that can occur in main method such
 * as file cannot be opened for reading or writing, and
 * incorrect number of command line arguments.
 */
void handleExceptions(int argc, char* argv1, FILE * fptr, FILE * fptw);

/*
 * This program will use C library functions to 
 * read an input text file name
 * as the second command line argument,
 * and (over)write an output file called output.txt
 * to the current working directory 
 * that has a lower case copy of the input file.
 */
int main(int argc, char * argv[]){

  FILE * fptr = NULL;
  FILE * fptw = NULL;
  fptr = fopen(argv[1], "r");
  fptw = fopen("output.txt", "w");  
  handleExceptions(argc, argv[1], fptr, fptw);
  
  int bufSize = 2;
  char * buffer = (char *) malloc(sizeof(char) * bufSize);
  buffer[bufSize - 1] = '\0';

  int bytesRead = fread(buffer, sizeof(char), bufSize-1, fptr);
  while(bytesRead > 0){
    buffer[bytesRead] = '\0';
    //Debug statement below for slowly displaying characters in the buffer
    //printf("%s", buffer);  fflush(stdout); usleep(250 * 1000);  //Sleep for 250 ms
    toLowerCase(buffer);
    fwrite(buffer, sizeof(char), bytesRead, fptw);
    bytesRead = fread(buffer, sizeof(char), bufSize-1, fptr);
  }

  fclose(fptr);
  fclose(fptw);
  free(buffer);
  return 0;
}

void handleExceptions(int argc, char * argv1, FILE * fptr, FILE * fptw){
  if(argc != 2){
    printf("Usage: fileIO.out <fileName>\n");
    exit(0);
  }
  
  if(fptr == NULL){
    printf("Cannot open %s for reading.\n", argv1);
    exit(0);
  }

  if(fptw == NULL){
    printf("Cannot open output.txt for writing.\n");
    exit(0);
  }
}

char isUpperCaseLetter(char c){
  char result = 0;
  if(c >= 'A' && c <= 'Z'){
    result = 1;
  }
  return result;
}

void toLowerCase(char * s){
  for(int i = 0; s[i] != '\0'; i++){
    if(isUpperCaseLetter(s[i]) == 1){
      s[i] += 32; 
    }
  }
}


```

### [Back to CS1730](https://coryborek.github.io/classes/cs1730/)