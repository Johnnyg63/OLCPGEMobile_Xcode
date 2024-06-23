#import <UIKit/UIKit.h>
#import "ios_native_app_glue.h"
#import <memory>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (nonatomic, assign) IOSNativeApp* pIOSNativeApp;

@end
