system("sudo mkdir /usr/share/dare-devil/");
void *soul_cap="/usr/share/dare-devil/Soul_data.txt";
void create_soul(void *user_name,short int uid,char souls,char level){
        void *level_name,*devil_name;
	if(level==0x1)
		level_name="Sinister";
	else
		level_name="Infernoo";
	srand(time(0));
	if(rand()%0xa==0x0){
	        devil_name="𐌔𐌀𐌕𐌀𐌍";
	}
	else if(rand()%0xa==0x1){
		devil_name="𐌋𐌵𐌂𐌉𐌅𐌄𐌓";
	}
	else if(rand()%0xa==0x2){
	        devil_name="𐌁𐌄𐌋𐌉𐌀𐌋";
	}
	else if(rand()%0xa==0x3){
		devil_name="𐌁𐌄𐌄𐌋Ɀ𐌄𐌁𐌵𐌁";
	}
	else if(rand()%0xa==0x4){
                devil_name="𐌋𐌄ᕓ𐌉𐌀𐌕𐋅𐌀𐌍";
	}
        else if(rand()%0xa==0x5){
                devil_name="𐌀𐌔𐌕𐌀𐌓Ꝋ𐌕𐋅";
	}
        else if(rand()%0xa==0x6){
                devil_name="𐌌𐌀𐌌𐌌Ꝋ𐌍";
	}
        else if(rand()%0xa==0x7){
                devil_name="𐌀Ɀ𐌀Ɀ𐌄𐌋";
	}
        else if(rand()%0xa==0x8){
                devil_name="𐌀𐌔𐌌Ꝋ𐌃𐌄𐌵𐌔";
	}
        else if(rand()%0xa==0x9){
                devil_name="𐌁𐌵𐌄𐌓";
	}
        else{ 
                devil_name="𐌓𐌀ᕓ𐌀𐌍𐌀";
	}
	FILE *fd=fopen(soul_cap,"w");
        fprintf(fd,"                                       ⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡄\n");//
        fprintf(fd,"                                       ⢻⣦⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⣀⠤⠤⠴⢶⣶⡶⠶⠤⠤⢤⣀⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣠⣾⠁\n");//
        fprintf(fd,"                                        ⠻⣯⡗⢶⣶⣶⣶⣶⢶⣤⣄⣀⣀⡤⠒⠋⠁⠀⠀⠀⠀⠚⢯⠟⠂⠀⠀⠀⠀⠉⠙⠲⣤⣠⡴⠖⣲⣶⡶⣶⣿⡟⢩⡴⠃\n");//				
        fprintf(fd,"                                         ⠈⠻⠾⣿⣿⣬⣿⣾⡏⢹⣏⠉⠢⣄⣀⣀⠤⠔⠒⠊⠉⠉⠉⠉⠑⠒⠀⠤⣀⡠⠚⠉⣹⣧⣝⣿⣿⣷⠿⠿⠛⠉\n");//
        fprintf(fd,"                                               ⣹⠟⠛⠿⣿⣤⡀⣸⠿⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⠾⣇⢰⣶⣿⠟⠋⠉⠳⡄\n");// 
        fprintf(fd,"                                             ⢠⡞⠁⠀⠀⡠⢾⣿⣿⣯⠀⠈⢧⡀⠀⠀⠀⠀⠀⠀⠀⢀⡴⠁⢀⣿⣿⣯⢼⠓⢄⠀⢀⡘⣦⡀\n");//
	fprintf(fd,"                                            ⣰⣟⣟⣿⣀⠎⠀⠀⢳⠘⣿⣷⡀⢸⣿⣶⣤⣄⣀⣤⢤⣶⣿⡇⢀⣾⣿⠋⢀⡎⠀⠀⠱⣤⢿⠿⢷⡀\n");//
	fprintf(fd,"                                           ⣰⠋⠀⠘⣡⠃⠀⠀⠀⠈⢇⢹⣿⣿⡾⣿⣻⣖⠛⠉⠁⣠⠏⣿⡿⣿⣿⡏⠀⡼⠀⠀⠀⠀⠘⢆⠀⠀⢹⡄\n");//
        fprintf(fd,"                                          ⢰⠇⠀⠀⣰⠃⠀⠀⣀⣀⣀⣼⢿⣿⡏⡰⠋⠉⢻⠳⣤⠞⡟⠀⠈⢣⡘⣿⡿⠶⡧⠤⠄⣀⣀⠀⠈⢆⠀⠀⢳⠀\n");//
        fprintf(fd,"                                          ⡟⠀⠀⢠⣧⣴⣊⣩⢔⣠⠞⢁⣾⡿⢹⣷⠋⠀⣸⡞⠉⢹⣧⡀⠐⢃⢡⢹⣿⣆⠈⠢⣔⣦⣬⣽⣶⣼⣄⠀⠈⣇ \n");//
        fprintf(fd,"                                         ⢸⠃⠀⠘⡿⢿⣿⣿⣿⣛⣳⣶⣿⡟⣵⠸⣿⢠⡾⠥⢿⡤⣼⠶⠿⡶⢺⡟⣸⢹⣿⣿⣾⣯⢭⣽⣿⠿⠛⠏⠀⠀⢹⠀\n");//	
	fprintf(fd,"                                         ⢸⠀⠀⠀⡇⠀⠈⠙⠻⠿⣿⣿⣿⣇⣸⣧⣿⣦⡀⠀⣘⣷⠇⠀⠄⣠⣾⣿⣯⣜⣿⣿⡿⠿⠛⠉⠀⠀⠀⢸⠀⠀⢸⡆\n");//
        fprintf(fd,"                                         ⢸⠀⠀⠀⡇⠀⠀⠀⠀⣀⠼⠋⢹⣿⣿⣿⡿⣿⣿⣧⡴⠛⠀⢴⣿⢿⡟⣿⣿⣿⣿⠀⠙⠲⢤⡀⠀⠀⠀⢸⡀⠀⢸⡇\n");//	
        fprintf(fd,"                                         ⢸⣀⣷⣾⣇⠀⣠⠴⠋⠁⠀⠀⣿⣿⡛⣿⡇⢻⡿⢟⠁⠀⠀⢸⠿⣼⡃⣿⣿⣿⡿⣇⣀⣀⣀⣉⣓⣦⣀⣸⣿⣿⣼⠁\n");//
        fprintf(fd,"                                         ⠸⡏⠙⠁⢹⠋⠉⠉⠉⠉⠉⠙⢿⣿⣅⠀⢿⡿⠦⠀⠁⠀⢰⡃⠰⠺⣿⠏⢀⣽⣿⡟⠉⠉⠉⠀⠈⠁⢈⡇⠈⠇⣼ \n");//
        fprintf(fd,"                                          ⢳⠀⠀⠀⢧⠀⠀⠀⠀⠀⠀⠈⢿⣿⣷⣌⠧⡀⢲⠄⠀⠀⢴⠃⢠⢋⣴⣿⣿⠏⠀⠀⠀⠀⠀⠀⠀⡸⠀⠀⢠⠇ \n");//
	fprintf(fd,"                                          ⠈⢧⠀⠀⠈⢦⠀⠀⠀⠀⠀⠀⠈⠻⣿⣿⣧⠐⠸⡄⢠⠀⢸⠀⢠⣿⣟⡿⠋⠀⠀⠀⠀⠀⠀⠀⡰⠁⠀⢀⡟ \n");//
        fprintf(fd,"                                           ⠈⢧⠀⠀⠀⠣⡀⠀⠀⠀⠀⠀⠀⠈⠛⢿⡇⢰⠁⠸⠄⢸⠀⣾⠟⠉⠀⠀⠀⠀⠀⠀⠀⢀⠜⠁⠀⢀⡞ \n");//
        fprintf(fd,"                                            ⠈⢧⡀⠀⠀⠙⢄⠀⠀⠀⠀⠀⠀⠀⢨⡷⣜⠀⠀⠀⠘⣆⢻⠀⠀⠀⠀⠀⠀⠀⠀⡴⠋⠀⠀⣠⠎⠀\n");//
        fprintf(fd,"                                              ⠑⢄⠀⠀⠀⠑⠦⣀⠀⠀⠀⠀⠈⣷⣿⣦⣤⣤⣾⣿⢾⠀⠀⠀⠀⠀⣀⠴⠋⠀⠀⢀⡴⠃ \n");//
	fprintf(fd,"                                               ⠈⠑⢄⡀⢸⣶⣿⡑⠂⠤⣀⡀⠱⣉⠻⣏⣹⠛⣡⠏⢀⣀⠤⠔⢺⡧⣆⠀⢀⡴⠋ \n");//
	fprintf(fd,"                                                  ⠉⠳⢽⡁⠀⠀⠀⠀⠈⠉⠙⣿⠿⢿⢿⠍⠉⠀⠀⠀⠀⠉⣻⡯⠛⠁ \n");//
	fprintf(fd,"                                                     ⠈⠑⠲⠤⣀⣀⡀⠀⠈⣽⡟⣼⠀⣀⣀⣠⠤⠒⠋⠁ \n");//
	fprintf(fd,"                                                           ⠉⠉⠉⢻⡏⠉⠉⠁    \n");//
        fprintf(fd,"                                                              ⠈⠀    \n");//	    
	fprintf(fd,"                                                  ︻デ═一 ᦔꪖ᥅ꫀ ᦔꫀꪜ꠸ꪶ 一═デ︻\n\n");
	fprintf(fd,"                         ᦓꪮꪊꪶ᥇ꫀꪖ᥅ꫀ᥅: %s                             ꪶꫀꪜꫀꪶ: %s\n\n",user_name,level_name);
	fprintf(fd,"                                                          ᦓꪮꪊꪶᦓ: %d\n\n",souls);
	fprintf(fd,"                          ᦓꪮꪊꪶ'ᦓ ꫀᦓᦓꫀꪀᥴꫀ: %d                                ᦔꫀꪜ꠸ꪶ: %s\n\n",uid,devil_name);
	if(souls>0x32){
	fprintf(fd,"                          [+] More souls for another round? but the game must go on...\n");
	}
	else if(souls<0x32){
	fprintf(fd,"                          [-] Your souls are loosing round. Soo the soul will be my...\n");
	}
	else{
        fprintf(fd,"                          [*] Next round wil resolve souls. May bee good else or lose.\n");	
	}
        fclose(fd);
}	
