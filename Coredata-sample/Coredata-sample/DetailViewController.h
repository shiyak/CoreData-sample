//
//  DetailViewController.h
//  Coredata-sample
//
//  Created by SHIYA KEITA on 2013/04/02.
//  Copyright (c) 2013年 SHIYA KEITA. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Person.h"

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) Person *detailItem;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (weak, nonatomic) IBOutlet UIScrollView *scrollView;
@property (weak, nonatomic) IBOutlet UITextField *nameField;
@property (weak, nonatomic) IBOutlet UITextField *zipCodeField;
@property (weak, nonatomic) IBOutlet UITextField *stateField;
@property (weak, nonatomic) IBOutlet UITextField *cityField;
@property (weak, nonatomic) IBOutlet UITextField *otherField;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
