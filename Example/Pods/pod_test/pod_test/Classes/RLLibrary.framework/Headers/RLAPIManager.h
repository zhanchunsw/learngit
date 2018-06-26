 //
//  APIManager.h
//  AudiTraining
//
//  Created by Jakey on 16/4/13.
//  Copyright © 2016年 www.runlin.cn. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AFNetworking/AFNetworking.h>

@interface RLAPIManager : AFHTTPSessionManager
+ (instancetype)sharedManager;

+ (NSURLSessionDataTask *)SafePOST:(NSString *)URLString
                        parameters:(id)parameters
                           success:(void (^)(NSURLSessionDataTask * task, id responseObject))success
                           failure:(void (^)(NSURLSessionDataTask * task, NSError *error))failure;

+ (NSURLSessionDataTask *)SafeGET:(NSString *)URLString
                       parameters:(id)parameters
                          success:(void (^)(NSURLSessionDataTask * task, id responseObject))success
                          failure:(void (^)(NSURLSessionDataTask * task, NSError *error))failure;
+(NSString *)getSignCheckContentV1:(NSDictionary *)params withURL:(NSString *)URLString;
@end
