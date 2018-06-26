//
//  RLBaseModel.h
//  RLLibrary
//
//  Created by sun on 2018/3/8.
//  Copyright © 2018年 sun. All rights reserved.
//
#import <AFNetworking/AFNetworking.h>
#import <JSONModel/JSONModelLib.h>

//#import "JSONModel.h"
#import "RLConstant.h"
#import "RLAPIManager.h"
#import "NSString+Hash.h"
#import "NSDictionary+JSONString.h"
#import "NSArray+JKSafeAccess.h"
#import "NSDictionary+JSONString.h"
#import "NSDictionary+JKSafeAccess.h"
@interface RLBaseModel : JSONModel
+(id)objectFromDictionary:(NSDictionary*)dict;
@end
