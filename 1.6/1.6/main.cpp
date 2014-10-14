//
//  main.cpp
//  1.6
//
//  Created by Peng on 10/3/14.
//  Copyright (c) 2014 Peng. All rights reserved.
//

#include <iostream>
#include <stdlib.h>

using namespace std;

void display(int N, int M[N][N]){
    for( int i=0; i<N;  i++){
        for (int j =0; j < N; j++){
            cout << M[i][j] << "\t";
        }
        cout << endl;
    }
    cout << "-----------------------------" << endl;
}

int main(int argc, const char * argv[]) {

    cout << "this program rotate a N*N int matrix by 90 degrees anticlockwise\n";

    int N;
    cout << "what's the dimension N ? \n";
    cin >> N;
    //srand(time(NULL));

    int M[N][N];
    for (int i=0; i<N; i++){
        for (int j = 0; j < N; j++){
            M[i][j] = rand()%100+1;
        }
    }

    for( int i=0; i<N;  i++){
        for (int j =0; j < N; j++){
            cout << M[i][j] << "\t";
        }
        cout << endl;
    }
    cout << "-----------------------------" << endl;


    int r1;
    int c1;
    if (N%2 ==1) {
        r1 = N/2;
        c1 = r1+1;
    } else {
        r1 = N/2;
        c1 = r1;
    }

    int temp;
    for (int i = 0; i< r1; i++) {
        for (int j=0; j< c1; j++) {
            temp = M[i][j];
            M[i][j] = M[j][N-1-i];
            M[j][N-1-i] = M[N-1-i][N-1-j];
            M[N-1-i][N-1-j] = M[N-1-j][i];
            M[N-1-j][i] = temp;
        }
    }

    for( int i=0; i<N;  i++){
        for (int j =0; j < N; j++){
            cout << M[i][j] << "\t";
        }
        cout << endl;
    }
    cout << "-----------------------------" << endl;


    return 0;
}
