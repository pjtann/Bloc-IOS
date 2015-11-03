//
//  DetailViewController.h
//  Hello
//
//  Created by PT on 11/3/15.
//  Copyright (c) 2015 PeterTanner. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

