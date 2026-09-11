
class Renderer
{   
    private:
    void drawCentered(const std::string logo);
    public:
void clearScreen();
    const std::string logo= R"(
 ____  _     ___   ____ _  __
| __ )| |   / _ \ / ___| |/ /
|  _ \| |  | | | | |   | ' / 
| |_) | |__| |_| | |___| . \ 
|____/|_____\___/ \____|_|\_\

 ____  _   _ ____ _____
| __ )| | | / ___|_   _|
|  _ \| | | \___ \ | |
| |_) | |_| |___) || |
|____/ \___/|____/ |_|
 

Press ENTER to Start
 Press ^C to Quit
                     )";

const std::string l= R"(+------------------------------+ )";
    void titleScreen();
    void board();
    void loss();
    
    

   
};