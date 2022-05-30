/*

An instance of an executing program is called a process.
Each process has a unique process id and also keeps track of its parent process's process id.
Virtual memory of a process is logically divided into four segments:
Text, data, Stack and Heap.
Frames are added onto stack as functions are invoked and removed as functions complete execution. Each frame consts of local variables, function arguments, call linkage information and frames for a single function invocation. Command line arguments are available as argc and argv.

*/

#include <stdio.h>
#include <unistd.h>

int main(){
  int process_id,parent_process_id;
  process_id = getpid();
  parent_process_id = getppid();

  printf("Process id: %d",process_id);
  printf("Parent process id: %d",parent_process_id);
}