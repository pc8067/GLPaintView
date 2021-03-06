//
//  GLPaintManager.h
//  GLPaintViewDemo
//
//  Created by Lyman Li on 2020/9/12.
//  Copyright © 2020 Lyman Li. All rights reserved.
//

#import <UIKit/UIKit.h>

/// 做线程和上下文管理
@interface GLPaintManager : NSObject

/// 在渲染线程异步执行
void runAsyncOnPaintRenderQueue(void (^block)(void));

/// 在渲染线程同步执行
void runSyncOnPaintRenderQueue(void (^block)(void));

/// OpenGL 上下文
+ (EAGLContext *)sharedPaintContext;

/// OpenGL 渲染线程
+ (dispatch_queue_t)sharedRenderQueue;

@end

