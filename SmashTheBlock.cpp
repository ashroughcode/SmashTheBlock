/*
author: S. M. Shahriar Nirjon
last modified: August 8, 2008
*/

/*

<=---------------------------------------------=>

Project Title : SmashTheBlock
=============================



Project Team
============

Teammate - 01 :
---------------
Name : Md. Hasibul Islam
Student ID : 200104040

Teammate - 02 :
---------------
Name : Yasir Arafah Prince
Student ID : 200104042

Teammate - 03 :
---------------
Name : Ashraf Ahmed Sizan
Student ID : 200104044

<=---------------------------------------------=>

*/

# include <iostream>
using namespace std;
# include "iGraphics.h"
# include <string>

#define totalBlocks 5*10
#define screenWidth 1000
#define screenHeight 600
#define yAxisMargin 50
#define qetaDefine 0
#define PI 3.1416

//int mposx, mposy;
/*
struct blockStructure
{
	int x;
	int y;
	int dx = 90;
	int dy = 20;
	bool show = true;
	int red;
	int green;
	int blue;
};

blockStructure blocks[totalBlocks];
*/

int x[50];
int y[50];

int red[50];
int green[50];
int blue[50];

int block_x1[50] = { 50, 140, 230, 320, 410, 500, 590, 680, 770, 860, 50, 140, 230, 320, 410, 500, 590, 680, 770, 860, 50, 140, 230, 320, 410, 500, 590, 680, 770, 860, 50, 140, 230, 320, 410, 500, 590, 680, 770, 860, 50, 140, 230, 320, 410, 500, 590, 680, 770, 860 };
int block_y1[50] = { 530, 530, 530, 530, 530, 530, 530, 530, 530, 530, 510, 510, 510, 510, 510, 510, 510, 510, 510, 510, 490, 490, 490, 490, 490, 490, 490, 490, 490, 490, 470, 470, 470, 470, 470, 470, 470, 470, 470, 470, 450, 450, 450, 450, 450, 450, 450, 450, 450, 450 };

int block_dx1[50] = { 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90 };
int block_dy1[50] = { 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20 };
bool show1[50] = { true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true };

int block_x2[50] = { 50, 140, 230, 320, 410, 500, 590, 680, 770, 860, 50, 50, 50, 50, 50, 140, 140, 140, 140, 230, 230, 230, 320, 320, 410, 500, 590, 590, 680, 680, 680, 770, 770, 770, 770, 860, 860, 860, 860, 860, 50, 140, 230, 320, 410, 500, 590, 680, 770, 860 };
int block_y2[50] = { 530, 530, 530, 530, 530, 530, 530, 530, 530, 530, 510, 470, 430, 390, 350, 490, 450, 410, 370, 470, 430, 390, 450, 410, 430, 430, 410, 450, 390, 430, 470, 370, 410, 450, 490, 350, 390, 430, 470, 510, 330, 330, 330, 330, 330, 330, 330, 330, 330, 330 };

int block_dx2[50] = { 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90 };
int block_dy2[50] = { 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20 };
bool show2[50] = { true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true };

int block_x3[50] = { 5, 5, 95, 95, 95, 185, 185, 185, 185, 275, 275, 275, 275, 275, 365, 365, 365, 365, 365, 365, 365, 455, 455, 455, 455, 455, 455, 455, 455, 545, 545, 545, 545, 545, 545, 545, 635, 635, 635, 635, 635, 725, 725, 725, 725, 815, 815, 815, 905, 905 };
int block_y3[50] = { 390, 430, 370, 410, 450, 350, 390, 430, 470, 330, 370, 410, 450, 490, 250, 310, 350, 390, 430, 470, 510, 270, 290, 330, 370, 410, 450, 490, 530, 510, 470, 430, 390, 350, 310, 250, 490, 450, 410, 370, 330, 470, 430, 390, 350, 450, 410, 370, 430, 390 };

int block_dx3[50] = { 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90 };
int block_dy3[50] = { 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20 };
bool show3[50] = { true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true };

/*
struct highScore
{
	char name[100];
	int hscore;
};
*/
int hscore;
//int i;
int ball_x = (int) screenWidth/2;
int ball_y = yAxisMargin;
int ballRadius = 10; 
//int dx = 5;
//int dy = 7;

int velocity = 5;
int qeta = 30;
int dx = (int) velocity*cos(qeta*PI / 180);
int dy = (int) velocity*sin(qeta*PI / 180);

int paddle_x = ball_x - 50;
int paddle_y = ball_y - 20;
int paddle_dx = 100;
int paddle_dy = 10;

int score = 0;
// int totalScore = 0;

int enter = 0, high, len, done;

char str[50], srt[20], sr[20], tem[20], temp[20];
char name[4][20];
char scr[4][5];
FILE *fp;

int collisionCount = 0;
int life = 3;
//int level = 0, levelCount = 0;

int music = 1;
int sound = 1;

int flag = 0;
//int innerFlag = 0, flagIn = 0;

//bool music = true;
bool hasStarted = false;
bool pauseMenu = false;

void ballChange();
void ballSpeed();
void restartBall();
void defineBlocks();
void lifeGain();
void highScore();
//void restartGame();

void imusic(int m)
{
	if (m == 1)
	{
		PlaySound("bgmusic.wav", NULL, SND_ASYNC | SND_LOOP);

	}
	else
	{
		PlaySound("click.wav", NULL, SND_ASYNC);

	}

}

void isound(int s)
{
	if (s == 1)
	{
		PlaySound("block.wav", NULL, SND_ASYNC);
	}
	else
	{
		PlaySound("", NULL, SND_ASYNC);
	}
}

/*
void drawTextBox()
{
	iSetColor(150, 150, 150);
	iRectangle(400, 250, 250, 50);
}
*/

/*
function iDraw() is called again and again by the system.
*/
void iDraw()
{
	//place your drawing codes here	

	iClear();

	if (flag == 0)
	{
		pauseMenu = false;
		iShowBMP(0, 0, "cover1.bmp");
		iShowBMP2(400, 370, "start_btn.bmp", 0);
		iShowBMP2(400, 310, "scoreboard_btn.bmp", 0);
		iShowBMP2(400, 250, "settings_btn.bmp", 0);
		iShowBMP2(400, 190, "help_btn.bmp", 0);
		iShowBMP2(400, 130, "credits_btn.bmp", 0);
		iShowBMP2(400, 70, "exit_btn.bmp", 0);

	}

	if (flag == 1)
	{
		iShowBMP(0, 0, "instructions.bmp");
		iShowBMP2(380, 20, "skip_btn.bmp", 0);	
	}

	if (flag == 2)
	{
		iShowBMP(0, 0, "scoreboard.bmp");
		/*
		iSetColor(255, 255, 255);
		iText(335, 420, "Name", GLUT_BITMAP_TIMES_ROMAN_24);
		iFilledRectangle(312, 410, 100, 3);
		iText(605, 420, "Score", GLUT_BITMAP_TIMES_ROMAN_24);
		iFilledRectangle(580, 410, 100, 3);
		*/

		int x = 465, y = 340;
		for (int i = 0; i < 3; i++)
		{
			iSetColor(255, 255, 255);
			iText(x, y, name[i], GLUT_BITMAP_TIMES_ROMAN_24);
			iText(x + 290, y, scr[i], GLUT_BITMAP_TIMES_ROMAN_24);
			y = y - 85;
		}

		iShowBMP2(400, 20, "exittomenu_btn.bmp", 0);
	}

	if (flag == 3)
	{
		iClear();
		iShowBMP(0, 0, "help.bmp");
		iShowBMP2(400, 20, "exittomenu_btn.bmp", 0);
	}

	if (flag == 4)
	{
		iClear();
		iShowBMP(0, 0, "credits.bmp");
		iShowBMP2(380, 10, "exittomenu_btn.bmp", 0);

		/*
		if (flagIn == 0)
		{
			iShowBMP(0, 0, "about1.bmp");
			iShowBMP2(10, 20, "previous_btn.bmp", 0);
			iShowBMP2(790, 20, "next_btn.bmp", 0);
		}
		if (flagIn == 1)
		{
			iShowBMP(0, 0, "about2.bmp");
			iShowBMP2(10, 20, "previous_btn.bmp", 0);
			iShowBMP2(780, 20, "exittomenu_btn1.bmp", 0);
		}
		*/

	}

	if (flag == 5)
	{
		iShowBMP(0, 0, "settings.bmp");
		iShowBMP2(200, 210, "soundOn_btn.bmp", 0);
		iShowBMP2(600, 210, "soundOff_btn.bmp", 0);
		iShowBMP2(400, 20, "exittomenu_btn.bmp", 0);
	}

	if (flag == 6)
	{
		iShowBMP(0, 0, "victory.bmp");
		iShowBMP2(400, 40, "next_btn.bmp", 0);
	}
	if (flag == 7)
	{
		iShowBMP(0, 0, "victory.bmp");
		iShowBMP2(400, 40, "next_btn.bmp", 0);
	}

	/*
	if (flag == 8)
	{
		iShowBMP(0, 0, "victory.bmp");
		iShowBMP2(400, 40, "next_btn.bmp", 0);
	}
	*/

	if (flag == 9)
	{
		iShowBMP(0, 0, "winner.bmp");
		iShowBMP2(400, 20, "next_btn.bmp", 0);
	}

	if (flag == 10)
	{
		iClear();

		iShowBMP(0, 0, "background1.bmp");

		iShowBMP2(430, 565, "level1_top.bmp", 0);
		
		/*
		if (life == 1 || life == 2)
		{
			life += 1;
		}
		*/
		
		
		if (life == 3)
		{
			iShowBMP2(950, 565, "life.bmp", 0);
			iShowBMP2(925, 565, "life.bmp", 0);
			iShowBMP2(900, 565, "life.bmp", 0);
		}
		if (life == 2)
		{
			iShowBMP2(950, 565, "life.bmp", 0);
			iShowBMP2(925, 565, "life.bmp", 0);
		}
		if (life == 1)
		{
			iShowBMP2(950, 565, "life.bmp", 0);
		}

		//iShowBMP2(400, 80, "block1.bmp", 0);
		//iShowBMP2(350, 50, "paddle1.bmp", 0);
		//iShowBMP2(410, 70, "ball2.bmp", 0);

		iSetColor(255, 100, 10);
		iFilledCircle(ball_x, ball_y, ballRadius, 1000);

		iSetColor(120, 150, 30);
		iFilledRectangle(paddle_x, paddle_y, paddle_dx, paddle_dy);

		for (int i = 0; i < totalBlocks; i++)
		{
			if (show1[i])
			{
				iSetColor(red[i], green[i], blue[i]);
				iFilledRectangle(block_x1[i], block_y1[i], block_dx1[i], block_dy1[i]);
			}
		}
	
		iSetColor(255, 255, 255);
		iText(30, 570, "Score : ", GLUT_BITMAP_9_BY_15);
		iText(105, 570, (char*)std::to_string(score).c_str());

		//iText(900, 570, "Life : ");
		//iText(955, 570, (char*)std::to_string(life).c_str());

		//iShowBMP2(50, 450, "block1.bmp", 0);
		//iSetColor(255, 255, 255);
		//iText(180, 10, "Press [space] for start, [p] for pause, [r] for resume and [Home] for exit to menu.");
	}

	if (flag == 11)
	{
		iClear();

		iShowBMP(0, 0, "background2.bmp");

		iShowBMP2(430, 565, "level2_top.bmp", 0);

		if (life == 3)
		{
			iShowBMP2(950, 565, "life.bmp", 0);
			iShowBMP2(925, 565, "life.bmp", 0);
			iShowBMP2(900, 565, "life.bmp", 0);
		}
		if (life == 2)
		{
			iShowBMP2(950, 565, "life.bmp", 0);
			iShowBMP2(925, 565, "life.bmp", 0);
		}
		if (life == 1)
		{
			iShowBMP2(950, 565, "life.bmp", 0);
		}

		iSetColor(129, 245, 55);
		iFilledCircle(ball_x, ball_y, ballRadius, 1000);

		iSetColor(195, 43, 173);
		iFilledRectangle(paddle_x, paddle_y, paddle_dx, paddle_dy);

		for (int i = 0; i < totalBlocks; i++)
		{
			if (show2[i])
			{
				iSetColor(red[i], green[i], blue[i]);
				iFilledRectangle(block_x2[i], block_y2[i], block_dx2[i], block_dy2[i]);
			}
		}

		iSetColor(255, 255, 255);
		iText(30, 570, "Score : ", GLUT_BITMAP_9_BY_15);
		iText(105, 570, (char*)std::to_string(score).c_str());
	}

	if (flag == 12)
	{
		iClear();

		iShowBMP(0, 0, "background3.bmp");

		iShowBMP2(430, 565, "level3_top.bmp", 0);

		if (life == 3)
		{
			iShowBMP2(950, 565, "life.bmp", 0);
			iShowBMP2(925, 565, "life.bmp", 0);
			iShowBMP2(900, 565, "life.bmp", 0);
		}
		if (life == 2)
		{
			iShowBMP2(950, 565, "life.bmp", 0);
			iShowBMP2(925, 565, "life.bmp", 0);
		}
		if (life == 1)
		{
			iShowBMP2(950, 565, "life.bmp", 0);
		}

		iSetColor(255, 3, 1);
		iFilledCircle(ball_x, ball_y, ballRadius, 1000);

		iSetColor(1, 193, 212);
		iFilledRectangle(paddle_x, paddle_y, paddle_dx, paddle_dy);

		for (int i = 0; i < totalBlocks; i++)
		{
			if (show3[i])
			{
				iSetColor(red[i], green[i], blue[i]);
				iFilledRectangle(block_x3[i], block_y3[i], block_dx3[i], block_dy3[i]);
			}
		}

		iSetColor(255, 255, 255);
		iText(30, 570, "Score : ", GLUT_BITMAP_9_BY_15);
		iText(105, 570, (char*)std::to_string(score).c_str());
	}

	if (flag == 13)
	{
		iShowBMP(0, 0, "gameover.bmp");
		//iShowBMP2(17, 20, "playagain_btn.bmp", 0);
		//iShowBMP2(780, 20, "exittomenu_btn.bmp", 0);
		iShowBMP2(400, 20, "next_btn.bmp", 0);
	}

	if (flag == 14)
	{
		iShowBMP(0, 0, "level1.bmp");
		iShowBMP2(400, 70, "play_btn.bmp", 0);
	}
	if (flag == 15)
	{
		iShowBMP(0, 0, "level2.bmp");
		iShowBMP2(400, 70, "play_btn.bmp", 0);
	}
	if (flag == 16)
	{
		iShowBMP(0, 0, "level3.bmp");
		iShowBMP2(400, 70, "play_btn.bmp", 0);
	}

	if (flag == 17)
	{
		iClear();
		iShowBMP(0, 0, "cover1.bmp");
		//drawTextBox();
		
		if (!done) highScore();
		done = 1;

		//iSetColor(255, 255, 255);
		//iFilledRectangle(400, 250, 210, 40);

		if (high == 1)
		{
			//iText(412, 370, "Congratulations!!!", GLUT_BITMAP_TIMES_ROMAN_24);
			//iText(368, 340, "You have made a new high score.", GLUT_BITMAP_HELVETICA_18);
			//iText(438, 225, "Input your name", GLUT_BITMAP_9_BY_15);
			//iFilledRectangle(400, 250, 210, 40);
			
			iShowBMP(0, 0, "congrats.bmp");

			iSetColor(0, 0, 0);
			iText(470, 195, sr, GLUT_BITMAP_TIMES_ROMAN_24);
		}

		if (enter == 1)
		{
			int i, j;
			for (j = 0; j<3; j++){
				for (i = 0; i < 3; i++){
					if (strcmp(scr[i], scr[i + 1])<0){
						strcpy(tem, scr[i]);
						strcpy(scr[i], scr[i + 1]);
						strcpy(scr[i + 1], tem);
						strcpy(temp, name[i]);
						strcpy(name[i], name[i + 1]);
						strcpy(name[i + 1], temp);
					}
				}
			}
			enter = 0;
		}

		iShowBMP2(30, 30, "credits_btn1.bmp", 0);
		iShowBMP2(770, 30, "exit_btn1.bmp", 0);
	}

	if (flag == 18)
	{
		iShowBMP(0, 0, "credits.bmp");
		iShowBMP2(380, 10, "exit_btn1.bmp", 0);
	}

	if (pauseMenu)
	{
		iShowBMP(0, 0, "cover1.bmp");
		iShowBMP2(400, 270, "continue_btn.bmp", 0);
		//iShowBMP2(400, 90, "scoreboard_btn.bmp", 0);
		//iShowBMP2(400, 330, "help_btn.bmp", 0);
		//iShowBMP2(400, 150, "settings_btn.bmp", 0);
		iShowBMP2(400, 210, "exittomenu_btn.bmp", 0);
	}

	/*
	if (flag == 19)
	{
		iShowBMP(0, 0, "help.bmp");
		iShowBMP2(400, 10, "exit_btn1.bmp", 0);
	}

	if (flag == 20)
	{
		iShowBMP(0, 0, "settings.bmp");
		iShowBMP2(200, 210, "soundOn_btn.bmp", 0);
		iShowBMP2(600, 210, "soundOff_btn.bmp", 0);
		iShowBMP2(400, 20, "exit_btn1.bmp", 0);
	}
	*/
	
}

/*
function iMouseMove() is called when the user presses and drags the mouse.
(mx, my) is the position where the mouse pointer is.
*/
void iMouseMove(int mx, int my)
{
	//place your codes here
	/*
	if (paddle_x > 0)
	{
		paddle_x = mx - 10;
		if (!hasStarted)
		{
			ball_x = mx - 50;
		}
	}

	if (paddle_x < screenWidth - paddle_dx)
	{
		paddle_x = mx + 10;
		if (!hasStarted)
		{
			ball_x = mx + 50;
		}
	}
	*/
}

/*
function iPassiveMouse() is called when the user moves the mouse.
(mx, my) is the position where the mouse pointer is.
*/
void iPassiveMouse(int mx, int my)
{
	//place your codes here
	/*
	if (!hasStarted)
	{
		ball_x = mx + 50;
		paddle_x = mx;
	}
	if (hasStarted)
	{
		paddle_x = mx;
	}
	*/

	/*
	if (paddle_x > 0)
	{
		paddle_x = mx - 10;
		if (!hasStarted)
		{
			ball_x = mx - 50;
		}
	}

	if (paddle_x < screenWidth - paddle_dx)
	{
		paddle_x = mx + 10;
		if (!hasStarted)
		{
			ball_x = mx + 50;
		}
	}
	*/

}

/*
function iMouse() is called when the user presses/releases the mouse.
(mx, my) is the position where the mouse pointer is.
*/
void iMouse(int button, int state, int mx, int my)
{
	//printf("%d, %d\n", mx, my);

	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		//place your codes here

		//printf("%d, %d\n", mx, my);

		if (pauseMenu = true || flag >= 0 && flag <= 9 || flag >= 13 && flag <= 18)
		{
			if (music == 0)
			{ 
				PlaySound("click.wav", NULL, SND_ASYNC); 
			}
		}

		if (flag == 0 && mx >= 407 && mx <= 593 && my >= 378 && my <= 423)
		{
			flag = 1;
		}
		if (flag == 1 && mx >= 387 && mx <= 573 && my >= 28 && my <= 72)
		{
			flag = 14;
		}
		if (flag == 14 && mx >= 406 && mx <= 593 && my >= 75 && my <= 126)
		{
			flag = 10;
		}
		if (flag == 0 && mx >= 407 && mx <= 593 && my >= 319 && my <= 363)
		{
			flag = 2;
		}
		if (flag == 2 && mx >= 406 && mx <= 594 && my >= 27 && my <= 72)
		{
			flag = 0;
		}
		if (flag == 0 && mx >= 407 && mx <= 593 && my >= 198 && my <= 242)
		{
			flag = 3;
			//flagIn = 0;
		}
		if (flag == 3 && mx >= 406 && mx <= 594 && my >= 27 && my <= 72)
		{
			flag = 0;
		}
		/*
		if (flagIn == 0 && mx >= 20 && mx <= 199 && my >= 25 && my <= 75)
		{
			flag = 0;
		}
		if (flagIn == 0 && mx >= 799 && mx <= 980 && my >= 25 && my <= 75)
		{
			flagIn = 1;
		}
		if (flagIn == 1 && mx >= 20 && mx <= 199 && my >= 25 && my <= 75)
		{
			flagIn = 0;
		}
		if (flagIn == 1 && mx >= 781 && mx <= 977 && my >= 24 && my <= 77)
		{
			//flag = 0;
		}
		*/
		if (flag == 0 && mx >= 407 && mx <= 593 && my >= 138 && my <= 182)
		{
			flag = 4;
		}
		if (flag == 4 && mx >= 386 && mx <= 574 && my >= 18 && my <= 62)
		{
			flag = 0;
		}
		if (flag == 0 && mx >= 407 && mx <= 593 && my >= 258 && my <= 302)
		{
			flag = 5;
		}
		if (flag == 5 && mx >= 202 && mx <= 402 && my >= 215 && my <= 271)
		{
			music = 1;
			imusic(music);
			//sound = 1;
			//isound(sound);
		}
		if (flag == 5 && mx >= 602 && mx <= 802 && my >= 215 && my <= 271)
		{
			music = 0;
			imusic(music);
			//sound = 0;
			//isound(sound);
		}
		if (flag == 5 && mx >= 406 && mx <= 594 && my >= 27 && my <= 73)
		{
			flag = 0;
		}
		/*
		
		if (flag == 5 && mx >= 406 && mx <= 594 && my >= 27 && my <= 72)
		{
			flag = 0;
		}
		*/
		if (flag == 0 && mx >= 407 && mx <= 593 && my >= 79 && my <= 122)
		{
			exit(0);
		}
		/*
		if (flag == 13 && mx >= 20 && mx <= 199 && my >= 25 && my <= 75)
		{
			flag = 14;
		}
		
		if (flag == 13 && mx >= 786 && mx <= 974 && my >= 27 && my <= 72)
		{
			flag = 0;
		}
		*/
		if (flag == 13 && mx >= 409 && mx <= 590 && my >= 25 && my <= 75)
		{
			flag = 17;
		}
		//*/
		/*
		if (flag == 17 && mode == 0 && mx >= 50 && mx <= 300 && my >= 250 && my <= 280)
		{
			mode = 1;
		}
		*/
		if (flag == 6 && mx >= 409 && mx <= 590 && my >= 46 && my <= 95)
		{
			flag = 15;
		}
		if (flag == 15 && mx >= 406 && mx <= 593 && my >= 75 && my <= 126)
		{
			flag = 11;
		}
		if (flag == 7 && mx >= 409 && mx <= 590 && my >= 46 && my <= 95)
		{
			flag = 16;
		}
		if (flag == 16 && mx >= 406 && mx <= 593 && my >= 75 && my <= 126)
		{
			flag = 12;
		}
		/*
		if (flag == 8 && mx >= 409 && mx <= 590 && my >= 46 && my <= 95)
		{
			flag = 9;
		}
		*/
		if (flag == 9 && mx >= 409 && mx <= 590 && my >= 25 && my <= 75)
		{
			flag = 17;
		}
		if (flag == 17 && mx >= 37 && mx <= 223 && my >= 37 && my <= 82)
		{
			flag = 18;
		}
		if (flag == 17 && mx >= 777 && mx <= 963 && my >= 37 && my <= 82)
		{
			flag = 0;
		}
		if (flag == 18 && mx >= 386 && mx <= 574 && my >= 18 && my <= 62)
		{
			flag = 17;
		}
		if (pauseMenu = true && mx >= 407 && mx <= 593 && my >= 278 && my <= 322)
		{
			iResumeTimer(0);
			//flag = 19;
		}
		if (pauseMenu = true && mx >= 407 && mx <= 593 && my >= 218 && my <= 262)
		{
			flag = 0;
			//flag = 20;
		}
		/*
		if (flag == 19 && mx >= 406 && mx <= 594 && my >= 18 && my <= 62)
		{
			flag = 0;
		}
		if (flag == 20 && mx >= 406 && mx <= 594 && my >= 27 && my <= 72)
		{
			flag = 0;
		}
		if (pauseMenu = true && mx >= 407 && mx <= 593 && my >= 158 && my <= 202)
		{
			flag = 0;
		}
		if (pauseMenu = true && mx >= 407 && mx <= 593 && my >= 338 && my <= 382)
		{
			iResumeTimer(0);
		}
		if (pauseMenu = true && mx >= 407 && mx <= 593 && my >= 98 && my <= 142)
		{
			flag = 0;
		}
		*/

	}
	if (button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
	{
		//place your codes here
	}
}

/*
function iKeyboard() is called whenever the user hits a key in keyboard.
key- holds the ASCII value of the key pressed.
*/
void iKeyboard(unsigned char key)
{
	if (key == ' ')
	{
		if (!hasStarted)
		{
			hasStarted = true;
		}
	}
	if (key == 'p' || key == 'P')
	{
		//do something with 'p'
		iPauseTimer(0);
		//if (iPauseTimer)
		//{
			pauseMenu = true;
		//}
		
	}
	if (key == 'r' || key == 'R')
	{
		iResumeTimer(0);
		//if (iResumeTimer)
		//{
			pauseMenu = false;
		//}
		//restartBall();
	}

	if (high == 1)
	{
		if (key == '\r')
		{
			
			enter = 1;
			high = 0;
			strcpy(name[3], sr);
			strcpy(scr[3], srt);
			for (int i = 0; i < len; i++)  sr[i] = 0;
			len = 0;
			//flag = 0;
		}
		else
		{
			if (len <= 15) sr[len] = key, len++;
		}

	}

	//place your codes for other keys here
}

/*
function iSpecialKeyboard() is called whenver user hits special keys like-
function keys, home, end, pg up, pg down, arraows etc. you have to use
appropriate constants to detect them. A list is:
GLUT_KEY_F1, GLUT_KEY_F2, GLUT_KEY_F3, GLUT_KEY_F4, GLUT_KEY_F5, GLUT_KEY_F6,
GLUT_KEY_F7, GLUT_KEY_F8, GLUT_KEY_F9, GLUT_KEY_F10, GLUT_KEY_F11, GLUT_KEY_F12,
GLUT_KEY_LEFT, GLUT_KEY_UP, GLUT_KEY_RIGHT, GLUT_KEY_DOWN, GLUT_KEY_PAGE UP,
GLUT_KEY_PAGE DOWN, GLUT_KEY_HOME, GLUT_KEY_END, GLUT_KEY_INSERT
*/
void iSpecialKeyboard(unsigned char key)
{
	if (key == GLUT_KEY_LEFT)
	{
		if (paddle_x > 0)
		{
			paddle_x -= 10;
			if (!hasStarted)
			{
				ball_x -= 10;
			}
		}
	}
	else if (key == GLUT_KEY_RIGHT)
	{
		if (paddle_x < screenWidth - paddle_dx)
		{
			paddle_x += 10;
			if (!hasStarted)
			{
				ball_x += 10;
			}
		}
	}
	
	else if (key == GLUT_KEY_INSERT)
	{
		if (music == 1)
		{
			music = 0;
			imusic(music);
			//PlaySound(0, 0, 0);
		}
		else
		{
			music = 1;
			imusic(music);
			//PlaySound("bgmusic.wav", NULL, SND_LOOP | SND_ASYNC);
		}
	}
	
	else if (key == GLUT_KEY_HOME)
	{
		flag = 0;
	}
	else if (key == GLUT_KEY_END)
	{
		exit(0);
	}
	//place your codes for other keys here
}

void ballChange()
{
	if (hasStarted)
	{
		ball_x += dx;
		ball_y += dy;

		if (ball_x > screenWidth || ball_x < 0)dx = -dx;
		if (ball_y > screenHeight || ball_y < 0)dy = -dy;

		if (flag == 10)
		{
			for (int i = 0; i < totalBlocks; i++)
			{
				if (show1[i])
				{
					if (ball_x >= block_x1[i] && ball_x <= block_x1[i] + block_dx1[i])
					{
						if (ball_y >= block_y1[i] && ball_y <= block_y1[i] + block_dy1[i])
						{
							dy = -dy;
							if (show1[i])
							{
								isound(sound);
								show1[i] = false;
								score += 5;
								hscore = score;
								collisionCount++;
							}
							if (collisionCount == 50)
							{
								flag = 6;
								lifeGain();
								restartBall();
							}
						}
					}
					else if (ball_y >= block_y1[i] && ball_y <= block_y1[i] + block_dy1[i])
					{
						if (ball_x >= block_x1[i] && ball_x <= block_x1[i] + block_dx1[i])
						{
							dx = -dx;
							if (show1[i])
							{
								isound(sound);
								show1[i] = false;
								score += 5;
								hscore = score;
								collisionCount++;
							}
							if (collisionCount == 50)
							{
								flag = 6;
								lifeGain();
								restartBall();
							}
						}
					}
				}
			}	
		}

		if (flag == 11)
		{
			for (int i = 0; i < totalBlocks; i++)
			{
				if (show2[i])
				{
					if (ball_x >= block_x2[i] && ball_x <= block_x2[i] + block_dx2[i])
					{
						if (ball_y >= block_y2[i] && ball_y <= block_y2[i] + block_dy2[i])
						{
							dy = -dy;
							if (show2[i])
							{
								isound(sound);
								show2[i] = false;
								score += 5;
								hscore = score;
								collisionCount++;
							}
							if (collisionCount == 100)
							{
								flag = 7;
								lifeGain();
								restartBall();
							}
						}
					}
					else if (ball_y >= block_y2[i] && ball_y <= block_y2[i] + block_dy2[i])
					{
						if (ball_x >= block_x2[i] && ball_x <= block_x2[i] + block_dx2[i])
						{
							dx = -dx;
							if (show2[i])
							{
								isound(sound);
								show2[i] = false;
								score += 5;
								hscore = score;
								collisionCount++;
							}
							if (collisionCount == 100)
							{
								flag = 7;
								lifeGain();
								restartBall();
							}
						}
					}
				}
			}
		}

		if (flag == 12)
		{
			for (int i = 0; i < totalBlocks; i++)
			{
				if (show3[i])
				{
					if (ball_x >= block_x3[i] && ball_x <= block_x3[i] + block_dx3[i])
					{
						if (ball_y >= block_y3[i] && ball_y <= block_y3[i] + block_dy3[i])
						{
							dy = -dy;
							if (show3[i])
							{
								isound(sound);
								show3[i] = false;
								score += 5;
								hscore = score;
								collisionCount++;
							}
							if (collisionCount == 150)
							{
								flag = 9;
								//lifeGain();
								//restartBall();
							}
						}
					}
					else if (ball_y >= block_y3[i] && ball_y <= block_y3[i] + block_dy3[i])
					{
						if (ball_x >= block_x3[i] && ball_x <= block_x3[i] + block_dx3[i])
						{
							dx = -dx;
							if (show3[i])
							{
								isound(sound);
								show3[i] = false;
								score += 5;
								hscore = score;
								collisionCount++;
							}
							if (collisionCount == 150)
							{
								flag = 9;
								//lifeGain();
								//restartBall();
							}
						}
					}
				}
			}
		}

		if (ball_x >= paddle_x && ball_x <= paddle_x + paddle_dx && ball_y >= paddle_y && ball_y <= paddle_y + paddle_dy)
		{
			//dy = -dy;
			/*
			velocity = 5;
			qeta = (paddle_x + paddle_dx - ball_x) + 40;
			dx = (int)velocity*cos(qeta*PI / 180);
			dy = (int)velocity*sin(qeta*PI / 180);
			*/
			ballSpeed();
			
		}
		else
		{
			if (ball_y < paddle_y) 
			{
				life--;
				restartBall();
			}
		}
	}
}

void ballSpeed()
{
	if (score <= 90 || score > 250 && score <= 340 || score > 500 && score <= 590)
	{
		velocity = 5;
		qeta = (paddle_x + paddle_dx - ball_x) + 40;
		dx = (int)velocity*cos(qeta*PI / 180);
		dy = (int)velocity*sin(qeta*PI / 180);
	}
	else if (score > 90 && score <= 170 || score > 340 && score <= 420 || score > 590 && score <= 670)
	{
		velocity = 6;
		qeta = (paddle_x + paddle_dx - ball_x) + 40;
		dx = (int)velocity*cos(qeta*PI / 180);
		dy = (int)velocity*sin(qeta*PI / 180);
	}
	else if (score > 170 && score <= 250 || score > 420 && score <= 500 || score > 670 && score <= 750)
	{
		velocity = 7;
		qeta = (paddle_x + paddle_dx - ball_x) + 40;
		dx = (int)velocity*cos(qeta*PI / 180);
		dy = (int)velocity*sin(qeta*PI / 180);
	}
}

void restartBall()
{
	if (life >= 1 && life <= 3)
	{
		ball_x = (int)screenWidth / 2;
		ball_y = yAxisMargin;
		//dx = 5;
		//dy = 7;

		velocity = 5;
		qeta = 30;
		dx = (int)velocity*cos(qeta*PI / 180);
		dy = (int)velocity*sin(qeta*PI / 180);
		
		//ballSpeed();

		paddle_x = ball_x - 50;
		paddle_y = ball_y - 20;

		hasStarted = false;
	}
	if (life < 1)
	{
		flag = 13;
		//restartGame();
	}
}


void defineBlocks()
{
	int sumx = 50;
	int sumy = 450;
	for (int i = 0; i < totalBlocks; i++)
	{
		red[i] = rand() % 255;
		green[i] = rand() % 255;
		blue[i] = rand() % 255;
		x[i] = sumx;
		y[i] = sumy;
		sumx += 90;
		if (sumx > 900)
		{
			sumx = 50;
			sumy += 20;
		}
	}
}

void lifeGain()
{
	if (life == 1 || life == 2)
	{
		life += 1;
	}
}

void highScore()
{
	//int i;
	sprintf(srt, "%d", hscore);
	if (strcmp(srt, scr[2])>0) high = 1;

}

/*
void updateScore()
{
	FILE *ScoreBoard = fopen("ScoreBoard.txt", "w");
	for (int)
}
*/
/*
void restartGame()
{
	if (life < 1)
	{
		int block_dx1[50] = { 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90 };
		int block_dy1[50] = { 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20 };
		bool show1[50] = { true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true };

		int block_dx2[50] = { 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90 };
		int block_dy2[50] = { 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20 };
		bool show2[50] = { true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true };

		int block_dx3[50] = { 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90 };
		int block_dy3[50] = { 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20 };
		bool show3[50] = { true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true };
		
		score = 0;
		collisionCount = 0;
		life = 3;
	}
	else
	{
		iPauseTimer(0);
	}
}
*/


int main()
{
	//place your own initialization codes here. 
	fp = fopen("ScoreBoard.txt", "r");
	
	for (int i = 0; i < 3; i++){
		fscanf(fp, "%s %s", name[i], scr[i]);
	}
	fclose(fp);

	defineBlocks();
	iSetTimer(15, ballChange);
	
	if (music == 1)
	{
		PlaySound("bgmusic.wav", NULL, SND_LOOP | SND_ASYNC);
	}	
	
	iInitialize(screenWidth, screenHeight, "SmashTheBlock");
	iStart();


	return 0;
}
