//
//  CBViewController.h
//  CrystalBall
//
//  Created by Lamar on 10/19/13.
//  Copyright (c) 2013 Lamar. All rights reserved.
//

#import <UIKit/UIKit.h>

@class CBCrystalBall;

@interface CBViewController : UIViewController

@property (strong, nonatomic) IBOutlet UILabel *predictionLabel;
@property (strong, nonatomic) CBCrystalBall *crystalBall;

-(void) makePrediction;

@property (strong, nonatomic) IBOutlet UIImageView *backgroundImageView;

@end
