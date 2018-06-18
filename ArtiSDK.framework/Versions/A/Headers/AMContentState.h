//
//  AMContentState.h
//  AMSDK
//
//  Created by Michael Avoyan on 14/09/2016.
//  Copyright © 2016 Michael Avoyan. All rights reserved.
//

typedef NS_ENUM(NSUInteger, AMContentState) {
    
    VIDEO_STATE_PLAY,
    VIDEO_STATE_PAUSE,
    VIDEO_STATE_RESUME,
    VIDEO_STATE_STOP
};

#define kVideoStatePlay     @"play"
#define kVideoStatePause    @"pause"
#define kVideoStateResume   @"resume"
#define kVideoStateStop     @"stop"

static inline NSString* VideoStateToString(AMContentState state)
{
    switch (state) {
        case VIDEO_STATE_PLAY:
            return kVideoStatePlay;
        case VIDEO_STATE_PAUSE:
            return kVideoStatePause;
        case VIDEO_STATE_RESUME:
            return kVideoStateResume;
        case VIDEO_STATE_STOP:
            return kVideoStateStop;
        default:
            return @"";
            
    }
}

