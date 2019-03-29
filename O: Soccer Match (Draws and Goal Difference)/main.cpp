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
    ifstream in("input1.txt");
    ofstream out("output2.txt");
    in >> n;
    maxdiff = NULL;
    ndraw = 0;
    diff = NULL;
    
    for (i=1; i<=n; i++){
        in>>s1>>s2;
        diff = abs(s1-s2);
        if (diff== 0) {
            ndraw++;
        } else if (maxdiff < diff) {
            maxdiff = diff;
        }
        
    }
    
    in.close();
    ifstream in1("input1.txt");
    
    in1 >> n;
    out << "The maximum goals difference: " << maxdiff << endl;
    for (i=1; i<=n; i++){
        in1>>s1>>s2;
        diff = abs(s1-s2);
        if (diff == maxdiff)
            out << "Match " << i << ":" << s1 << " " << s2 << endl;
        
    }
    in1.close();
    ifstream in2("input1.txt");
    in2 >> n;
    out << "Number of drawn matches: " << ndraw << endl;
    for (i=1;i<=n;++i) {
        in2>>s1>>s2;
        diff = abs(s1-s2);
        if (diff == 0)
            out << "Match " << i << ":" << s1 << " " << s2 << endl;
    }
    
    system("pause");
    return 0;
}
