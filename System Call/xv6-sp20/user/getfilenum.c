 #include "types.h"
 #include "stat.h"
 #include "user.h"
   
int main(int argc, char* argv[]){
 //check if argc is correct
 if(argc != 1){
  printf(1, "error provided argument are invalid\n");
  exit();
 }

 int openFiles = getfilenum(getpid());
 printf(1,"%d\n", openFiles);
 exit();
}

