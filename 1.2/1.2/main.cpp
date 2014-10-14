//
//  main.cpp
//  1.2
//
//  Created by Peng on 10/2/14.
//  Copyright (c) 2014 Peng. All rights reserved.
//
/* Yours is okay, but solution in book is more clear and intuitive */

#include <iostream>

using namespace std;

void swap (char *a, char *b){ // directly use swap in algorithm
    char temp = *a;
    *a = *b;
    *b = temp;
}

int main(int argc, const char * argv[]) {

    cout << "input a string here" << endl;
    char s[1000];
    //cin.getline(s, 1000);

    int len = strlen(s);
    for (int i = 1; i<=len/2; i++){ // better integrate code to a function for (int i = 0; i < len/2; i++)
        swap(s+i-1, s+len -i); //                                              swap(s+i; s+len-i-1)
    }
    cout << "the reversed string is" << endl;
    cout << s << endl;

    return 0;
}
