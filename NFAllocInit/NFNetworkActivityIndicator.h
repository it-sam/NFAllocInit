//
//  NFNetworkActivityIndicator.h
//  NFAllocInit
//
//  Created by Ricardo Santos on 19/03/2015.
//  Copyright (c) 2015 NextFaze SD. All rights reserved.
//

#import <UIKit/UIKit.h>
 #if !TARGET_OS_TV
@interface NFNetworkActivityIndicator : NSObject

+ (void)incrementActivityCount;
+ (void)decrementActivityCount;

@end
#endif
