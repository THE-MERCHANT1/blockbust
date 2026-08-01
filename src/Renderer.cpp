#include<iostream>
#include<vector>
#include<string>
#include<sstream>
#include "Renderer.h"
using namespace std;
void renderer::titleScreen()
{
    vector<string> lines;
    istringstream ss(logo);
    string ln;
    size_t max_ln=0;

    while(getline(ss,ln)){
      lines.emplace_back(ln);
      max_ln=max(max_ln,ln.size());

    }
    cout<<max_ln;
}
