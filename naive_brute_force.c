//naive brute force approach to string matching prolem
#include <stdio.h> 
#include <string.h> 
  
void naive_brute_force(char* pattern, char* text) 
{ 
    int i = strlen(text); // to loop through the text
    int j = strlen(pattern); // to loop through the pattern
  
    
    for (int a = 0; a <= i - j; a++) { 
        int b; 
  
        
        for (b = 0; b < j; b++) 
            if (text[a + b] != pattern[b]) 
                break; 
                
        if (b == j)  
            printf("The match has been found at %d\n", a); 
    } 
} 
  
int main() 
{  
    char text[] = "SDU is the best university"; 
    char pattern[] = "best"; 
    naive_brute_force(pattern, text); 
    return 0; 
}
