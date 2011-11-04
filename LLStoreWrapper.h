//
//  LLStoreWrapper.h
//  Lifelapse
//
//  Created by Glenn Wolters on 5/10/11.
//  Copyright 2011 OMGWTFBBQ All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ASIFormDataRequest.h"

@class LLStoreWrapper;
@protocol LLStoreDelegate <NSObject>

// Products
-(void)storeWrapper:(LLStoreWrapper *)storeWrapper finishedGettingProducts:(NSArray *)products;
-(void)storeWrapper:(LLStoreWrapper *)storeWrapper failedGettingProducts:(NSDictionary *)failure;

// Orders
-(void)storeWrapper:(LLStoreWrapper *)storeWrapper finishedGettingOrders:(NSArray *)orders;
-(void)storeWrapper:(LLStoreWrapper *)storeWrapper failedGettingOrders:(NSDictionary *)failure;

@end


@interface LLStoreWrapper : NSObject {
	id<LLStoreDelegate> delegate;

	ASIFormDataRequest *request_;
	
}

@property (assign) id<LLStoreDelegate> delegate;


-(void)getProducts;

-(void)getOrders;

-(void)cancelRequest;

@end
