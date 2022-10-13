#include <unistd.h>
#include <ctype.h>
#include <stdio.h>

int main(){
    char c;
    char may;
    int n;
    int x = 0;
    do {
        n = read(STDIN_FILENO,&c,1);
        may = toupper(c);
        if (&c == ("A")){
            x++;
        }
        write(STDOUT_FILENO,&may,1);
    } while (n!=0);
    printf("%i \n", x);
    return 0;
}