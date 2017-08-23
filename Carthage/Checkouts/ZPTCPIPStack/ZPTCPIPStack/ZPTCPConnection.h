//
//  ZPTCPConnection.h
//  ZPTCPIPStack
//
//  Created by ZapCannon87 on 11/08/2017.
//  Copyright © 2017 zapcannon87. All rights reserved.
//

#import <Foundation/Foundation.h>

@class ZPTCPConnection;

@protocol ZPTCPConnectionDelegate <NSObject>

- (void)connection:(ZPTCPConnection *_Nonnull)connection didWriteData:(UInt16)length;

- (void)connection:(ZPTCPConnection *_Nonnull)connection didReadData:(NSData *_Nonnull)data;

- (void)connectionDidCloseReadStream:(ZPTCPConnection *_Nonnull)connection;

- (void)connection:(ZPTCPConnection *_Nonnull)connection didDisconnectWithError:(NSError *_Nonnull)err;

@end

@interface ZPTCPConnection : NSObject

@property (nonatomic, weak, nullable) id<ZPTCPConnectionDelegate> delegate;

@property (nonatomic, strong, readonly, nonnull) NSString *srcAddr;
@property (nonatomic, strong, readonly, nonnull) NSString *destAddr;
@property (nonatomic, assign, readonly) UInt16 srcPort;
@property (nonatomic, assign, readonly) UInt16 destPort;

- (void)write:(NSData *_Nonnull)data;

- (void)readData;

- (void)close;

@end
