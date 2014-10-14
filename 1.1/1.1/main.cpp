//
//  main.cpp
//  1.1
//
//  Created by Peng on 10/2/14.
//  Copyright (c) 2014 Peng. All rights reserved.
//
/*
 Questions should be asked:
 ASCII or Unicode?
 Capital sensitive?
 multiple spaces count for duplicate?
 Assume empty string should return no duplicate?
 */

#include <iostream>
#include <string>

using namespace std;

bool duplicate_check(string str){
    int count[256] = {0};
    
    if (str.length() == 0){
        return false;
    } else if (str.length() > 256) {
        return true;
    } else {
        for (int i=0; i < str.length(); i++){
            if (count[str[i]] > 0) {
                return true;
            }
            count[str[i]]++;
        }
    }
    return false;
}

int main(int argc, const char * argv[]) {
    string str = "";
    cout << "Input a string: ";

    while (getline(cin, str)){
        if (str == "exit") {
            break;
        }
        bool result = duplicate_check(str);
        if (result){
            cout << "duplicate? yes" << endl;
        } else {
            cout << "duplicate? no" << endl;
        }
        
        cout << "Input a string: ";
    }

    return 0;
}

