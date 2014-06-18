//
//  NPMasterViewController.h
//  Notepad
//
//  Created by Jonathan Almeida on 2014-06-18.
//  Copyright (c) 2014 Jonathan Almeida. All rights reserved.
//

#import <UIKit/UIKit.h>

@class NPDetailViewController;

@interface NPMasterViewController : UITableViewController

@property (strong, nonatomic) NPDetailViewController *detailViewController;

@end
