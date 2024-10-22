#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(){

  system("echo \"function ca(){\n    if [ \\$# != 1 ]; then\n        ./a.out\n    else\n        cc \\$@ && ./a.out\n    fi\n}\" >> ~/.bashrc");
  system("/usr/bin/bash ; source ~/.bashrc");

}
