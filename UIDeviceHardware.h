//
//  UIDeviceHardware.h
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSUInteger, IOSDeviceFamilyType) {
    ThreeFiveInchDevice,
    FourInchDevice,
    FourSevenInchDevice,
    FiveFiveInchDevice
};

@interface UIDeviceHardware : NSObject
+ (NSString *) platform;
+ (NSString *) platformString;
+ (BOOL)isDevice:(IOSDeviceFamilyType)deviceType;
@end
