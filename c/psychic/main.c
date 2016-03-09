//
//  main.c
//  psychic
//
//  Created by Mark Osborne on 4/01/2016.
//  Copyright © 2016 Allballsin Pty Ltd. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    /*
     Numbers 1-44
     6 numbers drawn
     Clients can pick 15 and know 4 will be on ticket
     3 correct numbers wins a prize
     ------------------------------
     How many tickets guarantees a prize?
     
     How many combinations of 3 of the four numbers are there?
     Any other numbers in tickets are fine.
     
     
     nCr
     
     1 2 3
     1 2 4
     1 3 4
     2 3 4
     
     */
    
    int numCombs = 0;
    int c = 1;
    int d = c+1;
    int e = d+1;
    int totNums = 4;
    //int totPicks = 3;
    int f;
    int g;
    int h;
    
    
    
    while (e<=totNums) {
        d=2;
        while (d<e) {
            c=1;
            while (c<d) {
                numCombs++;
                /* each combo comes out here */
                f=1;
                g=2;
                h=3;
                for (;f<5;f++) {
                    if ((f!=c) && (f!=d) && (f!=e)) {
                        break;
                    }
                }
                
                for (;g<6;g++) {
                    if ((g!=c) && (g!=d) && (g!=e) && (g!=f)) {
                        break;
                    }
                }
                
                for (;h<7;h++) {
                    if ((h!=c) && (h!=d) && (h!=e) && (h!=f) && (h!=g)) {
                        break;
                    }
                }
                printf("%d %d %d %d %d %d\n",c,d,e,f,g,h);
                
                c++;
            }
            d++;
        }
        e++;
    }
    
    
    /* 	need to buy 4 tickets.
     need to pick other 3 numbers to go from other numbers
     get 3 numbers not in list
     */
    printf("%d tickets needed\n",numCombs);
    
    
    return 0;
}



