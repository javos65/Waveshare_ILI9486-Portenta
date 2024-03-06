#ifndef CONTROL_H
#define CONTROL_H


class Control
{
private:
	int pressed_x,pressed_y,pressed_s;
	int prevx,prevy,prevs; //used to clear (better than fillScreen()!!)
  char keyvalue;
  int BLEconnected,BLEactive ;

public:
	Control();
	virtual ~Control();

 void init();
 void getKeys();
	int getCX();
	int getCY();
	int getCS();
  int getBLE();
	
};

#endif  CONTROL_H