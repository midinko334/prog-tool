#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(){

  system("echo \"\nxmodmap -e 'keycode 66 = 0x0000'\n\" >> ~/.bashrc");
  system("/usr/bin/bash ; source ~/.bashrc");

}
