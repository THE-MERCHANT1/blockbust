
class Renderer
{   
    private:
    void drawCentered(const std::string logo);
    void clearscreen();
    char inputTitle();
    public:

    const std::string logo= R"(
==============================================================
   ____  _            _      ____             _
  | __ )| | ___   ___| | __ | __ ) _   _ ___| |_
  |  _ \| |/ _ \ / __| |/ / |  _ \| | | / __| __|
  | |_) | | (_) | (__|   <  | |_) | |_| \__ \ |_
  |____/|_|\___/ \___|_|\_\ |____/ \__,_|___/\__|

                    T E R M I N A L   E D I T I O N
==============================================================

                   Press ENTER to Start
                     Press Q to Quit
                     )";
    void titleScreen();
    void board();
    void lose();
   
};