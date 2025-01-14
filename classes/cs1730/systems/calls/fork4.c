#include  <stdio.h>
#include  <sys/types.h>
#include  <unistd.h>

/*
 * MAX_COUNT is the number of iterations
 * the parent process and child proces will print
 * their messages before they print that they are done.
 */
#define MAX_COUNT  100

void  childProcess();                /* child process prototype  */
void  parentProcess();               /* parent process prototype */

// Global loop counter
int i = 1;

// This program demos output interleaving for a parent and child process.
int main(void){
  pid_t  pid;

  pid = fork(); //returns the process id of the child for parent
  if (pid == 0){  
    childProcess();
  }
  else{
    //printf("%d\n", pid);
    parentProcess();
  }
  return 0;
}

void childProcess(){
  //sleep(1);
  for(; i <= MAX_COUNT; i++){
    printf("   This line is from child, value = %d\n", i);
  }
  printf("   *** Child process is done ***\n");
}

void parentProcess(){
  for(; i <= MAX_COUNT; i++){
    printf("This line is from parent, value = %d\n", i);
  }
  printf("*** Parent is done ***\n");
}