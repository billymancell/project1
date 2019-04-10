#include <stdio.h>

void encryp (char caescipher[], int key); //function prototype

int main () {
    
char caescipher [50]; //declaring array
int key; //declaring the key/shifter
    printf("enter text(capitals) to be encrypted:\n");
    scanf("%s", &caescipher);
    printf("enter key value; 1-10:\n");
    scanf("%d", &key);
    
    encryp (caescipher, key);   
return 0;
}

void encryp (char caescipher[], int key) {
    int i= 0;
    
    while(caescipher[i] != '\0') {
        if ((caescipher[i] + key) >= 65 && (caescipher[i] + key) <= 90) {
            
        }
        
    }
}