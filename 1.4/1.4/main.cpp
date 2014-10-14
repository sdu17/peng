//
//  main.cpp
//  1.4
//
//  Created by Peng on 10/2/14.
//  Copyright (c) 2014 Peng. All rights reserved.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    //std::cout << "Hello, World!\n";

    cout << "input first string here: " << endl;
    char s1[1000];
    cin.getline(s1,1000);

    cout << "input second string here: " << endl;
    char s2[1000];
    cin.getline(s2,1000);

    if ( strlen(s1) != strlen(s2) ){
        cout << "not anagrams" << endl;
        return 0;
    }
    else {
    int count[256] = {0}; // this only initialize the first element to 0;
        for (int i =0; i<strlen(s1); i++) {
            count[(int) s1[i]] += 1;
            count[(int) s2[i]] -= 1;
        }
        for (int i=0; i<256; i++) {
            if (count[i] != 0){ // if (count[i])
                cout << "not anagrams" << endl;
                return 0;
            }
        }
        cout << "anagrams" << endl;
        return 0;
    }
}
