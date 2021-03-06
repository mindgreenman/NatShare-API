//
//  NSPayload.h
//  NatShare
//
//  Created by Yusuf Olokoba on 8/8/19.
//  Copyright © 2020 Yusuf Olokoba. All rights reserved.
//

@import Foundation;
@import UIKit;

typedef void (^CompletionBlock) (bool success);

@protocol NSPayload <NSObject>
- (void) addText:(nonnull NSString*) text;
- (void) addImage:(nonnull UIImage*) image;
- (void) addMedia:(nonnull NSURL*) url;
- (void) commit;
@end

@interface NSSharePayload : NSObject <NSPayload>
- (nonnull instancetype) initWithSourceViewController:(nonnull UIViewController*) sourceViewController andCompletionHandler:(nullable CompletionBlock) completionHandler;
- (void) addText:(nonnull NSString*) text;
- (void) addImage:(nonnull UIImage*) image;
- (void) addMedia:(nonnull NSURL*) url;
- (void) commit;
@end


@interface NSSavePayload : NSObject <NSPayload>
- (nonnull instancetype) initWithAlbum:(nullable NSString*) album andCompletionHandler:(nullable CompletionBlock) completionHandler;
- (void) addImage:(nonnull UIImage*) image;
- (void) addMedia:(nonnull NSURL*) url;
- (void) commit;
@end

@interface NSPrintPayload : NSObject <NSPayload>
- (nonnull instancetype) initWithGreyscale:(bool) greyscale landscape:(bool) landscape andCompletionHandler:(nullable CompletionBlock) completionHandler;
- (void) addText:(nonnull NSString*) text;
- (void) addImage:(nonnull UIImage*) image;
- (void) addMedia:(nonnull NSURL*) url;
- (void) commit;
@end
