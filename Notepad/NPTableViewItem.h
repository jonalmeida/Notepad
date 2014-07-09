//
//  NPTableViewItem.h
//  Notepad
//
//  Created by Jonathan Almeida on 2014-07-09.
//  Copyright (c) 2014 Jonathan Almeida. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NPTableViewItem : NSObject

/**
 *  Initializes a newly allocated NPTableViewItem with an empty dictionary. Use addItemTitle:data: to set the data;
 *  @return An NPTableViewItem instance.
 */
- (id) init;

/**
 *  An instance of NPTableViewItem initialized with a dictionary.
 *  @param dict A dictionary of items that needs to contain at least 'title' and 'data'.
 *  @return An instance of NPTableViewItem.
 */
+ (instancetype) tableViewItemWithDictionary:(NSDictionary *) dict;

/**
 *  An instance of NPTableViewItem initialized with a title and data.
 *  @param title A title for the item to show in the list.
 *  @param data An id object containing a path to where the source file is located.
 *  @return An instance of NPTableViewItem.
 */
+ (instancetype) tableViewItemWithItemTitle:(NSString *) title data:(id)data;

/**
 *  Adds an item 'title' and 'data' into a NPTableViewItem object.
 *  @param title Title of the item.
 *  @param data An id object containing a path to where the source file is located.
 */
- (void) addItemTitle:(NSString *)title data:(id)data;

@end
