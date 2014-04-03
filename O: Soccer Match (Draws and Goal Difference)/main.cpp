//
//  main.cpp
//  O: Soccer Match (Draws and Goal Difference)
//
//  Created by Ryan Wong on 3/4/14.
//  Copyright (c) 2014 rwjhwong. All rights reserved.
//

#include <fstream>
using namespace std;
int main() {
    int n, i, s1, s2, maxdiff, ndraw, diff;
    ifstream infile("input1.txt");
    ofstream outfile("output2.txt");
    infile >> n;
    maxdiff = NULL;
    ndraw = 0;
    diff = NULL;
    
    for (i=1; i<=n; i++){
        infile>>s1>>s2;
        diff = abs(s1-s2);
        if (diff== 0) {
            ndraw++;
        } else if (maxdiff < diff) {
            maxdiff = diff;
        }
        
    }
    
    infile.close();
    ifstream infile1("input1.txt");
    
    infile1 >> n;
    outfile << "The maximum goals difference: " << maxdiff << endl;
    for (i=1; i<=n; i++){
        infile1>>s1>>s2;
        diff = abs(s1-s2);
        if (diff == maxdiff)
            outfile << "Match " << i << ":" << s1 << " " << s2 << endl;
        
    }
    infile1.close();
    ifstream infile2("input1.txt");
    infile2 >> n;
    outfile << "Number of drawn matches: " << ndraw << endl;
    for (i=1;i<=n;++i) {
        infile2>>s1>>s2;
        diff = abs(s1-s2);
        if (diff == 0)
            outfile << "Match " << i << ":" << s1 << " " << s2 << endl;
    }
    
    system("pause");
    return 0;
}
