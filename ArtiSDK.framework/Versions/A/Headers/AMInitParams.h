//
//  AMInitParams.h
//  AMSDK
//
//  Created by Michael Avoyan on 14/09/2016.
//  Copyright © 2016 Michael Avoyan. All rights reserved.
//

#import <UIKit/UIKit.h>

#define KEY_PLATFORM                    @"platform"
#define KEY_VIDEO_URL                   @"videoURL"
#define KEY_PUBLISHER_ID                @"publisherID"
#define KEY_VIDEO_ID                    @"videoID"
#define KEY_SITE_KEY                    @"siteKey"
#define KEY_CATEGORY                    @"category"
#define KEY_INIT_TIMEOUT_IN_SECONDS     @"initTimeout"
#define KEY_ENABLE_PREROLL              @"enablePreRoll"
#define KEY_IS_LIVE                     @"isLive"
#define KEY_GENDER                      @"gender"
#define KEY_AGE                         @"age"


@interface AMInitParams : NSObject

@property (nonatomic, strong) NSMutableDictionary* params;
@property (nonatomic, strong) UIView* targetUIView;
@property (nonatomic, strong) NSString* uuid;
@property (nonatomic, strong) NSString* adid;
@property (nonatomic)         double lat;
@property (nonatomic)         double lon;

@property bool enablePreRoll;

- (id)initWithTargetUIView:(UIView*)targetUIView params:(NSDictionary*)params;

- (NSString*)getVideoUrl;
- (NSString*)getPublisherID;
- (NSString*)getVideoID;
- (int)getInitTimeout:(int)defaultInitializationTimeoutInSeconds;

- (NSDictionary*)toDictionary;

@end

