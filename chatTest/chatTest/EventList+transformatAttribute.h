//
//  EventList+transformatAttribute.h
//  chatTest
//
//  Created by Simin Liu on 3/28/15.
//  Copyright (c) 2015 LPP. All rights reserved.
//

#import "EventList.h"

@interface EventList (transformatAttribute)

-(NSArray *)groupMember;
-(void) setGroupMember:(id)groupMember;

@end
