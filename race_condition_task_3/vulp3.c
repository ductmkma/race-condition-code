#include <stdio.h>
#include <unistd.h>
#include <string.h>
int main(){
    char * fn = "/tmp/XYZ";
    char buffer[60];
    FILE *fp;
    /* get user input */
    scanf("%50s",buffer);
    uid_t euid = geteuid(); /*lay nguoi dung co hieu qua trong tien trinh goi*/
    uid_t uid = getuid(); /*lay nguoi dung thuc trong tien trinh dang goi*/
    seteuid(uid);
    if(access(fn,W_OK)!=0){
        printf("No permission\n");
    }else{
        fp = fopen(fn,"a+");
        fwrite("\n",sizeof(char),1,fp);
        fwrite(buffer,sizeof(char),strlen(buffer),fp);
        fclose(fp);
    }
    seteuid(euid);

}