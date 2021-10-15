//
//  BMEarthGestureListener.h
//  BigeEarth
//
//  Created by 赵洪 on 2021/2/4.
//  Copyright © 2021 赵洪. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreGraphics/CoreGraphics.h>
NS_ASSUME_NONNULL_BEGIN
typedef void(^BMEarthGestureListenerRotation)(CGFloat angle);
@interface BMEarthGestureListener : NSObject
@property (nonatomic)BMEarthGestureListenerRotation rotationBlock;
+ (instancetype)shared;
@end

NS_ASSUME_NONNULL_END
