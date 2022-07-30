//
//  Passenger.m
//  College Demo
//
//  Created by mashujun on 2022/7/18.
//

#import "Passenger.h"


@implementation Orders

@end

@implementation Passenger
-(void)booking:(Orders *)ticket {
     [unusedOrders addObject:ticket];
     [historyOrders addObject:ticket];
}
-(void)booking:(Orders *)ticket {
     [unusedOrders removeObject:ticket];
}
@end
