#pragma once
#include "Transform.h"
#include "cinder/app/MouseEvent.h"
#include "cinder/app/TouchEvent.h"
#include "cinder/app/App.h"
#include "cinder/Log.h"
#include "cinder/svg/SvgGl.h"
#include "cinder/svg/Svg.h"
#include "cinder/cairo/Cairo.h"
#include "cinder/Text.h"
#include "cinder/gl/Texture.h"
#include <string>

using namespace ci;
using namespace ci::app;
using namespace std;

//class for card. 
class Card
{
public:
	Card();
	Card(const float, const float);
	~Card();
	void update();
	//State getcurrentstate();
	void mouseDrag(MouseEvent event);
	void mouseDown(MouseEvent event);
	void mouseUp(MouseEvent event);

	void touchesBegan(TouchEvent event);
	void touchesMoved(TouchEvent event);
	void touchesEnded(TouchEvent event);

	float x;
	float y;
	float width;
	float height;
	string title;
	string subtitle;
	string body;
	//image img[];
	//Rectf rect;
	double cardSize;
	int pathID;
	bool isClicked;
	bool isDragged;
	bool isFront;
	bool isShown;

	Rectf rect;
	Transform transform;

	vec2 imgCo;
	vec2 titleCo;
	vec2 bodyCo;
	vec2 tagsCo;

	gl::TextureRef imgTex;
	gl::TextureRef titleTex;
	gl::TextureRef bodyTex;
	gl::TextureRef tagsTex;

	void setpos(float m, float n);
	gl::TextureRef renderTexture(TextBox &text);
	void initElements();
	/*
	string rubrik
	string br�dtext
	img img1
	img img2
	taget fr�n xml
	*/

	//State currentstate;
};

