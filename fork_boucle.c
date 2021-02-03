#include "csapp.h"
int main() 
{
    int i;

    for (i = 0; i < 2; i++) 
        Fork();
    
    while(1);
    exit(0);
}
