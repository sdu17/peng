//
//  main.cpp
//  1.1
//
//  Created by Peng on 10/2/14.
//  Copyright (c) 2014 Peng. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

int main(int argc, const char * argv[]) {

    // insert code here...
    //std::cout << "Hello, World!\n";
    cout << "input a string here"<< endl;
    char s[1000];
    cin.getline(s, 1000);

    //cout << s << endl;
    cout << "duplicate char?\t";
    int count[256] = {0};
    int index;
    // write a function to make your code readable
    if (strlen(s) > 256){
        cout << "yes\n" ;
    }else{
        int flag = 0;
        for ( int i = 0; i < strlen(s); i++){
            index = (int) s[i];
            count[index] += 1;
            if (count[index]>1) {
                flag = 1;
                break;
            }
        }
        if (flag == 1)  cout << "yes"<< endl;
        else cout << "no" << endl;
    }

    return 0;
}
