//
//  AMSDKAPI.h
//  AMSDK
//
//  Created by Michael Avoyan on 14/09/2016.
//  Copyright © 2016 Michael Avoyan. All rights reserved.
//

#import "AMInitParams.h"
#import "AMContentState.h"
#import "AMEventType.h"
#import "AMAdEventDelegate.h"

@protocol AMSDKAPI <NSObject>

- (void)init:(nonnull AMInitParams*)params __attribute__((deprecated("Use - (void)initialize:(nonnull AMInitParams*)params")));
- (void)initialize:(nonnull AMInitParams*)params;
- (void)startAdBreak:(float)time;
- (void)stopAdBreak;
- (void)updateDisplayFrame:(CGRect)frame;
- (void)updateVideoState:(AMContentState)state;
- (void)updateVideoTime:(float)postion;
- (void)registerEvent:(AMEventType)event eventDelegate:(nonnull id<AMEventDelegate>)delegate;
- (void)setAdVolume:(float)volumeLevel;
- (void)pauseAd;
- (void)resumeAd;
- (float)getAdCurrentTime;
- (float)getAdDuration;
- (void)destroy;

@end

