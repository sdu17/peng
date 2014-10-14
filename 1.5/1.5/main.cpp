//
//  main.cpp
//  1.5
//
//  Created by Peng on 10/3/14.
//  Copyright (c) 2014 Peng. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

void replace(char *p, char a[]){
    int len = strlen(a)-1;
}

int main(int argc, const char * argv[]) {

    cout << "input a string with spaces:" << endl;
    string origin,first,second;
    getline(cin, origin);
    cout << origin.length()<< endl;

    basic_string <char>::size_type indexCh1a, indexCh1b; // basic_string <char> is string
    static const basic_string <char>::size_type npos = -1;

    indexCh1a = origin.find_first_of ( ' ' , 0 );
    if ( indexCh1a == npos )
        cout << "space is not found in the string" << endl;
    while (indexCh1a != npos) {
        first = origin.substr(0,indexCh1a);
        first += "%20";
        second = origin.substr(indexCh1a+1);
        origin = first.append(second);
        indexCh1a = origin.find_first_of ( ' ' , 0 );
    }
    cout << origin << endl;

    return 0;
}
