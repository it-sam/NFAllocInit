//
//  NFViewUtils.h
//
//  Copyright 2012 NextFaze. All rights reserved.
//

#import <UIKit/UIKit.h>

#define UIColorFromRGB(rgbValue) [UIColor \
colorWithRed:((float)((rgbValue & 0xFF0000) >> 16))/255.0 \
green:((float)((rgbValue & 0xFF00) >> 8))/255.0 \
blue:((float)(rgbValue & 0xFF))/255.0 alpha:1.0]

NS_ASSUME_NONNULL_BEGIN

@interface NFViewUtils : NSObject
#if TARGET_OS_TV
+ (void)showAlertWithTitle:(nullable NSString *)title andMessage:(nullable NSString *)message;
+ (void)showAlertWithError:(NSError *)error;
#endif
+ (void)printAvailableFonts;

+ (UIColor *)randomColor;
+ (UIColor *)randomColorWithAlpha:(float)alpha;

+ (UIImage *)imageWithColor:(UIColor *)color;
+ (UIImage *)imageWithColor:(UIColor *)color andSize:(CGSize)size;

+ (void)logRect:(CGRect)rect withDescription:(NSString*)description;
+ (void)logPoint:(CGPoint)point withDescription:(NSString*)description;
+ (void)logSize:(CGSize)size withDescription:(NSString*)description;

+ (UIImage *)scaleAndRotateImage:(UIImage *)image toMaxSize:(int)maxSize;

@end

CGRect CalcRectWithBorder(CGRect rectInitial, int iBorderSize);
CGRect CalcBoundsFromFrame(CGRect rectFrame);
CGRect CalcRectBiggerThanRect(CGRect rectInitial, float dWidth, float dHeight);

NS_ASSUME_NONNULL_END
