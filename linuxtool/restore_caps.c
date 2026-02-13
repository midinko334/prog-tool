#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(){

  system("sudo echo DeletingStart");

  system("systemctl disable --user kill_caps.service");

  system("sudo rm /etc/systemd/system/kill_caps.service");

  printf("Program Finished\n");

  return 0;

}
