#include <objc/runtime.h>
#include <CoreFoundation/CoreFoundation.h>
#import <Preferences/PSListController.h>
#import <Preferences/PSListItemsController.h>
#import <Preferences/PSTableCell.h>
#import <Twitter/TWTweetComposeViewController.h>
#import <UIKit/UIKit.h>
#import <Foundation/NSDistributedNotificationCenter.h>

@interface UIApplication (Private)
- (void)suspend;
@end

@interface CKAutoupdatingDateFormatter : NSDateFormatter
- (id)initWithTemplate:(NSString *)arg1;
@end

@interface SBApplication : UIApplication
- (int)pid;
@end

@interface SBApplicationController
+ (id)sharedInstance;
- (SBApplication *)applicationWithPid:(int)pid;
- (SBApplication *)applicationWithDisplayIdentifier:(NSString *)displayIdentifier;
@end

@interface DDPrefsListController : PSListController
@end

@interface DDListItemsController : PSListItemsController
@end

@interface DDPreviewTextCell : PSTableCell
@end
