//
//  main.cpp
//  1.8
//
//  Created by Peng on 10/3/14.
//  Copyright (c) 2014 Peng. All rights reserved.
//

#include <iostream>
#include <string>string

using namespace std;

bool isSubstring(string s1, string s2){
    if (s1.find(s2) != string::npos)
        return true;
    else
        return false;
}


int main(int argc, const char * argv[]) {

    cout << "input s1" << endl;
    string s1, s2;
    getline(cin,s1);
    
    cout << "input s2" << endl;
    getline(cin,s2);
    
    string new_string = s2+s2+s2;
    //cout << new_string<<endl;

    if (isSubstring( new_string, s1+s1)) cout << "yes";
    else
        cout << "no"<< endl;
    
    
    return 0;
}
