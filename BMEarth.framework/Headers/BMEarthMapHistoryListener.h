//
//  BMEarthMapHistoryListener.h
//  BigeEarth
//
//  Created by 赵洪 on 2020/9/22.
//  Copyright © 2020 赵洪. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN
typedef void(^BMEarthMapHistoryListenerLoadedSuccess)(NSArray * historyArray);
@interface BMEarthMapHistoryListener : NSObject
@property (nonatomic)BMEarthMapHistoryListenerLoadedSuccess historyBlock;
+ (instancetype)shared;
@end

NS_ASSUME_NONNULL_END
