//
//  BMEarthDrawElementFinished.h
//  BigeEarth
//
//  Created by 赵洪 on 2021/3/23.
//  Copyright © 2021 赵洪. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef void(^BMEarthDrawElementFinishedBlock)(long elementID);

@interface BMEarthDrawElementFinished : NSObject
@property (nonatomic)BMEarthDrawElementFinishedBlock finishedBlock;
+ (instancetype)shared;
@end

NS_ASSUME_NONNULL_END
