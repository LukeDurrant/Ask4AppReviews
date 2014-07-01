//
//  Ask4AppReviewsDelegate.h
//  Banana Stand
//
//  Created by Robert Haining on 9/25/12.
//  Copyright (c) 2012 News.me. All rights reserved.
//

#import <Foundation/Foundation.h>

@class Ask4AppReviews;

@protocol Ask4AppReviewsDelegate <NSObject>

@optional
-(void)ask4AppReviewsDidDisplayAlert:(Ask4AppReviews *)ask4AppReview;
-(void)ask4AppReviewsDidDeclineToRate:(Ask4AppReviews *)ask4AppReview;
-(void)ask4AppReviewsDidOptToRate:(Ask4AppReviews *)ask4AppReview;
-(void)ask4AppReviewsDidOptToRemindLater:(Ask4AppReviews *)ask4AppReview;
-(void)ask4AppReviewsWillPresentModalView:(Ask4AppReviews *)ask4AppReview animated:(BOOL)animated;
-(void)ask4AppReviewsDidDismissModalView:(Ask4AppReviews *)ask4AppReview animated:(BOOL)animated;
@end
