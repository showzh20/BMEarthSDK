//
//  BMEarthDrawingStateListener.h
//  BigeEarth
//
//  Created by 赵洪 on 2020/9/29.
//  Copyright © 2020 赵洪. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreGraphics/CoreGraphics.h>
NS_ASSUME_NONNULL_BEGIN
typedef void(^BMEarthDrawingStateListenerAddNewPoint)(int elemntType ,int pointCount,CGPoint pointLocation);
@interface BMEarthDrawingStateListener : NSObject
@property(nonatomic)BMEarthDrawingStateListenerAddNewPoint addNewPointBlock;
+ (instancetype)shared;
@end

NS_ASSUME_NONNULL_END
