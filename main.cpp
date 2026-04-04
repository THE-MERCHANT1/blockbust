#include<iostream>
#include<string>
#include<vector>
#include<sstream>
#include<algorithm>
#include<sys/ioctl.h>
#include<unistd.h>

using namespace std;
  const string logo= R"(
██████╗ ██╗      ██████╗  ██████╗██╗  ██╗    ██████╗ ██╗   ██╗███████╗████████╗
 ██╔══██╗██║     ██╔═══██╗██╔════╝██║ ██╔╝    ██╔══██╗██║   ██║██╔════╝╚══██╔══╝
 ██████╔╝██║     ██║   ██║██║     █████╔╝     ██████╔╝██║   ██║███████╗   ██║   
 ██╔══██╗██║     ██║   ██║██║     ██╔═██╗     ██╔══██╗██║   ██║╚════██║   ██║   
 ██████╔╝███████╗╚██████╔╝╚██████╗██║  ██╗    ██████╔╝╚██████╔╝███████║   ██║   
 ╚══════╝╚══════╝ ╚═════╝  ╚═════╝╚═╝  ╚═╝    ╚═════╝  ╚═════╝ ╚══════╝   ╚═╝)";
    
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


    // Get terminal size
    struct winsize w;
    int terW=80; int terH=24;

   if(ioctl(STDOUT_FILENO, TIOCGWINSZ, &w))
   {
    terW=w.ws_col;
    terH=w.ws_row;
  }

for(int i=0;i<4;i++)
{
    cout<<endl;
}
    
}






void mainMenu() {
  
printLogo(logo);
}




int main() {

mainMenu();
    return 0;
}