#include <fcntl.h>  /* open() and O_XXX flags */
#include <sys/stat.h>   /* S_IXXX flags */
#include <sys/types.h>  /* mode_t */
#include <unistd.h> /* close() */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>  // for strlen
#define SIZE 256
//#define BUFFER_SIZE 64
int main(){
    //ssize_t readFile;
    /*ssize_t written_bytes;
    char buffer[BUFFER_SIZE];*/
    FILE *file;
    char st[SIZE];
    mode_t mode = S_IRWXU | S_IRWXG | S_IRWXO;
    int flag =   O_RDWR | O_CREAT |  O_EXCL;
    int fd = open ("fd.txt",flag,mode);
    char *text = "Some text to fill the file\n";
    dprintf(fd,"%s", text);
    file = fopen( "fd.txt", "r" );
    while(fgets(st, SIZE , file)!= NULL);
        printf("%s", st);
    printf("\n");
    fclose(file);
    int len = strlen(st);
    for (int i=len-1;i>0;i--){
        if (st[i] == ' '){
            st[i]='\0';
            printf("%s ", &(st[i]) + 1);
        }
    }
    printf("%s\n", st);
    /*while ((readFile = read (fd, st, SIZE)) > 0);
         printf("%s", st);*/
    //written_bytes = write (fd, buffer, 50);
}

 



