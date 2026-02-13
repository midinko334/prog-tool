#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(){

  system("sudo echo \"\nxmodmap -e 'keycode 66 = 0x0000'\" >> /etc/rc.local");

}
