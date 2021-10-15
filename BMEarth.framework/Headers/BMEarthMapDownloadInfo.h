//
//  BMEarthMapDownloadInfo.h
//  BigeEarth
//
//  Created by 赵洪 on 2021/7/21.
//  Copyright © 2021 赵洪. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface BMEarthMapDownloadInfo : NSObject
@property(nonatomic)NSMutableDictionary *headerDict;
@property(nonatomic)NSString *mapRequestURL;
@end

NS_ASSUME_NONNULL_END
