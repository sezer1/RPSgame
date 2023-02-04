#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <iostream>
#include <list>
#include <string>
#include <sstream>
#include <time.h>
#include <windows.h>
#include <locale.h>
#include <vector>
using namespace std;
using namespace sf;
// rps1 olarak olan şey rpssprite içerisinde leftle çağırılan yere denk gelmiş oluyor. Onu değiştirmeyi deneyebilirsin
//texture ile alakalı bir problem var

 int getCompHand(void);
 int getWinner(int compHand, int playerHand);

class AnaClass{

 public:
      int dayaniklilik;
 int seviyePuani;
     AnaClass(){}
     AnaClass(int dayanikli,int seviyePuan){
     setdayaniklilik(dayanikli);
     setseviyePuani(seviyePuan);
     }
     void setdayaniklilik(int dayaniklilik1){
         dayaniklilik= dayaniklilik1;
     }
     void setseviyePuani(int seviyePuani1){
         seviyePuani= seviyePuani1;
     }
     int getdayaniklilik(int dayaniklilik1){
         return dayaniklilik;
     }
     int getseviyePuani(int seviyePuani1){
         return seviyePuani;
     }


     virtual void nesnePuaniGoster() = 0;
     virtual int etkiHesapla() = 0;
     virtual int durumGuncelle() = 0;

};

class Rock: public AnaClass{

    int katilik;
public:
    Rock(){}
    Rock(int dayanikli,int b1):AnaClass(dayaniklilik,seviyePuani){
        setdayaniklilik(dayaniklilik);
        setseviyePuani(seviyePuani);
        };

    void nesnePuaniGoster(){
    getCompHand();
    }
    etkiHesapla(){
     int tas_etkisi;
    }
    durumGuncelle(){
     int durum;
    }

};

class Paper: public AnaClass{

    int nufus;

public:
    Paper(){}
Paper(int a, int b):AnaClass(dayaniklilik,seviyePuani){
    setdayaniklilik(a);
    setseviyePuani(b);
    }
      void nesnePuaniGoster(){
    getCompHand();
    }
    etkiHesapla(){
     int tas_etkisi;
    }
    durumGuncelle(){
     int durum;
    }

};

class Scissors: public AnaClass{

    int keskinlik;

public:
    Scissors(){}
    Scissors(int a, int b):AnaClass(dayaniklilik,seviyePuani){
    setdayaniklilik(a);
    setseviyePuani(b);
    }

  void nesnePuaniGoster(){
    getCompHand();
    }
    etkiHesapla(){
     int tas_etkisi;
    }
    durumGuncelle(){
     int durum;
    }


};
class AgirRock:public Rock{

    int sicaklik;
public:
    AgirRock(){}
    AgirRock(int a,int b){
        setdayaniklilik(dayaniklilik);
        setseviyePuani(seviyePuani);
        };
  void nesnePuaniGoster(){
    getCompHand();
    }
    etkiHesapla(){
     int tas_etkisi;
    }
    durumGuncelle(){
     int durum;
    }



};
class OzelKagit: public Paper{

    int kalinlik;
public:
    OzelKagit(){}
    OzelKagit(int a,int b){
        setdayaniklilik(dayaniklilik);
        setseviyePuani(seviyePuani);
        };
  void nesnePuaniGoster(){
    getCompHand();
    }
    etkiHesapla(){
     int tas_etkisi;
    }
    durumGuncelle(){
     int durum;
    }



};
class UstaMakas: public Scissors{

    int hiz;
public:
    UstaMakas(){}
    UstaMakas(int a,int b){
        setdayaniklilik(dayaniklilik);
        setseviyePuani(seviyePuani);
        };
  void nesnePuaniGoster(){
    getCompHand();
    }
    etkiHesapla(){
     int tas_etkisi;
    }
    durumGuncelle(){
     int durum;
    }



};


class Oyuncu{
    string OyuncuID;
    string OyuncuAdi;
    int skor;

public:
    Oyuncu(){}
    Oyuncu(string Oyuncuid, string OyuncuAd, int skr ){
        setOyuncuID(Oyuncuid);
        setOyuncuAdi(OyuncuAd);
        setskor(skr);
    }
    void setOyuncuID(string OyuncuID1){
    OyuncuID=OyuncuID1;
    }
    void setOyuncuAdi(string OyuncuAdi1){
    OyuncuAdi=OyuncuAdi1;
    }
    void setskor(int skor1){
    skor=skor1;
    }
    string getOyuncuID(string OyuncuID1){
    return OyuncuID;
    }
    string getOyuncuAdi(string OyuncuAdi1){
    return OyuncuAdi;
    }
    int getskor(int skor1){
   return skor;
    }
    virtual void SkorGoster()=0;


};

class Kullanici: public Oyuncu {

public:
    void SkorGoster(){
    cout<< "the area of score"<<endl;
    }

};

class Bilgisayar: public Oyuncu {

public:
     void SkorGoster(){
    cout<< "the area of score"<<endl;
    }

};

class mainMenu
{
    public:
        int handleClick(int x, int y, int w, int h, RenderWindow& Window);

};

class mainMenu1 {
public:
        int handleClick1(int x, int y, int w, int h, RenderWindow& Window);

};


//=====================================================================
class menuText
{
    protected:
        Font font;
        Text option;
    public:
        FloatRect bounds;
        int top;
        int left;
        void setText(char* optionName, int x, int y, int size);
        void showText(RenderWindow& Window);
        void mouseOver(RenderWindow& Window);
        int updateWins(int num);
        int updateLosses(int num);
        int updateDraws(int num);
        int updatestring(int num);
        int updateRocks(int num);
        int updatePapers(int num);
        int updateScissors(int num);
};

class menuText1
{
    protected:
        Font font;
        Text option;
    public:
        FloatRect bounds;
        int top;
        int left;
        void setText(char* optionName, int x, int y, int size);
        void showText(RenderWindow& Window);
        void mouseOver(RenderWindow& Window);
        int updateWins(int num);
        int updateLosses(int num);
        int updateDraws(int num);
        int updatestring(int num);
        int updateRocks(int num);
        int updatePapers(int num);
        int updateScissors(int num);
};

//=====================================================================
class rpsSprite
{
    public:
        Texture texture;
        Sprite gameSprite;
    public:
        FloatRect bounds;
        int top, left;
        void Show(RenderWindow& Window);
        void showPlayer(RenderWindow& Window);
        void showComp(RenderWindow& Window);
        rpsSprite(char* image_name);
        void mouseOver(RenderWindow& Window);
        int handleClick(int x, int y, int w, int h, RenderWindow& Window);
};

class rpsSprite1
{
    public:
        Texture texture;
        Sprite gameSprite;
    public:
        FloatRect bounds;
        int top, left;
        void Show1(RenderWindow& Window);
        void showPlayer1(RenderWindow& Window);
        void showComp1(RenderWindow& Window);
        rpsSprite1(char* image_name);
        void mouseOver1(RenderWindow& Window);
        int handleClick1(int x, int y, int w, int h, RenderWindow& Window);
};

//=====================================================================

class rpsBackground
{
    public:
        void Show(RenderWindow& Window);
};
class rpsBackground1
{
    public:
        void Show1(RenderWindow& Window);
};

//=====================================================================

/*
void menuText::mouseOver(RenderWindow& Window)
{
    Vector2i mousePos = Mouse::getPosition(Window);
    if(mousePos.x > left && mousePos.y > top
            && mousePos.x - bounds.width < left && mousePos.y - bounds.height < top)
        option.setStyle(Text::Bold);
    else
        option.setStyle(Text::Regular);
}
*/

void menuText::setText(char* optionName, int x, int y, int size)
{
    font.loadFromFile("LucidaBrightRegular.ttf");
    option.setFont(font);
    option.setString(optionName);
    option.setCharacterSize(size);
    option.setPosition(x, y);
    option.setColor(Color::Red);
    bounds = option.getLocalBounds();
    top = y;
    left = x;
}

void menuText1::setText(char* optionName, int x, int y, int size)
{
    font.loadFromFile("LucidaBrightRegular.ttf");
    option.setFont(font);
    option.setString(optionName);
    option.setCharacterSize(size);
    option.setPosition(x, y);
    option.setColor(Color::Red);
    bounds = option.getLocalBounds();
    top = y;
    left = x;
}

void menuText::showText(RenderWindow& Window)
{
    Window.draw(option);
}

void menuText1::showText(RenderWindow& Window)
{
    Window.draw(option);
}

void rpsBackground::Show(RenderWindow& Window)
{
    Texture texture;
    texture.loadFromFile("C:/Users/Sezer/Desktop/arge/codeblocksprojects/deneme1/prolab21/images/rps_background.jpg");

    Sprite background(texture);

    Window.draw(background);
}

int mainMenu::handleClick(int x, int y, int w, int h, RenderWindow& Window)
{
    if(Mouse::isButtonPressed(Mouse::Left))
    {
        Vector2i mousePos = Mouse::getPosition(Window);
        if(mousePos.x > x && mousePos.y > y && mousePos.x - w < x && mousePos.y - h < y)
            return 1;
        return 0;
    }
}

int mainMenu1::handleClick1(int x, int y, int w, int h, RenderWindow& Window)
{
   if(Mouse::isButtonPressed(Mouse::Left))
    {
        Vector2i mousePos = Mouse::getPosition(Window);
        if(mousePos.x > x && mousePos.y > y && mousePos.x - w < x && mousePos.y - h < y)
            return 1;
        return 0;
    }
}

rpsSprite1::rpsSprite1(char* image_name)
{
    if(strcmp(image_name, "r_rock.png") == 0)
    {
        texture.loadFromFile("images/r_rock.png");
        left = 200;
        top = 175;
    }
    else if(strcmp(image_name, "r_paper.png") == 0)
    {
        texture.loadFromFile("images/r_paper.png");
        left = 300;
        top = 175;
    }
    else if(strcmp(image_name, "r_scissors.png") == 0)
    {
        texture.loadFromFile("images/r_scissors.png");
        left = 400;
        top = 175;
    }

    texture.setSmooth(true);
    gameSprite.setTexture(texture);
    gameSprite.setPosition(left, top);
    bounds = gameSprite.getLocalBounds();
}

rpsSprite::rpsSprite (char* image_name)
{
    if(strcmp(image_name, "r_rock.png") == 0)
    {
        texture.loadFromFile("images/r_rock.png");
        left =600;
        top = 175;
    }
    else if(strcmp(image_name, "r_paper.png") == 0)
    {
        texture.loadFromFile("images/r_paper.png");
        left = 600;
        top = 275;
    }
    else if(strcmp(image_name, "r_scissors.png") == 0)
    {
        texture.loadFromFile("images/r_scissors.png");
        left = 600;
        top = 375;
    }
    else if(strcmp(image_name, "l_rock.png") == 0)
    {
        texture.loadFromFile("images/l_rock.png");
        left = 150;
        top = 175;
    }
    else if(strcmp(image_name, "l_paper.png") == 0)
    {
        texture.loadFromFile("images/l_paper.png");
        left = 150;
        top = 275;
    }
    else if(strcmp(image_name, "l_scissors.png") == 0)
    {
        texture.loadFromFile("images/l_scissors.png");
        left = 150;
        top = 375;
    }

    texture.setSmooth(true);
    gameSprite.setTexture(texture);
    gameSprite.setPosition(left, top);
    bounds = gameSprite.getLocalBounds();
}

void rpsSprite::Show(RenderWindow& Window)
{
    gameSprite.setPosition(left, top);
    Window.draw(gameSprite);
}

void rpsSprite1::Show1(RenderWindow& Window)
{
    gameSprite.setPosition(left, top);
    Window.draw(gameSprite);
}
//====================
int menuText::updateDraws(int num)
{

    string numStr = "rights: ";
    stringstream ss;
    ss << numStr << num;
    numStr = ss.str();
    option.setString(numStr);
    return num;
}
int menuText::updateWins(int num)
{
    num++;
    string numStr = "Wins: ";
    stringstream ss;
    ss << numStr << num;
    numStr = ss.str();
    option.setString(numStr);
    return num;
}

int menuText::updatestring(int num)
{
    string numStr = "actions: ";
    stringstream ss;
    ss << numStr << num;
    numStr = ss.str();
    option.setString(numStr);
    return num;
}

int menuText::updateRocks(int num)
{
 num++;
    string numStr = "Rocks: ";
    stringstream ss;
    ss << numStr << num;
    numStr = ss.str();
    option.setString(numStr);
    return num;
}

int menuText::updateLosses(int num)
{
    num++;
    string numStr = "Losses: ";
    stringstream ss;
    ss << numStr << num;
    numStr = ss.str();
    option.setString(numStr);
    return num;
}

int menuText::updatePapers(int num)
{
   num++;
    string numStr = "Papers: ";
    stringstream ss;
    ss << numStr << num;
    numStr = ss.str();
    option.setString(numStr);
    return num;
}
int menuText::updateScissors(int num)
{
    num++;
    string numStr = "Scissors: ";
    stringstream ss;
    ss << numStr << num;
    numStr = ss.str();
    option.setString(numStr);
    return num;
}
void rpsSprite::showPlayer(RenderWindow& Window)
{
    gameSprite.setPosition(425, 300);
    gameSprite.setColor(Color(255, 255, 255));
    Window.draw(gameSprite);
}
void rpsSprite::showComp(RenderWindow& Window)
{
    gameSprite.setPosition(325, 300);
    Window.draw(gameSprite);
}



int getCompHand(void)
{
    srand(time(NULL));
    return rand() % 3;
}
int getCompHand2(void)
{

    return rand() % 3;
}

int getWinner(int compHand, int playerHand)
{
    if(compHand == playerHand)
        return 2;
    if(compHand == 0)
    {
        if(playerHand == 1)
            return 1;
        else if(playerHand == 2)
            return 0;
    }
    else if(compHand == 1)
    {
        if(playerHand == 0)
            return 0;
        else if(playerHand == 2)
            return 1;
    }
    else if(compHand == 2)
    {
        if(playerHand == 0)
            return 1;
        else if(playerHand == 1)
            return 0;
    }
}


void selection(string f, vector<string> &elements)
{
   elements.push_back(f);
}

class store{
public:
    int typeofelement;


};





int main()
{

    vector<store> selections(5);

    string elements[3]={"rock","paper","scissors"};
//    getdir(f,selection);

    setlocale(LC_ALL, "Turkish");
    HWND hWnd = GetConsoleWindow();
    ShowWindow( hWnd, SW_HIDE );
    VideoMode VMode(800, 600, 32);
    RenderWindow window(VMode, "SFML works!");
    window.setFramerateLimit(60);



    int r=0;
    int once=1;
    int endSeq=0;
    int gameStart=0;
    int rightofplayer=5;
    int lineofrps=0;
    int compHand = 0;
    int compHand2 =0;
    int playerHand = 0;
    int gameResult;
    int observer=0;
    int gameEnd=0;
    int updateScore = 0;
    int showWinner=0;
    int secondaction=0;
    int rocks=0,papers=0,scissors=0;
    int p = 0, s = 0, sh = 0;
    int w = 0, l = 0, d = 0;
    int selectionmode1=0;
    int selectionmode2=0;
    int thirdaction=0;

    rpsBackground background;

     menuText title;
     menuText player;
     menuText modeplayer;
     menuText modeauto;
     menuText play;
     menuText quit;
     menuText deneme;
     menuText deneme2;
     menuText esoeso1;
     menuText esoeso2;
     menuText rockso;
     menuText paperso;
     menuText scissorso;
     menuText wins;
     menuText losses;
     menuText winner;
     menuText loser;
     menuText draw;
     menuText draws;
     menuText rockstart;
     menuText paperstart;
     menuText scissorsstart;
     menuText shoot;
    modeplayer.setText((char*)"Player v Computer", 400,100,20);
    modeauto.setText((char*)"Computer v Computer", 150,100,20);
    title.setText((char*)"Rock, Paper, Scissors", 250, 15, 25);
    play.setText((char*)"Play", 50, 450, 40);
    quit.setText((char*)"Quit", 50, 500, 40);
    deneme.setText((char*)"Play", 200, 450, 40);
    rockso.setText((char*)"Rocks: ",650,175,20);
    paperso.setText((char*)"Papers: ",650,275,20);
    scissorso.setText((char*)"Scissors: ",650,375,20);
    wins.setText((char*)"Wins: 0", 600, 450, 30);
    losses.setText((char*)"Losses: 0", 600, 480, 30);
    draws.setText((char*)"Draws: 0", 600, 510, 30);
    rockstart.setText((char*)"Rock", 350, 250, 40);
    paperstart.setText((char*)"Paper", 350, 250, 40);
    scissorsstart.setText((char*)"Scissors", 350, 250, 40);
    shoot.setText((char*)"Paper", 350, 250, 40);
    winner.setText((char*)"WINNER!", 325, 200, 40);
    loser.setText((char*)"LOSER!", 335, 200, 40);
    draw.setText((char*)"DRAW!", 345, 200, 40);

    esoeso1.setText((char*)"rights: ",500,500,20);
    esoeso2.setText((char*)"actions: ",400,400,20);

    Clock clock;
    Time timeRock, timePaper, timeScissors, timeShoot, timeStart;

    mainMenu menu;
    mainMenu1 menu2;

    rpsSprite rRock((char*)"r_rock.png");
    rpsSprite rPaper((char*)"r_paper.png");
    rpsSprite rScissors((char*)"r_scissors.png");
    rpsSprite lRock((char*)"l_rock.png");
    rpsSprite lPaper((char*)"l_paper.png");
    rpsSprite lScissors((char*)"l_scissors.png");

    rpsSprite1 rRock1((char*)"r_rock.png");
    rpsSprite1 rPaper1((char*)"r_paper.png");
    rpsSprite1 rScissors1((char*)"r_scissors.png");

    while (window.isOpen())
    {
         Event event;
         while(window.pollEvent(event))
            switch(event.type)
            {
                case Event::Closed:
                    window.close();
                    break;
                 defualt:
                     break;
            }

         background.Show(window);
         title.showText(window);
         modeplayer.showText(window);
         modeauto.showText(window);
         esoeso1.showText(window);
         esoeso2.showText(window);
         rockso.showText(window);
         paperso.showText(window);
         scissorso.showText(window);
         wins.showText(window);
         losses.showText(window);
         draws.showText(window);

        if(menu.handleClick(modeplayer.left, modeplayer.top, modeplayer.bounds.width, modeplayer.bounds.height, window)){
                  lineofrps=1;
                  selectionmode1=1;

    }
     if(menu.handleClick(modeauto.left, modeauto.top, modeauto.bounds.width, modeauto.bounds.height, window)){
                thirdaction=1;
                  selectionmode2=1;

    }
    lineofrps=esoeso1.updateDraws(lineofrps);

    if(lineofrps==1){
        Event gEvent;
        rRock1.Show1(window);
        rPaper1.Show1(window);
        rScissors1.Show1(window);

    while(window.pollEvent(gEvent)){
    if(menu.handleClick(rRock1.left,rRock1.top,rRock1.bounds.width,rRock1.bounds.height, window)){
    selections[observer].typeofelement=1;
     rocks=rockso.updateRocks(rocks);
    observer++;
    rightofplayer--;
    }
    if(menu.handleClick(rPaper1.left,rPaper1.top,rPaper1.bounds.width,rPaper1.bounds.height, window)){
    selections[observer].typeofelement=2;
    papers=paperso.updatePapers(papers);
    observer++;
    rightofplayer--;
    }
    if(menu.handleClick(rScissors1.left,rScissors1.top,rScissors1.bounds.width,rScissors1.bounds.height, window)){
    selections[observer].typeofelement=3;
    scissors=scissorso.updateScissors(scissors);
    observer++;
    rightofplayer--;
    }
    rightofplayer=esoeso2.updatestring(rightofplayer);

      if(rightofplayer==0){
        lineofrps=0;
        observer=0;
        secondaction=1;
    }
    }
}

if(secondaction==1){
        if(clock.getElapsedTime()>seconds(0.5f)){
      rRock.Show(window);
      rPaper.Show(window);
      rScissors.Show(window);
        }
}
if(thirdaction==1){
        if(clock.getElapsedTime()>seconds(0.5f)){
      rRock.Show(window);
      rPaper.Show(window);
      rScissors.Show(window);
      lRock.Show(window);
      lPaper.Show(window);
      lScissors.Show(window);
        }
}

         play.showText(window);
         quit.showText(window);


        if(menu.handleClick(play.left, play.top, play.bounds.width, play.bounds.height, window) && once)
       {
            r = 1;
            clock.restart();
            once = 0;
            endSeq = 0;
        }
        if(menu.handleClick(quit.left, quit.top,
                    quit.bounds.width, quit.bounds.height, window))
            window.close();

        if(r)
        {
            rockstart.showText(window);
            if(clock.getElapsedTime() > seconds(0.5f))
            {
                p = 1;
                r = 0;
            }
        }
        if(p)
        {
            paperstart.showText(window);
            if(clock.getElapsedTime() > seconds(1.0f))
            {
                s = 1;
                p = 0;
            }
        }
        if(s)
        {
            scissorsstart.showText(window);
            if(clock.getElapsedTime() > seconds(1.5f))
            {
                sh = 1;
                s = 0;
            }
        }

        if(sh)
        {
            shoot.showText(window);
            if(clock.getElapsedTime() > seconds(2.0f)){
                sh = 0;
                endSeq = 1;
                gameStart = 1;
            }
        }
         if(!Mouse::isButtonPressed(Mouse::Left) && !once && endSeq)
            once = 1;


 if(gameStart && selectionmode1)
        {
            Event pEvent;
            while(window.pollEvent(pEvent))
            {
            if(Mouse::isButtonPressed(Mouse::Left))
            if(menu.handleClick(rRock.left, rRock.top,
            rRock.bounds.width, rRock.bounds.height, window))
                    {
                        gameStart = 0;
                        playerHand = 0;
                        showWinner = 1;
                        gameEnd = 1;
                        updateScore = 1;
                        break;
                    }
             if(menu.handleClick(rPaper.left, rPaper.top,
                                rPaper.bounds.width, rPaper.bounds.height, window))
                    {
                        gameStart = 0;
                        playerHand = 1;
                        showWinner = 1;
                        gameEnd = 1;
                        updateScore = 1;
                        break;
                    }
                    if(menu.handleClick(rScissors.left, rScissors.top,
                                rScissors.bounds.width, rScissors.bounds.height, window))
                    {
                        gameStart = 0;
                        playerHand = 2;
                        showWinner = 1;
                        gameEnd = 1;
                        updateScore = 1;
                        break;
                    }
                }

            compHand = getCompHand();
            gameResult = getWinner(compHand, playerHand);

}
if(gameStart && selectionmode2)
        {
            compHand =getCompHand();
            compHand2=getCompHand2();
            gameResult = getWinner(compHand, compHand2);
            gameStart=0;
            gameEnd=1;
            showWinner=1;
        }
            if(gameEnd && !gameStart && selectionmode1)
            {
            if(showWinner)
            {
                if(playerHand == 0)
                    lRock.showPlayer(window);
                else if(playerHand == 1)
                    lPaper.showPlayer(window);
                else if(playerHand == 2)
                    lScissors.showPlayer(window);

                if(compHand == 0)
                    rRock.showComp(window);
                else if(compHand == 1)
                    rPaper.showComp(window);
                else if(compHand == 2)
                    rScissors.showComp(window);
            }

            if(gameResult == 0 && showWinner)
            {
                if(updateScore)
            {
                    l = losses.updateLosses(l);
                    updateScore = 0;
            }
                loser.showText(window);
            }
            else if(gameResult == 1 && showWinner)
            {
                if(updateScore)
            {
                    w = wins.updateWins(w);
                    updateScore = 0;
            }
                winner.showText(window);
            }
            else if (gameResult == 2 && showWinner)
            {
                if(updateScore)
                {
                    d = draws.updateDraws(d);
                    updateScore = 0;
                }
                draw.showText(window);
            }
        }

    if(gameEnd && !gameStart && selectionmode2)
        {
            if(showWinner)
            {
                if(compHand2 == 0)
                    lRock.showPlayer(window);
                else if(compHand2 == 1)
                    lPaper.showPlayer(window);
                else if(compHand2 == 2)
                    lScissors.showPlayer(window);

                if(compHand == 0)
                    rRock.showComp(window);
                else if(compHand == 1)
                    rPaper.showComp(window);
                else if(compHand == 2)
                    rScissors.showComp(window);
            }

            if(gameResult == 0 && showWinner)
            {
                if(updateScore)
                {
                    l = losses.updateLosses(l);
                    updateScore = 0;
                }
                loser.showText(window);
            }
            else if(gameResult == 1 && showWinner)
            {
                if(updateScore)
                {
                    w = wins.updateWins(w);
                    updateScore = 0;
                }
                winner.showText(window);
            }
            else if (gameResult == 2 && showWinner)
            {
                if(updateScore)
                {
                    d = draws.updateDraws(d);
                    updateScore = 0;
                }
                draw.showText(window);
            }
        }

   window.display();
    }
    return 0;

}

