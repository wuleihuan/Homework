//
//  Passenger.h
//  College Demo
//
//  Created by mashujun on 2022/7/18.
//

#import "Person.h"

NS_ASSUME_NONNULL_BEGIN

@interface Orders : NSObject
@property (nonatomic, readonly) NSNumber *orderID;
@property (nonatomic, strong) NSDate *bookDate;
@end

@interface Passenger : Person
// @property 属性
// 是否年满 18 岁
@property(nonatomic,strong) BOOL adult;
// 历史订单 （数组）
@property(nonatomic,readonly) NSArray *historyOrders;
// 未出行订单 （数组）
@property(nonatomic,readonly) NSArray *unusedOrders;

// Function 方法
// 去订票
- (void)booking:(Orders *)ticket:(NSArray *)historyOrders;

// 去检票
- (void)checking:(Orders *)ticket2:(NSArray *)*unusedOrders;

@end

NS_ASSUME_NONNULL_END
