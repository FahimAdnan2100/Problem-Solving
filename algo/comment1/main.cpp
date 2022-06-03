#include <bits/stdc++.h>
using namespace std;



void isComment(string line)
{


    if (line[0] == '/' && line[1] == '/'
        && line[2] != '/') {

        cout << "Single-line Comment"<<endl;
        return;
    }

    else if ( line[0] == '/' && line[1] == '*'
        && line[2] != '/' && line[2] != '*' && line[line.size() - 2] == '*'
        && line[line.size() - 1] == '/') {

        cout << "Multi-line comment"<<endl;
        return;
    }
    else{
        cout << "Not Comment"<<endl;
    }

}


int main()
{



    string line = "\*hello sd\n world*\'";
    string line1 = "/*bye sd\n bye*/";
    string line2 = "/hi sd\n hi";
    string line3 = "//hi";
    isComment(line);
    isComment(line1);
    isComment(line2);
    isComment(line3);






    return 0;
}

/*


*/
