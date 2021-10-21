#include <iostream> 
#include <fstream> 
#include <iostream> 
using namespace std;
int main()
{
    char a;
    ifstream file ("tam.txt");
    file>>a;
    if(a>='a'&&a<='z') a=a-32;
    cout<<a;
    file.close();
    return 0;
}

/*#include <iostream>
#include <fstream>
using namespace std;
 
int main() {
   ifstream f1;
   char c;
   int numchars, numlines;
   f1.open("tam.txt");
   numchars = 0;
   numlines = 0;
   f1.get(c);
   while (f1) {
     while (f1 && c != '\n') {
       numchars = numchars + 1;
       f1.get(c);
     }
     numlines = numlines + 1;
     f1.get(c);
   }
   cout << "Tep co " << numlines << " dong va "<<numchars<<" ki tu" <<endl;
   return(0);
}*/


