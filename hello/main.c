//
//  main.c
//  hello
//
//  Created by Junior Samaroo on 11-09-24.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#include <stdio.h>

int main (int argc, const char * argv[])
{

    int word[3] = {1,2,3};
  //  int i=0;
    printf("%lu\n", sizeof(word));
  //  for(i=0; i<sizeof word; i++)
    //    printf("%c\n", word[i]);
    printf("lol %p\n", (word+1));
    
    // insert code here...
    printf("Hello, World! lol 1234 123 dsfsfs \n");
    return 0;
}

