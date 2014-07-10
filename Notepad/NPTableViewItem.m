//
//  NPTableViewItem.m
//  Notepad
//
//  Created by Jonathan Almeida on 2014-07-09.
//  Copyright (c) 2014 Jonathan Almeida. All rights reserved.
//

#import "NPTableViewItem.h"

@implementation NPTableViewItem {
    NSMutableDictionary *   _item;
}

- (id) init {
    self = [super init];
    if(self) {
        _item = [[NSMutableDictionary alloc] init];
        // TODO: Consider setting a default value after init
    }
    return self;
}

+ (instancetype) tableViewItemWithDictionary:(NSDictionary *) dict {
    NPTableViewItem *newItem = [[self alloc] init];
    [newItem addItemTitle:[dict objectForKey:@"title"] data:[dict objectForKey:@"data"]];
    return newItem;
}

+ (instancetype) tableViewItemWithItemTitle:(NSString *) title data:(id)data {
    NPTableViewItem *newItem = [[self alloc] init];
    [newItem addItemTitle:title data:data];
    return newItem;
}

- (void) addItemTitle:(NSString *)title data:(id)data {
    [_item setObject:title forKey:@"title"];
    [_item setObject:data forKey:@"data"];
}

- (NSString *) title {
    return [_item objectForKey:@"title"];
}

- (id) data {
    return [_item objectForKey:@"data"];
}

@end
