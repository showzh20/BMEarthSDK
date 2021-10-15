//
//  BMEarthLoadFileListener.h
//  BigeEarth
//
//  Created by 赵洪 on 2020/9/14.
//  Copyright © 2020 赵洪. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "BMEarthElementModel.h"
NS_ASSUME_NONNULL_BEGIN
typedef void(^BMEarthLoadFileListenerLoadedSuccess)(BMEarthElementModel * model);
@interface BMEarthLoadFileListener : NSObject
@property (nonatomic)BMEarthLoadFileListenerLoadedSuccess loadedBlock;
+ (instancetype)shared;
@end

NS_ASSUME_NONNULL_END
