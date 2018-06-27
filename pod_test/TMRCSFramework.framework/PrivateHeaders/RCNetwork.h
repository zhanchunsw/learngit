//
//  RCNetwork.h
//  FFS_New
//
//  Created by 占 on 2017/10/27.
//  Copyright © 2017年 tjtech. All rights reserved.
//

#import <Foundation/Foundation.h>




 



#define kReachable_No @"无网络"
#define kReachable_No_code 123456

typedef enum
{
    GQRequestStylePost = 0,
    GQRequestStyleGet,
    GQRequestStylePut,
    //    GQRequestStyleDelete
}GQRequestStyle;

@interface RCNetwork : NSObject
@property (nonatomic, assign) BOOL notReachable;

+ (RCNetwork *)shareNetwork;

+ (AFHTTPSessionManager *)shareSessionManager;

//请求参数是已序列化传送
+ (void)requestStyle:(GQRequestStyle )style withUrlString:(NSString *)urlString withParameter:(NSDictionary *)parameter returnWithObject:(void (^)(id responseObject,NSError *error))response;

//请求参数是已json传送
+ (void)requestJSONParameterStyle:(GQRequestStyle )style withUrlString:(NSString *)urlString withParameter:(NSDictionary *)parameter returnWithObject:(void (^)(id responseObject,NSError *error))response;



+ (void)requestStyle:(GQRequestStyle )style withManager:(AFHTTPSessionManager *)manager withUrlString:(NSString *)urlString withParameter:(NSDictionary *)parameter returnWithObject:(void (^)(id responseObject,NSError *error))response;

@end
