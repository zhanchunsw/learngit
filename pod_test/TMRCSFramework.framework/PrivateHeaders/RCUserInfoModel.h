//
//  RCUserInfoModel.h
//  FFS_New
//
//  Created by 占 on 2017/10/28.
//  Copyright © 2017年 tjtech. All rights reserved.
//

#import "RCBaseModel.h"

typedef enum : NSUInteger {
    UserStyleNoVerifier,
    UserStyleVerifiering,
    UserStyleVerifierFialed,
    UserStyleCompeletVerifiering,
} UserStyle_z;

@interface RCUserInfoModel : RCBaseModel

@property (nonatomic,copy) NSString <Optional>*headPortraitId;
@property (nonatomic,copy) NSString <Optional>*name;
@property (nonatomic,copy) NSString <Optional>*phone;
@property (nonatomic,copy) NSString <Optional>*gender;
@property (nonatomic,copy) NSString <Optional>*email;
/**审核状态*/
@property (nonatomic,copy) NSString <Optional>*reviewType;
/**余额*/
@property (nonatomic,copy) NSString <Optional>*accountAmount;
/**押金*/
@property (nonatomic,copy) NSString <Optional>*foregiftAmount;
/**押金限额*/
@property (nonatomic,copy) NSString <Optional>*foregiftQuota;
/**驾驶证号*/
@property (nonatomic,copy) NSString <Optional>*drivingLicenseNumber;
/**身份证号*/
@property (nonatomic,copy) NSString <Optional>*identityNumber;
/**审核备注*/
@property (nonatomic,copy) NSString <Optional>*reviewRemark;
/**加密后的密码*/
@property (nonatomic,copy) NSString <Optional>*password;

/**身份证正面*/
@property (nonatomic,copy) NSString <Optional>*identityFrontId;
/**驾驶证正面*/
@property (nonatomic,copy) NSString <Optional>*driveLicenseFirstId;
/**身份证反面*/
@property (nonatomic,copy) NSString <Optional>*identityBackId;
/**手持身份证*/
@property (nonatomic,copy) NSString <Optional>*identityByHandId;
/**驾驶证反面*/
@property (nonatomic,copy) NSString <Optional>*driveLicenseSecondId;
/**
 押金状态
 NORMAL正常
 REFUNDING 退款中
 INSUFFICIENT 押金不足
 UNPAID 无押金
 */
@property (nonatomic,copy) NSString <Optional>*foregiftType;

//@property (nonatomic,assign) UserStyle_z userStyle;
@property (nonatomic,strong) NSNumber <Optional>* userStyle;
/**公司名称*/
@property (nonatomic,copy) NSString <Optional>*companyname;

/**公司域账号审核状态*/
@property (nonatomic,copy) NSString <Optional>*domainStatus;
/**有效期限*/
@property (nonatomic,copy) NSString <Optional>*activeYear;
/**初次领证日期*/
@property (nonatomic,copy) NSString <Optional>*licensingDate;
/**有效起始日期*/
@property (nonatomic,copy) NSString <Optional>*licensingStartDate;

- (NSDictionary *)zcl_returnDic;

@end
