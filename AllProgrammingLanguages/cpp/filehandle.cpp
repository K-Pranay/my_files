// reading a text file
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

int main () {
  string line;
  ifstream myfile ("a.txt");
  if (myfile.is_open())
  {
    int count=1;
    int Time,Intersects,Streets,cars,pts;
    const int numC = 3;

    char* Streetnames;
    while ( getline (myfile,line) )
    {
      //cout << line << '\n';
      if(count==1)
      {
        std::stringstream nums;
        nums << line;

        nums >> Time;
        nums>>Intersects;
        nums>>Streets;
        nums>>cars;
        nums>>pts;
        std::cout <<" In order " << Time<<" "<<Intersects<<" "<<Streets<<" "<<cars<<" "<<pts << std::endl;

        int numR;
        numR = Streets;
        int *myArray[numC];
        myArray = new int[numR];
      }
      if(count>1 && count<=Streets+1)
      {
        std::string delimiter = " ";

        size_t pos = 0;
        std::string token;
        int i=0;
        while ((pos = line.find(delimiter)) != std::string::npos)
        {
            token = line.substr(0, pos);
            std::cout << token << std::endl;
            if(i==0)
            {
              myArray[0][0]=parseInt(token);
            }

            s.erase(0, pos + delimiter.length());
        }
        std::cout << line << std::endl;

      }

      count++;
    }
    myfile.close();
  }

  else cout << "Unable to open file";

  return 0;
}
