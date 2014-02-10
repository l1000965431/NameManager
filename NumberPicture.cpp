#include "NumberPicture.h"
#include "BoomInclude.h"

CNumberPicture::CNumberPicture()
{
	
}

CNumberPicture::~CNumberPicture()
{

}

void CNumberPicture::CreateNumberPicture( INT32 i32Width, INT32 i32AlignmentType, char *pResPath, INT32 i32Number, INT32 i32NumberSize, ccColor3B color )
{
	m_ResSprite = CCSprite::create( pResPath );
	CCRect SpriteRect = m_ResSprite->boundingBox();
	m_ResSprite->setPosition( ccp( i32Width - SpriteRect.size.width/2, SpriteRect.size.height/2 ) );
	this->addChild( m_ResSprite );

	char szNumber[32] = "";
	sprintf( szNumber, "%d", i32Number );
	m_NumberTTF = CCLabelTTF::create( szNumber, "Arial", i32NumberSize );
	m_NumberTTF->setColor( color );
	this->addChild(m_NumberTTF);

	switch( i32AlignmentType )
	{
	case Left:
		{
			m_NumberTTF->setHorizontalAlignment( kCCTextAlignmentLeft );
		}
		break;

	case Right:
		{
			m_NumberTTF->setHorizontalAlignment( kCCTextAlignmentRight );
		}
		break;

	case Center:
		{
			m_NumberTTF->setHorizontalAlignment( kCCTextAlignmentCenter );
		}
		break;
	}

	m_NumberTTF->setPosition(ccp( (i32Width-SpriteRect.size.width)/2, SpriteRect.size.height/2 ));
	
}

void CNumberPicture::SetNumber( INT32 i32Number )
{
	char szNumber[32] = "";
	sprintf( szNumber, "%d", i32Number );
	m_NumberTTF->setString( szNumber );
}

void CNumberPicture::onEnter()
{
	CCLayer::onEnter();
}

void CNumberPicture::onExit()
{
	CCLayer::onExit();
}
