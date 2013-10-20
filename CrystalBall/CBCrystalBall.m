//
//  CBCrystalBall.m
//  CrystalBall
//
//  Created by Lamar on 10/19/13.
//  Copyright (c) 2013 Lamar. All rights reserved.
//

#import "CBCrystalBall.h"

@implementation CBCrystalBall
@synthesize predictions=_predictions;

-(NSArray *)predictions{
    if (_predictions == nil){
        _predictions = [[NSArray alloc]initWithObjects:@"It is Certain", @"It is Decidedly So", @"The Stars Are Not Aligned", @"My Reply is No", @"It is Doubtful", @"Better not Tell You Now", @"Concentrate and Ask Again", @"Unable to Answer Now", nil];
    }
    return _predictions;
}

- (NSString *) randomPrediction{
    int random = arc4random_uniform(self.predictions.count);
    return [self.predictions objectAtIndex:random];
}


@end
