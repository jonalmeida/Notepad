//
//  NPDetailViewController.h
//  Notepad
//
//  Created by Jonathan Almeida on 2014-06-18.
//  Copyright (c) 2014 Jonathan Almeida. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface NPDetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
