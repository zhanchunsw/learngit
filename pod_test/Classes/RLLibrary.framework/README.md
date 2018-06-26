#CBTracking使用说明
========================================
####一、注册

两种注册方式：

* appKey：在网站上注册应用后，所得到的appkey
* mode：开发模式；开发时请使用：`CBTrackingModeDevelopment`,上线后**务必**修改为：`CBTrackingModeProduction`
* ReportPolicy：上传方式,默认为：`BATCH`

```
+ (void)startWithAppKey:(NSString*)appKey
           trackingMode:(CBTrackingMode)mode;
```
```
+ (void)startWithAppKey:(NSString*)appKey
           trackingMode:(CBTrackingMode)mode
           ReportPolicy:(ReportPolicy)policy;
```

####二、页面跟踪

* 开始跟踪页面,不过需要注意的是，如果是**首页则需要调用第二个方法，并在第二个参数传入YES**

```
+ (void)startTracPage:(NSString*)page_name;
+ (void)startTracPage:(NSString*)page_name mainViewController:(BOOL)isMain;
``` 

* 结束页面跟踪

```
+ (void)endTracPage:(NSString*)page_name;
```
使用建议：建议在以下方法使用

```
- (void)viewWillAppear:(BOOL)animated
{
    [super viewWillAppear:animated];
    [CBTracking startTracPage:@"MainViewController" mainViewController:YES];
}

- (void)viewWillDisappear:(BOOL)animated
{
    [super viewWillDisappear:animated];
    [CBTracking endTracPage:@"MainViewController"];
}
```

####三、功能统计

* 点击事件跟踪:在按钮点击方法中添加此段代码

```
+ (void)trackEvent:(NSString *)eventName;
```

* UISwitch事件跟踪：在UISwitch事件中添加此段代码

```
+ (void)trackSwitchEvent:(NSString *)eventName;
```

####四、推送统计

* messageName：推送消息名称
* ID：推送唯一标识

```
+ (void)trackPushMessage:(NSString *)messageName pushID:(NSString *)ID;
```

####五、基础信息

* 存储用户ID，不可以传nil

```
+ (void)bindUserIdentifier:(NSString *)userid;
```
* 存储用户姓名，不可以传nil

```
+ (void)bindUserName:(NSString *)userName;
```
* 存储用户电话，不可以传nil

```
+ (void)bindUserMobilePhone:(NSString *)mobilePhone;
```
* 存储用户身份证号，不可以传nil

```
+ (void)bindUserIDCard:(NSString *)IDCard;
```
* 存储用户车底盘号，不可以传nil

```
+ (void)bindCarVinCode:(NSString *)code;
```

####六、功能开关

是否开启调试日志，有助于开发调试

```
+ (void)setIsLogEnabled:(BOOL)isLogEnabled;
```

&copy;大连润霖汽车科技有限公司


