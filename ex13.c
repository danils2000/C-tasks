#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void function();
void function() {
    
    char line[200];
    char *text;

    FILE *f;
    f = fopen("text.txt","w");
  
    while (fgets(line, 200, stdin) != "\0" && strcmp(line,".\n") != 0) {

        text = (char *) malloc(200 * sizeof(char));
        sscanf(line, "%s", text);
        fprintf(f, "%d:%s\n",strlen(text),text);

        if(text == "\0") {
            printf("TRY AGAIN!!!");
        }
        free(text);
    }

    fclose(f);
}

int main() {

    printf("User enters: ");
    function();

    return 0;
}
