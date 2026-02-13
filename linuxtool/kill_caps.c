#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(){

  system("sudo echo MakingStart\n");

  system("echo \"[Unit]\" | sudo tee /etc/systemd/system/kill_caps.service");
  system("echo \"Description=Kill Caps Service\" | sudo tee -a /etc/systemd/system/kill_caps.service");
  
  system("echo \"\n[Service]\" | sudo tee -a /etc/systemd/system/kill_caps.service");
  system("echo \"Type=oneshot\" | sudo tee -a /etc/systemd/system/kill_caps.service");
  system("echo \"ExecStart=/usr/bin/setxkbmap -option ctrl:nocaps\" | sudo tee -a /etc/systemd/system/kill_caps.service");
  system("echo \"RemainAfterExit=yes\" | sudo tee -a /etc/systemd/system/kill_caps.service");
  
  system("echo \"\n[Install]\" | sudo tee -a /etc/systemd/system/kill_caps.service");
  system("echo \"WantedBy=default.target\" | sudo tee -a /etc/systemd/system/kill_caps.service");

  system("systemctl --user enable /etc/systemd/system/kill_caps.service");
  system("systemctl --user start kill_caps.service");

  printf("Program Finished\n");

  return 0;

}
