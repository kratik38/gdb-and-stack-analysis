#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>

bool IsPasswordOK (void) {

char Password [12]; // Memory storage for pwd
gets(Password) ; // Get input from keyboard
return 0 == strcmp( Password , "goodpass");

}
int main (void){
    bool PwStatus; // Password status
    puts("Enter Password :"); // Print
    PwStatus=IsPasswordOK( ); // Get and check password
    if(!PwStatus) {
        puts("Access denied"); // Print
        exit(-1); // Terminate program
    }
    else
        puts("Access granted"); // Print
}
