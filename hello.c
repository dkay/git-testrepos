#include <stdio.h>
#include <inttypes.h> // not required

int main (int argc, char* argv[])
{
    const char *who = "stranger";
    
    if (argc>1) {
        who = argv[1];
    }
    
    printf("hello %s\n", who);
    return 0;    
} // end main()
