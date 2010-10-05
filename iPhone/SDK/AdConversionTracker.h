//
//  AdConversionTracking.h
//  SimpleAds
//
//  Created by Nafis Jamal on 10/5/10.
//  Copyright 2010 Stanford. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>


@interface AdConversionTracker : NSObject {

}

+ (AdConversionTracker *)sharedConversionTracker;
- (void) reportApplicationOpen;

@end
