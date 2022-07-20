#import <Foundation/Foundation.h>
#import "Student.h"

int main(int argc, const char * argv[]) {
    @autoreleasepool {
        Student* student = [Student new];
        [student study: 2.5];
    }
    return 0;
}
