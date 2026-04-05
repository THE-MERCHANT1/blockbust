#include<iostream>
#include<string>
#include<vector>
#include<sstream>
#include<algorithm>
#include<sys/ioctl.h>
#include<unistd.h>
#include<limits>

using namespace std;
  const string logo= R"(
██████╗ ██╗      ██████╗  ██████╗██╗  ██╗    ██████╗ ██╗   ██╗███████╗████████╗
 ██╔══██╗██║     ██╔═══██╗██╔════╝██║ ██╔╝    ██╔══██╗██║   ██║██╔════╝╚══██╔══╝
 ██████╔╝██║     ██║   ██║██║     █████╔╝     ██████╔╝██║   ██║███████╗   ██║   
 ██╔══██╗██║     ██║   ██║██║     ██╔═██╗     ██╔══██╗██║   ██║╚════██║   ██║   
 ██████╔╝███████╗╚██████╔╝╚██████╗██║  ██╗    ██████╔╝╚██████╔╝███████║   ██║   
 ╚══════╝╚══════╝ ╚═════╝  ╚═════╝╚═╝  ╚═╝    ╚═════╝  ╚═════╝ ╚══════╝   ╚═╝)";
 
 






vector<vector<char>>grid={
{'.','.','.','.','.','.','.','.'},
{'.','.','.','.','.','.','.','.'},
{'.','.','.','.','.','.','.','.'},
{'.','.','.','.','.','.','.','.'},
{'.','.','.','.','.','.','.','.'},
{'.','.','.','.','.','.','.','.'},
{'.','.','.','.','.','.','.','.'},
{'.','.','.','.','.','.','.','.'}
};

void printLogo(const string logo)
{   
    vector<string> lines;
    istringstream ss(logo);
    string ln;
    size_t max_ln=0;

    while(getline(ss,ln)){
      lines.emplace_back(ln);
      max_ln=max(max_ln,ln.size());

    }


   
 for (const auto &line : lines) {
    int leftPad = max(0, (80 - (int)line.size()) / 2);
    cout << string(leftPad, ' ') << line << '\n';
  }


  //menu options    


for(int i=0;i<8;i++)
{
  cout<<"\n";
}
cout<<string(32,' ');
cout<<"1)Start Game\n";
cout<<string(32,' ');
cout<<"2)Exit\n";
for(int i=0;i<6;i++)
{
  cout<<"\n";
}
cout<<string(35,' ');
}

int getInt()
{
  int value;
  while(true)
  {
    cin>>value;
    if(cin.fail())
    {
      cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
      cout<<"Invalid Input!\n";
      cout<<string(35,' ');

    }
    else if(value<1||value>2)
    {
       cout<<"Invalid Input!\n";
      cout<<string(35,' ');

    }
    else return value;
    

  }


}

void gridInt()
 {


 }



void mainMenu() {
  
printLogo(logo);
int x;
x=getInt();

if(x==1){}

}




int main() {

mainMenu();

}