#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface Student : NSObject {
    int age;
    NSString *name;
    NSString *major;
}
- (void)study: (float)hour;
@end

NS_ASSUME_NONNULL_END
