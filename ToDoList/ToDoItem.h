//
//  ToDoItem.h
//  ToDoList
//
//  Created by Francisco J. Martínez García on 25/3/15.
//  Copyright (c) 2015 Sage. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ToDoItem : NSObject

@property NSString *itemName;
@property BOOL completed;
@property (readonly) NSDate *creationDate;

@end
