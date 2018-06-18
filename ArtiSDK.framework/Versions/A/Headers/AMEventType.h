//
//  AMEventType.h
//  AMSDK
//
//  Created by Michael Avoyan on 14/09/2016.
//  Copyright © 2016 Michael Avoyan. All rights reserved.
//

typedef NS_ENUM(NSInteger, AMEventType)
{
    EVT_INIT_COMPLETE = 1,
    
    EVT_PAUSE_REQUEST = 2,
    EVT_RESUME_REQUEST = 3,
    
    EVT_AD_SHOW = 4,
    EVT_AD_HIDE = 5,
    
    EVT_AD_CLICK = 6,
    
    EVT_LINEAR_AD_START = 7,
    EVT_LINEAR_AD_PAUSE = 8,
    EVT_LINEAR_AD_RESUME = 9,
    EVT_LINEAR_AD_STOP = 10,
    
    EVT_SESSION_END = 11,
    
    EVT_AD_MISSED = 12,
    
    EVT_ERROR = 13,
    
    // inner evt
    EVT_AD_SCREEN_TOUCH_DOWN = 14,
    EVT_AD_SCREEN_TOUCH_UP = 15
};

#define kEventOnInitComplete        @"onInitComplete"
#define kEventOnPauseRequest        @"onPauseRequest"
#define kEventOnResumeRequest       @"onResumeRequest"
#define kEventOnClickAd             @"onClickAd"
#define kEventOnLinearStart         @"onLinearStart"
#define kEventOnLinearPause         @"onLinearPause"
#define kEventOnLinearResume        @"onLinearResume"
#define kEventOnLinearStop          @"onLinearStop"
#define kEventOnSessionEnd          @"onSessionEnd"
#define kEventOnAdMissed            @"onAdMissed"
#define kEventOnAdShow              @"onAdShow"
#define kEventOnAdHide              @"onAdHide"
#define kEventError                 @"error"
#define kEventAdScreenTouchDown     @"onAdScreenTouchDown"
#define kEventAdScreenTouchUp       @"onAdScreenTouchUp"

static inline NSString* EventTypeToString(AMEventType evt)
{
    switch ( evt )
    {
        case EVT_INIT_COMPLETE: return kEventOnInitComplete;
        case EVT_PAUSE_REQUEST: return kEventOnPauseRequest;
        case EVT_RESUME_REQUEST: return kEventOnResumeRequest;
        case EVT_AD_SHOW: return kEventOnAdShow;
        case EVT_AD_HIDE: return kEventOnAdHide;
        case EVT_AD_CLICK: return kEventOnClickAd;
        case EVT_LINEAR_AD_START: return kEventOnLinearStart;
        case EVT_LINEAR_AD_PAUSE: return kEventOnLinearPause;
        case EVT_LINEAR_AD_RESUME: return kEventOnLinearResume;
        case EVT_LINEAR_AD_STOP: return kEventOnLinearStop;
        case EVT_SESSION_END: return kEventOnSessionEnd;
        case EVT_AD_MISSED: return kEventOnAdMissed;
        case EVT_ERROR: return kEventError;
        case EVT_AD_SCREEN_TOUCH_DOWN: return kEventAdScreenTouchDown;
        case EVT_AD_SCREEN_TOUCH_UP: return kEventAdScreenTouchUp;
            
        default: return kEventError;
    }
}

static inline AMEventType StringToEventType(NSString* evtStr)
{
    if( [evtStr compare:kEventOnInitComplete options:NSCaseInsensitiveSearch] == NSOrderedSame )
        return EVT_INIT_COMPLETE;
    if( [evtStr compare:kEventOnPauseRequest options:NSCaseInsensitiveSearch] == NSOrderedSame )
        return EVT_PAUSE_REQUEST;
    if( [evtStr compare:kEventOnResumeRequest options:NSCaseInsensitiveSearch] == NSOrderedSame )
        return EVT_RESUME_REQUEST;
    if( [evtStr compare:kEventOnAdShow options:NSCaseInsensitiveSearch] == NSOrderedSame )
        return EVT_AD_SHOW;
    if( [evtStr compare:kEventOnAdHide options:NSCaseInsensitiveSearch] == NSOrderedSame )
        return EVT_AD_HIDE;
    if( [evtStr compare:kEventOnClickAd options:NSCaseInsensitiveSearch] == NSOrderedSame )
        return EVT_AD_CLICK;
    if( [evtStr compare:kEventOnLinearStart options:NSCaseInsensitiveSearch] == NSOrderedSame )
        return EVT_LINEAR_AD_START;
    if( [evtStr compare:kEventOnLinearPause options:NSCaseInsensitiveSearch] == NSOrderedSame )
        return EVT_LINEAR_AD_PAUSE;
    if( [evtStr compare:kEventOnLinearResume options:NSCaseInsensitiveSearch] == NSOrderedSame )
        return EVT_LINEAR_AD_RESUME;
    if( [evtStr compare:kEventOnLinearStop options:NSCaseInsensitiveSearch] == NSOrderedSame )
        return EVT_LINEAR_AD_STOP;
    if( [evtStr compare:kEventOnSessionEnd options:NSCaseInsensitiveSearch] == NSOrderedSame )
        return EVT_SESSION_END;
    if( [evtStr compare:kEventOnAdMissed options:NSCaseInsensitiveSearch] == NSOrderedSame )
        return EVT_AD_MISSED;
    if( [evtStr compare:kEventError options:NSCaseInsensitiveSearch] == NSOrderedSame )
        return EVT_ERROR;
    if( [evtStr compare:kEventAdScreenTouchDown options:NSCaseInsensitiveSearch] == NSOrderedSame )
        return EVT_AD_SCREEN_TOUCH_DOWN;
    if( [evtStr compare:kEventAdScreenTouchUp options:NSCaseInsensitiveSearch] == NSOrderedSame )
        return EVT_AD_SCREEN_TOUCH_UP;
    
    return EVT_ERROR;
}


