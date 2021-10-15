//
//  BMEarthPublicDefine.h
//  BigeEarth
//
//  Created by 赵洪 on 2021/9/6.
//  Copyright © 2021 赵洪. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreGraphics/CoreGraphics.h>

@interface BMEarthPublicDefine : NSObject
#define CStringToNSString(cstr) [NSString stringWithUTF8String:cstr.c_str()]
#define NSStringToCString(nstr) std::string([nstr cStringUsingEncoding:NSUTF8StringEncoding])

extern NSString *const KElementPropertyForm;

+ (NSArray *)getEarthCachePaths;
+ (NSString *)getLocalRegionCacheFilesPath;
+ (NSString *)getLocalDIYIconPath;
+ (NSString *)getLocalAccessoryPath;
+ (CGFloat)degreesToRadian:(CGFloat)degrees;
+ (CGFloat)radiansToDegrees:(CGFloat)radians;
+ (CGFloat)distanceBetweenPointsFirst:(CGPoint)first second:(CGPoint)second;
+ (CGFloat)angleBetweenPointsFirst:(CGPoint)first second:(CGPoint)second;
+ (CGFloat)angleBetweenLinesFirst:(CGPoint)line1Start line1End:(CGPoint)line1End line2Start:(CGPoint)line2Start line2End:(CGPoint)line2End;
@end


