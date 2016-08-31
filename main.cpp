/* 
 * File:   main.cpp
 * Author: Steven Curtis
 *
 * Created on August 28, 2016, 3:34 PM
 */

#include <cstdlib>
#include <iostream>
#include <fstream>

using namespace std;

/*
 * 
 */

char checkAnswer();

int main(int argc, char** argv) {
    ofstream myFile;
    myFile.open("example.txt");
    
    myFile << "Writing this info to a file for kicks.";
    myFile.close();
    
    cout<<"Press a Key";
    checkAnswer();
    
    return 0;
}

char checkAnswer(){
    char n;
    cin>>n;
    return n;
}