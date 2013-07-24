//
//  HelloWorldLayer.h
//  Cocos2DSimpleGame
//
//  Created by Sheng Jun Dong on 7/21/13.
//  Copyright Sheng 2013. All rights reserved.
//


#import <GameKit/GameKit.h>

// When you import this file, you import all the cocos2d classes
#import "cocos2d.h"

// HelloWorldLayer
@interface HelloWorldLayer : CCLayerColor
{
}

// returns a CCScene that contains the HelloWorldLayer as the only child
+(CCScene *) scene;

@end
