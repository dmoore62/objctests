//
//  Fraction.h
//  test
//
//  Created by daniel moore on 6/19/13.
//  Copyright (c) 2013 daniel moore. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Fraction : NSObject
{
    int numerator;
    int denominator;
}
-(void) print;
-(void) setNumerator: (int) n;
-(void) setDenominator: (int) d;
-(void) numerator;
-(void) denominator;
-(double) convertToNum;

@end