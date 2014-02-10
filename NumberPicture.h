#pragma once
#include "common.h"

class CNumberPicture : public cocos2d::CCLayer
{
public:
	//¶ÔÆë·½Ê½
	enum AlignmentType
	{
		Left,
		Right,
		Center,
	};
public:
	CNumberPicture();
	~CNumberPicture();
	CREATE_FUNC( CNumberPicture );

	void CreateNumberPicture( INT32 i32Width, INT32 i32AlignmentType, char *pResPath, INT32 i32Number, INT32 i32NumberSize ,ccColor3B color );
	void SetNumber( INT32 i32Number );
	virtual void onEnter();
	virtual void onExit();

public:
	
private:
	CCSprite *m_ResSprite;
	CCLabelTTF *m_NumberTTF;

};