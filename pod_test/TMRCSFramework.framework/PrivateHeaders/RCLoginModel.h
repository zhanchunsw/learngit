//
//  RCLoginModel.h
//  FFS_New
//
//  Created by 占 on 2017/10/28.
//  Copyright © 2017年 tjtech. All rights reserved.
//

#import "RCBaseModel.h"

//{
//    data =     {
//        appId = "<null>";
//        authenticated = 1;
//        authorities = "<null>";
//        black = 0;
//        confirmStatus = 1;
//        details =         {
//            nickname = "\U5360";
//            onceToken = "<null>";
//            username = "\U5360";
//        };
//        organizations =         (
//        );
//        principal = CEN1NPTL26ARJKH;
//        reviewType = APPROVED;
//    };
//    status = success;
//}

@interface RCLoginModel : RCBaseModel

-(instancetype)initWithDictionary_z:(NSDictionary *)dic;


@property (nonatomic, copy) NSString <Optional>*uid;
@property (nonatomic, copy) NSString <Optional>*token;
@property (nonatomic, copy) NSString <Optional>*aid;


@property (nonatomic, copy) NSString <Optional>*authenticated;
@property (nonatomic, copy) NSString <Optional>*confirmStatus;
@property (nonatomic, copy) NSString <Optional>*nickname;
@property (nonatomic, copy) NSString <Optional>*username;
@property (nonatomic, copy) NSString <Optional>*onceToken;

/**yes:同一个设备*/
@property (nonatomic, assign) BOOL sameDevice;

@end
