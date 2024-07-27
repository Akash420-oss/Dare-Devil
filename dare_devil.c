#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<unistd.h>
#include<signal.h>
#include"custom_fun.h"
#include"devil_art.h"
#include"create_soul_data.h"
#include"system_crash.h"
struct user{
short int uid;
char souls;
char highscore;
char level;
//short int v;
};
void *user_name;
char heap;
void welcome_theme();
char menu_theme();
void save_souls(void *);
char *soul_val_get();
void level_change_data(char);
char check_file();
void sinister_mode(char);
void infernoo_mode(char);
void fake_infernoo_mode(char);
void sinister_main_mode(char);
void sinister_stack_mode1(char);
void sinister_stack_mode2(char);
void sinister_stack_mode3(char);
void fake_sinister(char);
int main(){
if(getuid()==0x0){
if(check_file()==0x0){
	struct user access_mem,*player;
	player=&access_mem;
	welcome_theme();
	*((short int *)player)=getuuid();
	*((char *)&access_mem+0x2)=0x63;
	printf("\n");
	printf("\033[1;31m𐌃𐌀𐌓𐌄 𐌙Ꝋ𐌵 𐌕Ꝋ 𐌄𐌍𐌕𐌄𐌓 𐌙Ꝋ𐌵𐌓 𐌍𐌀𐌌𐌄 ->\033[0m\033[0;31m ");
	scanf("%[^\n]%c",(char *)&user_name);
        printf("\033[0;31m\033[5m𝑦ₒᵤ'ᵥₑ ⱼᵤ𝑠𝑡 𝑏ₐ𝑔𝑔ₑ𝑑 𝑦ₒᵤᵣ𝑠ₑԼ𝑓 ᖗᖗ 𝑠ₒᵤԼ𝑠...\033[0m\n");
	sleep(3);//⠀
        devil_welcome();
	scanf("%d",((char *)player+0x3));
	sleep(1);
	printf("\033[1;31mꫀꪑ᥇᥅ꪖᥴꫀ ꪗꪮꪊ᥅ ꠸ꪀꪀꫀ᥅ ᦔꫀꪑꪮꪀᦓ ᥇ꪗ ᥴꫝꪮꪮᦓ꠸ꪀᧁ ᠻꫀꪖ᥅ ꪑꪮᦔꫀ[ᦓ꠸ꪀ꠸ᦓꪻꫀ᥅/꠸ꪀᠻꫀ᥅ꪀꪮ]⭄ \033[0m \033[0;31m");
	scanf("%hd",((char *)&access_mem+0x5));
	create_soul(&user_name,access_mem.uid,*((char *)&access_mem+0x2),*((char *)&access_mem+0x5));
	printf("%d\n",*(((char *)&access_mem+0x5)));
	if(*((char *)&access_mem+0x5)==0x1){
		sinister_main_mode(*((char *)&access_mem+0x3));
	}
	else{
		infernoo_mode(*((char *)&access_mem+0x3));
	}
	menu_theme();
}
//menu_theme();
else{
    menu_theme();
}
}
else{
	normal_usr();
}
	return 0;
}
void welcome_theme(){
	system("clear");
	printf("\n\t\t\t\033[0;31m▄︻デ--=-\033[0m\033[1;31m{ⱲēłȻꝋᵯē<<<ȾꝊ>>>ĐⱥꞦē->đɆꝞīł}\033[0m\033[0;31m-=--═══━一\033[0m\n");
	printf("\n\t\t\t\t\033[0;31m     ·ᰄ· <-ƦᑌしⲈⱾ-> ·ᰄ·\033[0m\n");
	printf("\n");
        printf("\033[0;32m1) In this game, first declare your name and claim 100 souls and prove your fearless spirit!\033[0m\n");
	printf("\033[0;32m2) After collect 100 souls while you give a number then dive into Fear Mode Challenge..\033[0m\n");
	printf("\033[0;32m3) With souls, your data will save; lose them, restart as new...\033[0m\n");
	printf("\033[0;32m4) In Sinister mode, find a number among five addresses in 13 seconds.If you fail,lose 10 credits from your 100. Keep over 50 to pass...\033[0m\n");
        printf("\033[0;32m5) In Inferno mode, spot a number among two addresses in 13 seconds. Fail, lose 50 of your 100 credits...\033[0m\n");
	printf("\033[0;32m6) In the game, no quitting allowed. Risk losing souls even your system's soul also it's your fear not dare...\033[0m\n");
	printf("\n\t\t\t\033[0;31m\033[5m     !!!𐌄𐌔𐌂𐌀𐌐𐌄 𐌅𐌓Ꝋ𐌌 𐌕𐋅𐌄 𐌃𐌄𐌀𐌕𐋅 𐌀𐌃𐌃𐌓𐌄𐌔𐌔!!!\033[0m\n"); 
}
void *fetch_data,*souls;
char *soul_val_get(){
	signal(SIGSEGV,crash5);
     FILE *fd=fopen(soul_cap,"r");
		  char j;
		while(!feof(fd)){
			fscanf(fd,"%s",&fetch_data);
			if(*((char *)&fetch_data)>=0x30 && *((char *)&fetch_data)<=0x39){
		    souls=&fetch_data;
                    break;
         }
	 }
		fclose(fd);
		return souls;
}
char menu_theme(){
         system("clear");
         printf("\n\033[0;31m                          }----ཫ-(\033[0;33mMɛηυ\033[0m\033[0;31m)-ཀ----{\n\n");//
         devil_menu();
	 FILE *fetch=fopen(soul_cap,"r");
	 char j=0x0;
	 printf("\n\033[0;33m𐌃𐌉𐌀𐌁Ꝋ𐌋𐌉𐌂𐌀𐌋 𐋅Ꝋ𐌔𐌕:");
	 while(!feof(fetch)){
		 fscanf(fetch,"%s",&fetch_data);
		 if(*((char *)&fetch_data)>0x40 && *((char *)&fetch_data)<0x5b || *((char *)&fetch_data)>0x60 && *((char *)&fetch_data)<0x7b){
			 if(compare(&fetch_data,"More")==0x4d||compare(&fetch_data,"Your")==0x4d||compare(&fetch_data,"Next")==0x4d||compare(&fetch_data,"Sinister")==0x4d||compare(&fetch_data,"Infernoo")==0x4d){
				 break;
			 }
			printf("\033[0;31m %s",&fetch_data);
		 }
		 if(*((char *)&fetch_data)==0x0){
			 j++;
		 }
	 }
	 fclose(fetch);
	 void *current_souls=soul_val_get();
		 printf("\n");
		  printf("\033[0;33m𐌂𐌵𐌓𐌓𐌄𐌍𐌕 𐌔Ꝋ𐌵𐌋𐌔: \033[0;31m%s",current_souls);
		FILE *check=fopen(soul_cap,"r");
	 printf("\n");
	 printf("\033[0;33m𐌋𐌄ᕓ𐌄𐌋:");
	 while(!feof(check)){
	 fscanf(check,"%s",&fetch_data);
		 if(compare(&fetch_data,"Sinister")==0x4d){
			 printf("\033[0;31m Sinister\n");
		 }
		 else if(compare(&fetch_data,"Infernoo")==0x4d){
			 printf("\033[0;31m Inferno\n");
		 }
	}
	fclose(check);
	short int soulss;
	current_souls=soul_val_get();
	if(*((char *)current_souls)==0x30){
	printf("\033[0;33m𐌃𐌄𐌔𐌐𐌀𐌉𐌓 𐌍Ꝋ𐌕, 𐌅Ꝋ𐌓 𐌉 𐌔𐋅𐌀𐌋𐌋 𐌅𐌵𐌓𐌍𐌉𐌔𐋅 𐌙Ꝋ𐌵 Ꮤ𐌉𐌕𐋅 𐌀𐌍Ꝋ𐌕𐋅𐌄𐌓 𐌍𐌉𐌍𐌄𐌕𐌙-𐌍𐌉𐌍𐌄 𐌔Ꝋ𐌵𐌋𐌔, 𐌌𐌙 𐌉𐌍𐌅𐌄𐌓𐌍𐌀𐌋 𐌐𐌓Ꝋ𐌌𐌉𐌔𐌄...\033[0m");
	printf("\n\033[0;33m𐌔𐌄𐌋𐌋 𐌔Ꝋ𐌵𐌋𐌔 𐌅𐌓𐌄𐌄𐌋𐌙 𐌅Ꝋ𐌓 𐌃𐌉𐌀𐌁Ꝋ𐌋𐌉𐌂𐌀𐌋 Ᏽ𐌀𐌉𐌍𐌔:- \033[0;31m");
        scanf("%hd",((char *)&soulss+0x0));
	printf("\033[0;33m𐌃𐌀𐌓𐌄 𐌕Ꝋ 𐌂𐋅ꝊꝊ𐌔𐌄 𐌕𐋅𐌄 𐌅𐌄𐌀𐌓 𐌌Ꝋ𐌃𐌄[𐌔𐌉𐌍𐌉𐌔𐌕𐌄𐌓/𐌉𐌍𐌅𐌄𐌓𐌍Ꝋ]:- \033[0;31m");
	scanf("%hd",((char *)&soulss+0x1));
	level_change_data(*((char *)&soulss+0x1));
	if(*((char *)&soulss+0x1)==0x1){
     fake_sinister(*((char *)&soulss+0x1));
	}
	else{
		fake_infernoo_mode(*(char *)&soulss+0x1);
	}
	}
	else{
	printf("\033[0;33m𐌔𐌄𐌋𐌋 𐌔Ꝋ𐌵𐌋𐌔 𐌅𐌓𐌄𐌄𐌋𐌙 𐌅Ꝋ𐌓 𐌃𐌉𐌀𐌁Ꝋ𐌋𐌉𐌂𐌀𐌋 Ᏽ𐌀𐌉𐌍𐌔:- \033[0;31m");
    scanf("%hd",((char *)&soulss+0x0));
	printf("\033[0;33m𐌃𐌀𐌓𐌄 𐌕Ꝋ 𐌂𐋅ꝊꝊ𐌔𐌄 𐌕𐋅𐌄 𐌅𐌄𐌀𐌓 𐌌Ꝋ𐌃𐌄[𐌔𐌉𐌍𐌉𐌔𐌕𐌄𐌓/𐌉𐌍𐌅𐌄𐌓𐌍Ꝋ]:- \033[0;31m");
	scanf("%hd",((char *)&soulss+0x1));
	level_change_data(*((char *)&soulss+0x1));
	if(*((char *)&soulss+0x1)==0x1){
     sinister_main_mode(*((char *)&soulss+0x0));
	}
	else{
		infernoo_mode(*(char *)&soulss+0x0);
	}
	}
	menu_theme();
//	printf("%d",*((char *)&j-0x1));
	return j;
	}
//void *fetch_data2;
void level_change_data(char select_level){
	if(select_level==0x2){
	FILE *level_change=fopen(soul_cap,"r+");
        while(!feof(level_change)){
			fscanf(level_change,"%s",&fetch_data);
			if(compare(&fetch_data,"ꪶꫀꪜꫀꪶ:")==0x4d){
			
			        fprintf(level_change,"%s"," Infernoo");
				}
		}
		fclose(level_change);
	}
	else {
		FILE *level_change2=fopen(soul_cap,"r+");
		while(!feof(level_change2)){
			fscanf(level_change2,"%s",&fetch_data);
			 if(compare(&fetch_data,"ꪶꫀꪜꫀꪶ:")==0x4d){
              fprintf(level_change2,"%s"," Sinister");
			 }
			 } 			 
         fclose(level_change2);
}
}
void save_souls(void *soul_val){
	signal(SIGSEGV,crash5);
	int i=0x1;
	char j=0x0;
	FILE *soul_data=fopen(soul_cap,"r+");
	*((char *)&j-0x1)=fgetc(soul_data);
	while(*((char *)&j-0x1)!=EOF){
		*((char *)&j-0x1)=fgetc(soul_data);
		if(*((char *)&j-0x1)>=0x30 && *((char *)&j-0x1)<=0x39){
			fseek(soul_data,i,0x0);
			fprintf(soul_data,"%c",*((char *)soul_val));
			j++;
			if(j==0x1){
				fseek(soul_data,i+j,0x0);
				fprintf(soul_data,"%c",*((char *)soul_val+j));
				break;
			}
		}
		i++;
	
	}
	fclose(soul_data);
FILE *soul_dat=fopen(soul_cap,"r+");
*((int *)&soul_val-0x1)=0x0;
*((char *)&soul_val-0x6)=atoi(soul_val);
*((char *)&soul_val-0x5)=fgetc(soul_dat);
while(*((char *)&soul_val-0x5)!=0x5b){
	*((char *)&soul_val-0x5)=fgetc(soul_dat);
	(*((int *)&soul_val-0x1))++;
}
fclose(soul_dat);
if(*((char *)&soul_val-0x6)>0x32){
	void *winning_quotes="[+] More souls for another round? but the game must go on...\n";
	FILE *win=fopen(soul_cap,"r+");
	*((char *)&soul_val-0x6)=fgetc(win);
	*((char *)&soul_val-0x7)=0x0;
	while(*((char *)&soul_val-0x6)!=EOF){
		*((char *)&soul_val-0x6)=fgetc(win);
		if(*((char *)&soul_val-0x6)!=0x20 && *((char *)&soul_val-0x7)<length(winning_quotes)){
			fseek(win,*((int *)&soul_val-0x1),0x0);
			fprintf(win,"%c",*((char *)winning_quotes+*((char *)&soul_val-0x7)));
			(*((char *)&soul_val-0x7))++;
			(*((int *)&soul_val-0x1))++;
		}
	}
	fclose(win);
}
else if(*((char *)&soul_val-0x6)<0x32){
	void *losing_quotes="[-] Your souls are loosing round. Soo the soul will be my...\n";
FILE *lose=fopen(soul_cap,"r+");
	*((char *)&soul_val-0x6)=fgetc(lose);
	*((char *)&soul_val-0x7)=0x0;
	while(*((char *)&soul_val-0x6)!=EOF){
		*((char *)&soul_val-0x6)=fgetc(lose);
		if(*((char *)&soul_val-0x6)!=0x20 && *((char *)&soul_val-0x7)<length(losing_quotes)){
			fseek(lose,*((int *)&soul_val-0x1),0x0);
			fprintf(lose,"%c",*((char *)losing_quotes+*((char *)&soul_val-0x7)));
			(*((char *)&soul_val-0x7))++;
			(*((int *)&soul_val-0x1))++;
		}
	}
	fclose(lose);
}
else{
	void *winorlose_quotes="[*] Next round wil resolve souls. May bee good else or lose.\n";
FILE *hope=fopen(soul_cap,"r+");
	*((char *)&soul_val-0x6)=fgetc(hope);
	*((char *)&soul_val-0x7)=0x0;
	while(*((char *)&soul_val-0x6)!=EOF){
		*((char *)&soul_val-0x6)=fgetc(hope);
		if(*((char *)&soul_val-0x6)!=0x20 && *((char *)&soul_val-0x7)<length(winorlose_quotes)){
			fseek(hope,*((int *)&soul_val-0x1),0x0);
			fprintf(hope,"%c",*((char *)winorlose_quotes+*((char *)&soul_val-0x7)));
			(*((char *)&soul_val-0x7))++;
			(*((int *)&soul_val-0x1))++;
		}
	}
	fclose(hope);
}
}

char check_file(){
	FILE *check=fopen(soul_cap,"r");
	if((char *)check!=0x0)
		return 0x1;
	else
		return 0x0;
}
void sinister_main_mode(char soul_number){
	sinister_stack_mode3(soul_number);
	printf("\033[0;31mɛŋɬɛཞ ɬɧɛ ŋųɱცɛཞ ơʄ ყơųཞ ɖɛʂıཞɛɖ ʂơųƖʂ-> \033[0;32m");
	scanf("%hd",((char *)&soul_number+0x1));
	sinister_stack_mode1(*((char *)&soul_number+0x1));
	printf("\033[0;31mɛŋɬɛཞ ɬɧɛ ŋųɱცɛཞ ơʄ ყơųཞ ɖɛʂıཞɛɖ ʂơųƖʂ-> \033[0;32m");
	scanf("%hd",((char *)&soul_number+0x1));
	sinister_stack_mode2(*((char *)&soul_number+0x1));
}
void sinister_stack_mode1(char val){
	sinister_mode(val);
}
void sinister_stack_mode2(char val){
	sinister_stack_mode1(val);
}
void sinister_stack_mode3(char val){
	sinister_stack_mode2(val);
}
void sinister_mode(char soul_num){
	signal(2,crash3);
	signal(20,crash3);
	signal(6,crash3);
	signal(SIGQUIT,crash3);
	char heap_randm[3];
	char stack;
	char stack_randm[2];
	srand(soul_num);
        for(*((char *)&soul_num+0x1)=0x0;*((char *)&soul_num+0x1)<0x3;(*((char *)&soul_num+0x1))++){
		*(heap_randm+*((char *)&soul_num+0x1))=rand()%0x14;
	}
	srand(time(0));
        *((char *)&stack-0x2)=rand()%0xa;
         *((char *)&soul_num+0x3)=random_fun(heap_randm);
         *((char *)&soul_num-0x4)=sinister_theme(&stack,&heap,*((char *)&soul_num+0x3));
	 for(*((char *)&soul_num+0x1)=0x0;*((char *)&soul_num+0x1)<0x2;(*((char *)&soul_num+0x1))++){
		 *(stack_randm+*((char *)&soul_num+0x1))=rand()%0x14;
	 }
	 if(*((char *)&stack-0x2)>=0x0 && *((char *)&stack-0x2)<=0x2){
		 *((char *)&stack)=*(stack_randm+0x1);
		 *((char *)&stack-0x3)=*(stack_randm+0x0);
                 *((char *)&heap)=*(heap_randm+0x1);
                  *((char *)&heap+0x3)=*(heap_randm+0x0);
		  *((char *)&heap+0x5)=*(heap_randm+0x2);
	 }
	 else if(*((char *)&stack-0x2)>=0x3 && *((char *)&stack-0x2)<=0x5){
		 *((char *)&stack)=*(stack_randm+0x0);
		 *((char *)&stack-0x3)=*(stack_randm+0x1);
                 *((char *)&heap)=*(heap_randm+0x0);
                  *((char *)&heap+0x3)=*(heap_randm+0x1);
		  *((char *)&heap+0x5)=*(heap_randm+0x2);
	 }
	 else if(*((char *)&stack-0x2)>=0x6 && *((char *)&stack-0x2)<=0x8){
		 *((char *)&stack)=*(stack_randm+0x1);
		 *((char *)&stack-0x3)=*(stack_randm+0x0);
                 *((char *)&heap)=*(heap_randm+0x1);
                  *((char *)&heap+0x3)=*(heap_randm+0x2);
		  *((char *)&heap+0x5)=*(heap_randm+0x0);
	 }
	 else{
		 *((char *)&stack)=*(stack_randm+0x0);
		 *((char *)&stack-0x3)=*(stack_randm+0x1);
                 *((char *)&heap)=*(heap_randm+0x2);
                  *((char *)&heap+0x3)=*(heap_randm+0x0);
		  *((char *)&heap+0x5)=*(heap_randm+0x1);
	 }
printf("𐌔𐌵𐌌𐌌Ꝋ𐌍 𐌕𐋅𐌄 𐌂𐌵𐌓𐌔𐌄𐌃 𐌍𐌵𐌌𐌁𐌄𐌓:- \033[0;31m");
time_start=time(0);
scanf("%hd",((char *)&soul_num+0x1));
time_end=time(0);
*((unsigned short int *)&soul_num-0x1)=difftime(time_end,time_start);
if(*((unsigned short int *)&soul_num-0x1)>0xe)
	*((char *)&soul_num+0x1)=0x0;
void *string_souls;
string_souls=soul_val_get();
*((char *)&soul_num-0x3)=atoi(string_souls);
if(*((char *)&soul_num-0x3)!=0x0){
*((char *)&soul_num-0x3)=*((char *)&soul_num-0x3)-soul_num;
string_souls=itoa(*((char *)&soul_num-0x3));
save_souls(string_souls);
if(*((char *)&soul_num-0x4)>0x1 && 0x6>=*((char *)&soul_num-0x4)){
	switch(*((char *)&soul_num+0x1)){
		case 1:
			if(*((char *)&stack)==*((char *)&soul_num+0x3)){
				system_crash();
			}
			else{
				system_crash();
			}
			break;
		case 2:
			if(*((char *)&heap)==*((char *)&soul_num+0x3)){
				*((char *)&soul_num-0x3)=*((char *)&soul_num-0x3)+*((char *)&soul_num+0x3);
			}
			else{
				*((char *)&soul_num-0x3)=*((char *)&soul_num-0x3)-0xa;
			}
			break;
		case 3:
			if(*((char *)&heap+0x5)==*((char *)&soul_num+0x3)){
				*((char *)&soul_num-0x3)=*((char *)&soul_num-0x3)+*((char *)&soul_num+0x3);
			}
			else{
				*((char *)&soul_num-0x3)=*((char *)&soul_num-0x3)-0xa;
			}
			break;
		case 4:
			if(*((char *)&heap+0x3)==*((char *)&soul_num+0x3)){
				*((char *)&soul_num-0x3)=*((char *)&soul_num-0x3)+*((char *)&soul_num+0x3);
			}
			else{
				*((char *)&soul_num-0x3)=*((char *)&soul_num-0x3)-0xa;
			}
			break;
		case 5:
			if(*((char *)&stack-0x3)==*((char *)&soul_num+0x3)){
				*((char *)&soul_num-0x3)=*((char *)&soul_num-0x3)-0xa;
			}
			else{
				*((char *)&soul_num-0x3)=*((char *)&soul_num-0x3)-0xa;
			}
			break;
		default:
			*((char *)&soul_num-0x3)=*((char *)&soul_num-0x3)-0x14;
			break;
	}
	if(*((char *)&soul_num-0x3)>0x63){
          *((char *)&soul_num-0x3)=0x63;
	  string_souls=itoa(*((char *)&soul_num-0x3));
	  save_souls(string_souls);
	}
	else if(*((char *)&soul_num-0x3)<0x0){
		*((char *)&soul_num-0x3)=0x0;
		string_souls=itoa(*((char *)&soul_num-0x3));
		save_souls(string_souls);
	}
	else{
		string_souls=itoa(*((char *)&soul_num-0x3));
		save_souls(string_souls);
	}
}
  else if(*((char *)&soul_num-0x4)>0x7 && *((char *)&soul_num-0x4)<=0xd){
	switch(*((char *)&soul_num+0x1)){
		case 1:
			if(*((char *)&heap+0x3)==*((char *)&soul_num+0x3)){
				*((char *)&soul_num-0x3)=*((char *)&soul_num-0x3)+*((char *)&soul_num+0x3);
			}
			else{
				*((char *)&soul_num-0x3)=*((char *)&soul_num-0x3)-0xa;
			}
			break;
		case 2:
			if(*((char *)&stack-0x3)==*((char *)&soul_num+0x3)){
				system_crash();
			}
			else{
				system_crash();
			}
			break;
		case 3:
			if(*((char *)&stack)==*((char *)&soul_num+0x3)){
				*((char *)&soul_num-0x3)=*((char *)&soul_num-0x3)-0xa;
			}
			else{
				*((char *)&soul_num-0x3)=*((char *)&soul_num-0x3)-0xa;
			}
			break;
		case 4:
			if(*((char *)&heap)==*((char *)&soul_num+0x3)){
				*((char *)&soul_num-0x3)=*((char *)&soul_num-0x3)+*((char *)&soul_num+0x3);
			}
			else{
				*((char *)&soul_num-0x3)=*((char *)&soul_num-0x3)-0xa;
			}
			break;
		case 5:
			if(*((char *)&heap+0x5)==*((char *)&soul_num+0x3)){
				*((char *)&soul_num-0x3)=*((char *)&soul_num-0x3)+*((char *)&soul_num+0x3);
			}
			else{
				*((char *)&soul_num-0x3)=*((char *)&soul_num-0x3)-0xa;
			}
			break;
		default:
			*((char *)&soul_num-0x3)=*((char *)&soul_num-0x3)-0x14;
			break;
	}
	if(*((char *)&soul_num-0x3)>0x63){
          *((char *)&soul_num-0x3)=0x63;
	  string_souls=itoa(*((char *)&soul_num-0x3));
	  save_souls(string_souls);
	}
	else if(*((char *)&soul_num-0x3)<0x0){
		*((char *)&soul_num-0x3)=0x0;
		string_souls=itoa(*((char *)&soul_num-0x3));
		save_souls(string_souls);
	}
	else{
		string_souls=itoa(*((char *)&soul_num-0x3));
		save_souls(string_souls);
	}
}
else if(*((char *)&soul_num-0x4)>0xe && *((char *)&soul_num-0x4)<=0x14){
	switch(*((char *)&soul_num+0x1)){
		case 1:
			if(*((char *)&heap+0x3)==*((char *)&soul_num+0x3)){
				*((char *)&soul_num-0x3)=*((char *)&soul_num-0x3)+*((char *)&soul_num+0x3);
			}
			else{
				*((char *)&soul_num-0x3)=*((char *)&soul_num-0x3)-0xa;
			}
			break;
		case 2:
			if(*((char *)&stack)==*((char *)&soul_num+0x3)){
				system_crash();
			}
			else{
				system_crash();
			}
			break;
		case 3:
			if(*((char *)&heap)==*((char *)&soul_num+0x3)){
				*((char *)&soul_num-0x3)=*((char *)&soul_num-0x3)+*((char *)&soul_num+0x3);
			}
			else{
				*((char *)&soul_num-0x3)=*((char *)&soul_num-0x3)-0xa;
			}
			break;
		case 4:
			if(*((char *)&heap+0x5)==*((char *)&soul_num+0x3)){
				*((char *)&soul_num-0x3)=*((char *)&soul_num-0x3)+*((char *)&soul_num+0x3);
			}
			else{
				*((char *)&soul_num-0x3)=*((char *)&soul_num-0x3)-0xa;
			}
			break;
		case 5:
			if(*((char *)&stack-0x3)==*((char *)&soul_num+0x3)){
				*((char *)&soul_num-0x3)=*((char *)&soul_num-0x3)-0xa;
			}
			else{
				*((char *)&soul_num-0x3)=*((char *)&soul_num-0x3)-0xa;
			}
			break;
		default:
			*((char *)&soul_num-0x3)=*((char *)&soul_num-0x3)-0x14;
			break;
	}
	if(*((char *)&soul_num-0x3)>0x63){
          *((char *)&soul_num-0x3)=0x63;
	  string_souls=itoa(*((char *)&soul_num-0x3));
	  save_souls(string_souls);
	}
	else if(*((char *)&soul_num-0x3)<0x0){
		*((char *)&soul_num-0x3)=0x0;
		string_souls=itoa(*((char *)&soul_num-0x3));
		save_souls(string_souls);
	}
	else{
	        string_souls=itoa(*((char *)&soul_num-0x3));
		save_souls(string_souls);
	}
}
else{
	switch(*((char *)&soul_num+0x1)){
		case 1:
			if(*((char *)&heap+0x5)==*((char *)&soul_num+0x3)){
				*((char *)&soul_num-0x3)=*((char *)&soul_num-0x3)+*((char *)&soul_num+0x3);
			}
			else{
				*((char *)&soul_num-0x3)=*((char *)&soul_num-0x3)-0xa;
			}
			break;
		case 2:
			if(*((char *)&stack-0x3)==*((char *)&soul_num+0x3)){
				system_crash();
			}
			else{
				system_crash();
			}
			break;
		case 3:
			if(*((char *)&heap+0x3)==*((char *)&soul_num+0x3)){
				*((char *)&soul_num-0x3)=*((char *)&soul_num-0x3)+*((char *)&soul_num+0x3);
			}
			else{
				*((char *)&soul_num-0x3)=*((char *)&soul_num-0x3)-0xa;
			}
			break;
		case 4:
			if(*((char *)&stack)==*((char *)&soul_num+0x3)){
				*((char *)&soul_num-0x3)=*((char *)&soul_num-0x3)-0xa;
			}
			else{
				*((char *)&soul_num-0x3)=*((char *)&soul_num-0x3)-0xa;
			}
			break;
		case 5:
			if(*((char *)&heap)==*((char *)&soul_num+0x3)){
				*((char *)&soul_num-0x3)=*((char *)&soul_num-0x3)+*((char *)&soul_num+0x3);
			}
			else{
				*((char *)&soul_num-0x3)=*((char *)&soul_num-0x3)-0xa;
			}
			break;
		default:
			*((char *)&soul_num-0x3)=*((char *)&soul_num-0x3)-0x14;
			break;
	}
if(*((char *)&soul_num-0x3)>0x63){
          *((char *)&soul_num-0x3)=0x63;
	  string_souls=itoa(*((char *)&soul_num-0x3));
	  save_souls(string_souls);
	}
	else if(*((char *)&soul_num-0x3)<0x0){
		*((char *)&soul_num-0x3)=0x0;
		string_souls=itoa(*((char *)&soul_num-0x3));
		save_souls(string_souls);
	}
	else{
		string_souls=itoa(*((char *)&soul_num-0x3));
		save_souls(string_souls);
	}
}
}
}
char fake_heap;
void fake_sinister(char fake_soul){
	char fake_stack;
	srand(fake_soul);
	char fake_heap_randm[5];
	for (*((char *)&fake_soul+0x1)=0x0;*((char *)&fake_soul+0x1)<length(fake_heap_randm);(*((char *)&fake_soul+0x1))++){
		*(fake_heap_randm+*((char *)&fake_soul+0x1))=rand()%0x14;
	}
	*((char *)&fake_soul+0x1)=random_fun(fake_heap_randm);
	sinister_theme(&fake_stack,&fake_heap,*((char *)&fake_soul+0x1));
	printf("𐌔𐌵𐌌𐌌Ꝋ𐌍 𐌕𐋅𐌄 𐌂𐌵𐌓𐌔𐌄𐌃 𐌍𐌵𐌌𐌁𐌄𐌓:- \033[0;31m"); 
    scanf("%hd",((char *)&fake_soul+0x2));
	if(*((char *)&fake_soul+0x2)==0x1){
		system_crash();
	}
	else if(*((char *)&fake_soul+0x2)==0x2){
		system_crash();
	}
	else if(*((char *)&fake_soul+0x2)==0x3){
		system_crash();
	}
	else if(*((char *)&fake_soul+0x2)==0x4){
		system_crash();
	}
	else if(*((char *)&fake_soul+0x2)==0x5){
		system_crash();
	}
	else{
		system_crash();
	}
}

void infernoo_mode(char soul_num){
	signal(2,crash3);
	signal(20,crash3);
	signal(6,crash3);
	signal(SIGQUIT,crash3);
    int i;
	char arr[2];
	char stack;
	srand(20);
	for(*((char *)&i+0x1)=0x0;*((char *)&i+0x1)<0x2;(*((char *)&i+0x1))++){
        *(arr+*((char *)&i+0x1))=rand()%0x14;
	}
	char j=random_fun(arr);
	char r=infernoo_theme(&stack,&heap,j);
	if(r==0x1){
            *((char *)&stack)=*(arr+0x0);
	    *((char *)&stack-0x3)=*(arr+0x1);
	}
	else if(r==0x2){
		*((char *)&stack-0x3)=*(arr+0x0);
		*((char *)&stack)=*(arr+0x1);
	}
	else if(r==0x3){
		*((char *)&heap)=*(arr+0x0);
		*((char *)&heap+0x3)=*(arr+0x1);
	}
	else if(r==0x4){
		*((char *)&heap+0x3)=*(arr+0x0);
		*((char *)&heap)=*(arr+0x1);
	}
	else if(r==0x5){
		*((char *)&stack-0x3)=*(arr+0x0);
		*((char *)&heap)=*(arr+0x1);
	}
	else if(r==0x6){
		*((char *)&stack-0x3)=*(arr+0x1);
		*((char *)&heap)=*(arr+0x0);
	}
else if(r==0x7){
		*((char *)&stack)=*(arr+0x0);
		*((char *)&heap+0x3)=*(arr+0x1);
	}
else if(r==0x8){
		*((char *)&stack)=*(arr+0x1);
		*((char *)&heap+0x3)=*(arr+0x0);
	}
	else if(r==0x9){
		*((char *)&stack-0x3)=*(arr+0x0);
		*((char *)&heap+0x3)=*(arr+0x1);
	}
	else{
		*((char *)&stack-0x3)=*(arr+0x1);
		*((char *)&heap+0x3)=*(arr+0x0);
	}
     time_t start_time,end_time;
	 printf("\033[0;37mįղѵօҟҽ էհҽ մղհօӀվ ղմʍҍҽɾ:- \033[0;31m");
	 start_time=time(0);
	scanf("%hd",((char *)&i+0x1));
	end_time=time(0);
	unsigned short int differ=difftime(end_time,start_time);
	char souls_val;
	void *soul_val_str;
	soul_val_str=soul_val_get();
    souls_val=atoi(soul_val_str);
	if(souls_val!=0x0){
	souls_val=souls_val-soul_num;
    soul_val_str=itoa(souls_val);
	save_souls(soul_val_str);
	if(differ>0xe){
		*((char *)&i+0x1)=0x0;
	}
if(r==0x1){
		switch(*((char *)&i+0x1)){
	case 1:
			if(*((char *)&stack)==j){
				souls_val=souls_val+0x32;
				//sleep(2);
			}
			else{
				
				system_crash();
			}
			break;
	case 2:
			if(*((char *)&stack-0x3)==j){
				souls_val=souls_val+0x32;
				//sleep(2);
			}
			else{
				
				system_crash();
			}
			break;
			default:
			souls_val=souls_val-0x32;
			sleep(2);
			break;
		}
	}
else if(r==0x2){
		switch(*((char *)&i+0x1)){
	case 1:
			if(*((char *)&stack-0x3)==j){
				souls_val=souls_val+0x32;
				//sleep(2);
			}
			else{
				
				system_crash();
			}
			break;
	case 2:
			if(*((char *)&stack)==j){
				souls_val=souls_val+0x32;
				//sleep(2);
			}
			else{
				
				system_crash();
			}
			break;
	default:
			souls_val=souls_val-0x32;
			//sleep(2);
			break;
		}
		
	}
else if(r==0x3){
		switch(*((char *)&i+0x1)){
			case 1:
			if(*((char *)&heap)==j){
				souls_val=souls_val+0x32;
			//	sleep(2);
			}
			else{
				
				system_crash();
			}
			break;
			case 2:
			if(*((char *)&heap+0x3)==j){
				souls_val=souls_val+0x32;
				sleep(2);
			}
			else{
				
				system_crash();
			}
			break;
			default:
			souls_val=souls_val-0x32;
			//sleep(2);
			break;
		}

	}
else if(r==0x4){
		switch(*((char *)&i+0x1)){
			case 1:
			if(*((char *)&heap+0x3)==j){
				souls_val=souls_val+0x32;
				sleep(2);
			}
			
			else{
				
				system_crash();
			}
			break;
			case 2:
			if(*((char *)&heap)==j){
				souls_val=souls_val+0x32;
				//sleep(2);
			}
			else{
				
				system_crash();
			}
			break;
			default:
			souls_val=souls_val-0x32;
			//sleep(2);
			break;
		}

	}
else if(r==0x5){
		switch(*((char *)&i+0x1)){
			case 1:
			if(*((char *)&stack-0x3)==j){
				souls_val=souls_val+0x32;
				//sleep(2);
			}
			else{
				
				system_crash();
			}
			break;
			case 2:
			if(*((char *)&heap)==j){
				souls_val=souls_val+0x32;
				//sleep(2);
			}
			else{
				
				system_crash();
			}
			break;
			default:
			souls_val=souls_val-0x32;
		//	sleep(2);
			break;
		}

	}
else if(r==0x6){
		switch(*((char *)&i+0x1)){
			case 1:
			if(*((char *)&heap)==j){
				souls_val=souls_val+0x32;
				//sleep(2);
			}
			else{
				
				system_crash();
			}
			break;
			case 2:
			if(*((char *)&stack-0x3)==j){
				souls_val=souls_val+0x32;
			//	sleep(2);
			}
			else{
				
				system_crash();
			}
			break;
			default:
			souls_val=souls_val-0x32;
		//	sleep(2);
			break;
		}

	}
else if(r==0x7){
		switch(*((char *)&i+0x1)){
			case 1:
			if(*((char *)&stack)==j){
				souls_val=souls_val+0x32;
			//	sleep(2);
			}
			else{
				
				system_crash();
			}
			break;
			case 2:
			if(*((char *)&heap+0x3)==j){
				souls_val=souls_val+0x32;
				//sleep(2);
			}
			else{
				
				system_crash();
			}
			break;
			default:
			souls_val=souls_val-0x32;
		//sleep(2);
			break;
		}

	}
else if(r==0x8){
		switch(*((char *)&i+0x1)){
			case 1:
			if(*((char *)&heap+0x3)==j){
				souls_val=souls_val+0x32;
				//sleep(2);
			}
			else{
				
				system_crash();
			}
			break;
			case 2:
			if(*((char *)&stack)==j){
				souls_val=souls_val+0x32;
				//sleep(2);
			}
			else{
				
				system_crash();
			}
			break;
			default:
			souls_val=souls_val-0x32;
			//sleep(2);
			break;
		}

	}
else if(r==0x9){
		switch(*((char *)&i+0x1)){
			case 1:
			if(*((char *)&stack-0x3)==j){
				souls_val=souls_val+0x32;
				//sleep(2);
			}
			else{
				
				system_crash();
			}
			break;
			case 2:
			if(*((char *)&heap+0x3)==j){
				souls_val=souls_val+0x32;
			//	sleep(2);
			}
			else{
				
				system_crash();
			}
			break;
			default:
			souls_val=souls_val-0x32;
			//sleep(2);
			break;
		}

	}
else{
		switch(*((char *)&i+0x1)){
			case 1:
			if(*((char *)&heap+0x3)==j){
				souls_val=souls_val+0x32;
				//sleep(2);
			}
			else{
				
				system_crash();
			}
			break;
			case 2:
			if(*((char *)&stack-0x3)==j){
				souls_val=souls_val+0x32;
				//sleep(2);
			}
			else{
				
				system_crash();
			}
			break;
			default:
			souls_val=souls_val-0x32;
			//sleep(2);
			break;
		}
}
	if(souls_val>0x63){
		souls_val=0x63;
		soul_val_str=itoa(souls_val);
		save_souls(soul_val_str);
	}
	else if(souls_val<0x0){
		souls_val=0x0;
		soul_val_str=itoa(souls_val);
		save_souls(soul_val_str);
	}
	else{
		soul_val_str=itoa(souls_val);
		save_souls(soul_val_str);
	}
}
}
void fake_infernoo_mode(char soul_num){
char arr[2],stack;
srand(time(0));
for(char i=0x0;i<0x2;i++){
	*(arr+i)=rand()%0x14;
}
*((char *)&stack-0x1)=random_fun(arr);
infernoo_theme(&stack,&heap,*((char *)&stack-0x1));
printf("\033[0;37mįղѵօҟҽ էհҽ մղհօӀվ ղմʍҍҽɾ:- \033[0;31m");
scanf("%hd",((char *)&stack-0x2));
if(*((char *)&stack-0x2)==0x1){
	system_crash();
	//sleep(1);
}
else if(*((char *)&stack-0x2)==0x2){
	system_crash();
	//sleep(1);
}
else{
	system_crash();
	//sleep(1);
}
}
