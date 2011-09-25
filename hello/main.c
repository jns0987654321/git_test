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

//    char word[] = "testy";
//    int i=0;
//    printf("%lu\n", sizeof(word));
//    for(i=0; i<sizeof word; i++)
//        printf("%c\n", *word);
//  //  printf("lol %d\n", *word);
//  //  printf("lol %d\n", *word);
//    
//    // insert code here...
//    printf("Hello, World! lol 1234 123 dsfsfs \n");
//    return 0;
    
        int x = 25;
        int *ptr = &x; /*ptr is pointer */
        int **temp = &ptr; /* temp is pointer to ptr */
        printf("%d %d %d", x, *ptr,**temp); 
    return 0;
}

