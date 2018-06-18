//
//  AMEventDelegate.h
//  AMSDK
//
//  Created by Michael Avoyan on 14/09/2016.
//  Copyright © 2016 Michael Avoyan. All rights reserved.
//

#import "AMEventType.h"

@protocol AMEventDelegate <NSObject>

- (void)onAMSDKEvent:(AMEventType)event eventData:(nullable NSObject*)data;

@end

