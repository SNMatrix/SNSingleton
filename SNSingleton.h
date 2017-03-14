/* Singleton defined by macros uniformly.
 使用宏统一定义单例对象
 
 *Any object that you wanna define it as a singleton,just import this file first.And write "SNSingletonH" in ".m","SNSingletonM" in ".h".
 导入SNSingleton.h头文件，在.h文件中输入SNSingletonH，在.m文件中输入SNSingletonM即可成功定义单例对象
 
 *Example:[Person sharedInstance];
 *You can use [*** sharedInstance] to get all singleton objects you want.
 你可以使用alloc init方法或者sharedInstance方法得到任何你想定义的单例对象。
 
 */

//put the macro (SNSingletonH) in ".h"
#define SNSingletonH  +(instancetype)sharedInstance;

//put the macro (SNSingletonM) in ".m"

#define SNSingletonM \
static id _instance;\
\
+(instancetype)allocWithZone:(struct _NSZone *)zone\
{\
    static dispatch_once_t onceToken;\
    dispatch_once(&onceToken, ^{\
        _instance = [super allocWithZone:zone];\
    });\
    return _instance;\
}\
\
+(instancetype)sharedInstance\
{\
    static dispatch_once_t onceToken;\
    dispatch_once(&onceToken, ^{\
        _instance = [[super alloc]init];\
    });\
    return _instance;\
}\
\
-(id)copyWithZone:(NSZone *)zone\
{\
    return _instance;\
}

