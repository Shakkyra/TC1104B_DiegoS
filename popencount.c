#include <stdio.h>
int main(){
    FILE * lsOutput;
    FILE * tomayInput;
    char readBuffer[80];
    lsOutput = popen("ls *.c | wc -l","r"); //read -> ls / apuntador a tipo de archivos (ls *.c)
    tomayInput = popen("./tomay", "w"); //write
    while(fgets(readBuffer,80,lsOutput)){
        fputs(readBuffer,tomayInput);
    }
    pclose(lsOutput);
    pclose(tomayInput);
}