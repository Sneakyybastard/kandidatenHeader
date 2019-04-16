#pragma once
#include "Transform.h"
#include "cinder/app/MouseEvent.h"
#include "cinder/app/TouchEvent.h"
#include "cinder/app/App.h"
#include "cinder/Log.h"
#include "cinder/svg/SvgGl.h"
#include "cinder/svg/Svg.h"
#include "cinder/Text.h"
#include "cinder/Font.h"
#include "cinder/gl/Texture.h"
#include "cinder/GeomIo.h"
#include <string>

using namespace ci;
using namespace ci::app;
using namespace std;

//class for card.
class Card
{
public:
	Card();
	Card(const float, const float, std::string title, std::string body);
	~Card();
	void update();
	
	/*void mouseDrag(MouseEvent event);
	void mouseDown(MouseEvent event);
	void mouseUp(MouseEvent event);
	*/
	void touchesBegan(TouchEvent event);
	void touchesMoved(TouchEvent event);
	void touchesEnded(TouchEvent event);

    vec2 initVec;
	vector<TouchEvent::Touch> activeTouchesOnCard;
	float angle;
    float initAngle;
    glm::mat3 scaleMat;
    glm::mat3 transMat;
    glm::mat3 rotMat;
    TouchEvent::Touch lastTouch;
    TouchEvent::Touch lastRotTouch;

	float x;
	float y;
	float width;
	float height;
	string title;
	string subtitle;
	string body;
	float cardSize;
	int pathID;
	bool isClicked;
	bool isDragged;
	bool isFront;
	bool isShown;
    bool isScaled;
	bool twoTouches;

	Rectf rect;
	Transform transform;

	vec2 imgCo;
	vec2 titleCo;
	vec2 bodyCo;
	vec2 tagsCo;

	Color bgColor;
	Color borderColor;
	float borderRadius;
	ColorA textColor;
	
	DataSourceRef raleway;
	DataSourceRef montserrat;

	float elementWidth;
	float paddingX;

	gl::TextureRef imgTex;
	gl::TextureRef titleTex;
	gl::TextureRef bodyTex;
	gl::TextureRef tagsTex;

	void setpos(float m, float n);
	gl::TextureRef renderTexture(TextBox &text);
	void renderCard();
	void initElements();
	void updateElementCoords();
	void setStyles();

};

