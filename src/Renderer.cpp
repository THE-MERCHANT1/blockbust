#include<iostream>
#include<vector>
#include<string>
#include<sstream>
#include "Renderer.h"
using namespace std;



void Renderer::drawCentered(const std::string logo)
{
    istringstream ss(logo);
    string ln;
   while (getline(ss,ln))
   {
    for(int i=0;i<(75-62)/2;i++){
        cout<<" ";
    }
    cout<<ln<<"\n";
    
   }
}
char Renderer::inputTitle()
{
    char c=cin.get();
    while(true)
    {
        if(c=='\n'){return 'e';}
        else if(c=='q'||c=='Q'){return 'q';}
    }
}
void Renderer::titleScreen()
{
 drawCentered(logo);
 if(inputTitle()=='e'){system("clear");cout<<"it works!";}
  if(inputTitle()=='q'){system("clear");cout<<"it works! but with q";}


}
