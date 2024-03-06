#ifndef ENEMY_H
#define ENEMY_H

// Includes
#include <SPI.h>
#include <Adafruit_GFX.h>
#include <Waveshare_ILI9486.h>
#include "Screen.h"


// Defines



namespace{ }

// Enemy class
class Enemy
{
private:
	int m_x, m_y; //position of enemy
	int m_prevx, m_prevy; //previous posiotion of enemy
	int m_bulletx, m_bullety;
	bool shootBullet;
	int type;
	int timerb;
  int timerx;
  int timery;
	int buzzer; // for buzzer
	int shift;
  int bombrate;
	bool alive; //life state of enemy
  int explode;
	
	int animationFrame; //animation frame of enemy
	
	Waveshare_ILI9486 *m_tft; // a pointer to the display

public:
	// Constructor // Destructor
	Enemy(Waveshare_ILI9486 *m_tft, int x, int y, int B,int Ti);
	virtual ~Enemy();
	
	//Getters
	bool getAlive();
	int getX();
	int getY();
	int getBulletX();
	int getBulletY();
	
	bool collide(int x1, int y1);
	
	
	//functions
	void shoot();
	void stopShoot();
	void update();
	void render();
};

#endif // !ENEMY_H