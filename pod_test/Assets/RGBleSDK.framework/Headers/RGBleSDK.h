//
//  RGBleSDK.h
//  RGBleSDK
//
//  Created by zhang chunhui on 2018/5/16.
//  Copyright © 2018年 RoilandGroup. All rights reserved.
//
/*
 注意事项：
 1、静态库中采用Objective-C++实现，因此需要您保证您工程中至少有一个.mm后缀的源文件(您可以将任意一个.m后缀的文件改名为.mm)，或者在工程属性中指定编译方式，即在Xcode的Project -> Edit Active Target -> Build Setting 中找到 Compile Sources As，并将其设置为"Objective-C++"
 2、环境配置
    在TARGETS->Build Settings->Other Linker Flags 中添加-ObjC，字母O和C大写。
 */

#import <UIKit/UIKit.h>
#import <RGBleSDK/RGBleSDK.h>
#import <RGBleSDK/RGBleController.h>

//! Project version number for RGBleSDK.
FOUNDATION_EXPORT double RGBleSDKVersionNumber;

//! Project version string for RGBleSDK.
FOUNDATION_EXPORT const unsigned char RGBleSDKVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <RGBleSDK/PublicHeader.h>


