//
//  main.cpp
//  1.7
//
//  Created by Peng on 10/3/14.
//  Copyright (c) 2014 Peng. All rights reserved.
//

#include <iostream>
#include <set>

using namespace std;
const int N1 = 10;
const int N2=8;

void display(int M[N1][N2]){
    for( int i=0; i<N1;  i++){
        for (int j =0; j < N2; j++){
            cout << M[i][j] << "\t";
        }
        cout << endl;
    }
    cout << "-----------------------------" << endl;
}

int main(int argc, const char * argv[]) {

    set<int> rowset, colset;

    int M[N1][N2];
    for (int i=0; i<N1; i++){
        for (int j = 0; j < N2; j++){
            M[i][j] = rand()%20;
        }
    }

    display(M);

    for (int i=0; i<N1; i++){ //  be consistent using space btw operators...
        for (int j = 0; j < N2; j++){
            if (M[i][j] == 0) {
                rowset.insert(i);
                colset.insert(j);
            }
        }
    }


    for (int i:rowset) {
        for (int j = 0; j<N2; j++) {
            M[i][j] = 0;
        }
    }

    for (int j:colset) {
        for (int i = 0; i<N1; i++) {
            M[i][j] = 0;
        }
    }

    display(M);

    return 0;
}



