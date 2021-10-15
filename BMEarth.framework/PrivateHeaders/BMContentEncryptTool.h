//
//  BMContentEncryptTool.h
//  BigeEarth
//
//  Created by 赵洪 on 2020/12/15.
//  Copyright © 2020 赵洪. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface BMContentEncryptTool : NSObject
+ (NSData *)encodeContentWithParameters:(NSDictionary *)params;

+ (NSDictionary *)decodeContentWithJosnData:(NSData *)josnData;
@end

NS_ASSUME_NONNULL_END
