//
//  SocketEngine.h
//  VPSocketIO
//
//  Created by Vasily Popov on 9/19/17.
//  Copyright © 2017 Vasily Popov. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "VPSocketEngineProtocol.h"

@interface VPSocketEngine : NSObject<VPSocketEngineProtocol>

@property (nonatomic, strong, readonly) dispatch_queue_t engineQueue;

/// Creates a new engine.
-(instancetype)initWithClient:(id<VPSocketEngineClient>)client url:(NSURL*)url options:(NSDictionary*)options;

@end
