#include <stdio.h>

void decryp(char *message, int n);
void encryp(char *message, int n);

int main() {

// switch 
   void encryp(char *message, int n) ; 
   void decryp(char *message, int n) ;
        return 0;
}


void encryp(char *message, int n)  {
	

	char current;
	int i;
	//char message[1024];
    //int n = 4;
   printf("enter a message to encrypt (capital letters only) : \n");
   scanf("%[^\n]s", message);
    
   printf("enter key (number between 1-10) : \n");
   scanf("%d", &n);

	for (i = 0; message[i] != '\0'; ++i) {
	    //Scans each letter of the message.
		current = message[i];
		if (current >= 'A' && current <= 'Z') {
		    //Shifts all capital letters.
			//current = ((current-'A')+n)%26+'A';
			current = current + n;
			
			if(current > 'Z') {
			    current = current - 'Z' + 'A' - 1;
			}
			message[i] = current;
		}
		if (current >= 'a' && current <= 'z') {
		    //Shifts all lowercase letters.
			current = ((current-'a')+n)%26+'a';
			message[i] = current;
        }
        printf("encrypted message: %s", message);
    }  
    return;
}
    void decryp(char *message, int n) {
    
    
	//char message[1024];
	char ch;
	int i, key;
	
	printf("Enter a message to decrypt: ");
	scanf ("%s", message);
	printf("Enter key: ");
	scanf("%d", &key);
	
	for(i = 0; message[i] != '\0'; ++i){
		ch = message[i];
		
		if(ch >= 'a' && ch <= 'z'){
			ch = ch - key;
			
			if(ch < 'a'){
				ch = ch + 'z' - 'a' + 1;
			}
			
			message[i] = ch;
		}
		else if(ch >= 'A' && ch <= 'Z'){
			ch = ch - key;
			
			if(ch < 'A'){
				ch = ch + 'Z' - 'A' + 1;
			}
			
			message[i] = ch;
		}
	}
	
	printf("Decrypted message: %s", message);
	
	return;
}