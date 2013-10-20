//
//  CBCrystalBall.h
//  CrystalBall
//
//  Created by Lamar on 10/19/13.
//  Copyright (c) 2013 Lamar. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CBCrystalBall : NSObject

@property (strong, nonatomic, readonly) NSArray *predictions;

- (NSString *) randomPrediction;


@end
