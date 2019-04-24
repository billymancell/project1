#include <stdio.h>

int main () {
    char message[102], ch;
    int i, key;
    
    printf("enter a message to encrypt\n");
    scanf("%s", message);
    
    printf("enter key\n");
    scanf("%d", &key);
    
        for(i = 0; message[i] != '\0'; ++i) {
            ch = message[i];
            
         if(ch >= 'a' && ch <= 'z') {
             ch = ch + key;
         }
            
          if(ch > 'z') {
              ch = ch - 'z'+ 'a' - 1;
          }
            message[i] = ch; 
        }
        
        printf("encrypted messsaaqge: %s", message);
        
        return 0;
}

