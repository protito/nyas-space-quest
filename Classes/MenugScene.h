//
//  MenuScene.h
//  scrollerTest.x
//
//  Created by German Torres on 7/22/15.
//
//

#ifndef scrollerTest_x_MenuScene_h
#define scrollerTest_x_MenuScene_h

#include "cocos2d.h"
#include "kConstants.h"
//#include "PuertoScene.h"

USING_NS_CC;

class Menug : public LayerColor
{
public:
    static Scene * createScene();
	virtual bool init();
	CREATE_FUNC(Menug);

private:
    void setupDirector();
    void loadAudio();
    void cacheImages();
    void setupLogo();
    void setupNave();
    void setupButtons();
    void setupLabel();
    
    void loadGame();
	void loadBitacora();
    void exitAkua();
	void loadOptions();
    
    Size visibleSize;
    Size winSize;
    Size frameSize;
	Vec2 origin;
};

#endif