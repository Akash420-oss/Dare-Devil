void *heap_add(char size){
      void *address=(char *)malloc(size);
      if(address==NULL){
	      signed char error_code=-1;
	       void *error_ptr=&error_code;
	       return error_ptr;
      }
      return address;
}
short int length(void *ptr){
	char i=0x0;
	while(*((char *)ptr+i)!='\0'){
		i++;
	}
	return i;
}
char compare(void *address1,void *address2){
	*((char *)&address1+0x8)=0x0;
	*((char *)&address1+0x9)=0x0;
while(*((char *)address1+*((char *)&address1+0x8))!='\0' && *((char *)address2+*((char *)&address1+0x8))!='\0'){
if(*((char *)address1+*((char *)&address1+0x9))==*((char *)address2+*((char *)&address1+0x9))&&length(address1)==length(address2)){
(*((char *)&address1+0x9))++;
}
(*((char *)&address1+0x8))++;
}
if(*((char *)&address1+0x9)==length(address1)){
	return 0x4d;
}
else
   return 0x4e;
}
unsigned char random_fun(void *arrays){
	unsigned char j;
	srand(time(0));
	for(char i=0x0,k=0x0;k<rand()%0x14;i++ && k++){
		if(i==length(arrays)){
			i=0x0;
		}
		j=*((char *)arrays+i);	
	}
	return j;
}
void *itoa(char intg){
*((char *)&intg+0x1)=intg;
*((char *)&intg+0x2)=0x0;
char asc;
while(*((char *)&intg+0x1)!=0x0){
asc=*((char *)&intg+0x1)%0xa;
*((char *)&intg+0x1)=*((char *)&intg+0x1)/0xa;
(*((char *)&intg+0x2))++;
}
*((char *)&intg+0x1)=intg;
if(*((char *)&intg+0x2)==0x2){
	*((char *)&intg+0x3)=0x1;
	void *asciis=heap_add(2);
	while(*((char *)&intg+0x1)!=0x0 && *((char *)&intg+0x3)>=0){
         asc=*((char *)&intg+0x1)%0xa;
	 if(asc==0x1){
	 *((char *)(asciis+*((char *)&intg+0x3)))=0x31;
	 }
	 else if(asc==0x2){
	 *((char *)(asciis+*((char *)&intg+0x3)))=0x32;
	 }
	 else if(asc==0x3){
		*((char *)(asciis+*((char *)&intg+0x3)))=0x33;
	 }
	 else if(asc==0x4){
		*((char *)(asciis+*((char *)&intg+0x3)))=0x34;
	 }
	 else if(asc==0x5){
		 *((char *)(asciis+*((char *)&intg+0x3)))=0x35;
	 }
	 else if(asc==0x6){
		 *((char *)(asciis+*((char *)&intg+0x3)))=0x36;
	 }
	 else if(asc==0x7){
		 *((char *)(asciis+*((char *)&intg+0x3)))=0x37;
	 }
	 else if(asc==0x8){
		 *((char *)(asciis+*((char *)&intg+0x3)))=0x38;
	 }
	 else if(asc==0x9){
		 *((char *)(asciis+*((char *)&intg+0x3)))=0x39;
	 }
	 else{
		 *((char *)(asciis+*((char *)&intg+0x3)))=0x30;
	 }
         *((char *)&intg+0x1)=*((char *)&intg+0x1)/0xa;
	 (*((char *)&intg+0x3))--;
	}
	return asciis;
	free(asciis);
}
else{
void *asciis=heap_add(1);
if(asc==0x1){
	 *((char *)(asciis))=0x31;
	 }
	 else if(asc==0x2){
	 *((char *)(asciis))=0x32;
	 }
	 else if(asc==0x3){
		*((char *)(asciis))=0x33;
	 }
	 else if(asc==0x4){
		*((char *)(asciis))=0x34;
	 }
	 else if(asc==0x5){
		 *((char *)(asciis))=0x35;
	 }
	 else if(asc==0x6){
		 *((char *)(asciis))=0x36;
	 }
	 else if(asc==0x7){
		 *((char *)(asciis))=0x37;
	 }
	 else if(asc==0x8){
		 *((char *)(asciis))=0x38;
	 }
	 else if(asc==0x9){
		 *((char *)(asciis))=0x39;
	 }
	 else{
		 *((char *)(asciis))=0x30;
	 }
	 return asciis;
	 free(asciis);
}
}
short int getuuid(){
     //  void *ptr=heap_add(1);
       char *ptr2=heap_add(2);
        short int uuid;
       sprintf(ptr2,"id -u %s 1>uid.txt",getlogin());
      system(ptr2);
       FILE *f=fopen("uid.txt","r");
       fscanf(f,"%s",(ptr2+0x1));
       fclose(f);
       uuid=atoi(ptr2+0x1);
       system("rm -f uid.txt");
return uuid;
}
void *ip_extract(){
	void *inet=heap_add(1);
	void *ip;
	char i=0x0,bits;
	system("ifconfig |grep -v 'inet 127'|grep 'inet '>ip.txt");
        FILE *ip_file=fopen("ip.txt","r");
	while(!feof(ip_file)){
		fscanf(ip_file,"%s",inet);
		if(*((char *)inet+i)>=0x30 && *((char *)inet+i)<=0x39){
                 ip=inet;
		 break;
		}
	}
	fclose(ip_file);
	system("rm -f ip.txt");
	return ("%s",ip);
	free(inet);
}
void *iface_extract(){
	char iface_name,i=0x0;
	void *arr=heap_add(1),*command=heap_add(1),*ips=ip_extract();
	sprintf(command,"ifconfig|grep '%s' -B1>iface_name.txt",ips);
	system(command);
	FILE *fd=fopen("iface_name.txt","r");
	iface_name=fgetc(fd);
	while(iface_name!=0x3A){
	     *((char *)arr+i)=iface_name;
              iface_name=fgetc(fd);
	      i++;
	}
	fclose(fd);
	system("rm -f iface_name.txt");
return arr;
}

