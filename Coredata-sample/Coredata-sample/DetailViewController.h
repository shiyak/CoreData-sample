//
//  DetailViewController.h
//  Coredata-sample
//
//  Created by SHIYA KEITA on 2013/04/02.
//  Copyright (c) 2013年 SHIYA KEITA. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
