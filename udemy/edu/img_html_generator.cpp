// basic file operations
#include <iostream>
#include <fstream>
using namespace std;

int main () {

  system("dir /b *.jpg > img_name.txt"); //Writing the names of all the images in the new2 file
  ofstream outfile("img_html.txt");		//Opening the file in which the html is to be written in write mode
  string line;
  ifstream myfile ("img_name.txt");	//Opening the file from which the names of the file are to be read in read mode
  if (myfile.is_open())
  {
    while ( getline (myfile,line) )
    {
      cout << line << '\n';
      outfile << "<div class=\"box\"><div class=\"boxInner\"><a href=\"udemy/edu/"<<line<<"\" class=\"thumbnail\"><img src=\"udemy/edu/"<<line<<"\" alt=\""<<line<<"\"></a></div> </div>\n";	//Applying html syntax to file names
    }
    myfile.close();
  }

  else cout << "Unable to open file"; 
  
  
  
  outfile.close();
  return 0;
}
