//
//  SampleScene.h
//  Untitled
//
//  Created by Joe Allen on 8/24/10.
//  Copyright Glaiveware LLC 2010. All rights reserved.
//


// When you import this file, you import all the cocos2d classes
#import "cocos2d.h"

// Sample scene
@interface Sample : CCScene
{
}
- (void) blink:(UIGestureRecognizer*)recognizer node:(CCNode*)node;
- (void) scale:(UIGestureRecognizer*)recognizer node:(CCNode*)node;
- (void) rotate:(UIGestureRecognizer*)recognizer node:(CCNode*)node;
- (void) drag:(UIGestureRecognizer*)recognizer node:(CCNode*)node;
- (void) addRecognizers:(CCNode*)node;

+(id) scene;

@end
