//
//  main.cpp
//  1.3
//
//  Created by Peng on 10/2/14.
//  Copyright (c) 2014 Peng. All rights reserved.
//

#include <iostream>

using namespace std;

void shift(char *p){
    // shift all the chars starting p+1 to p
    char *q = p;
    while (*q != '\0'){
        *q = *(q+1);
        q++;
    }
}


int main(int argc, const char * argv[]) {

    cout << "input a string" << endl;
    char s[1000];
    cin.getline(s, 1000);
    char *p1 = s;
    char *p2 = s+1;
    while (*p1 != '\0') {
        while (*p2 != '\0') {
            while (*(p1) == *p2){
                shift(p2);
            }
            p2++;
        }
        p1++;
        p2 = p1+1;
    }

    cout << s <<endl;

    return 0;
}
