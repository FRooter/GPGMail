/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "NSAppleScript.h"

@interface NSAppleScript (MessageRuleAdditions)
+ (id)_newScriptAtPath:(id)arg1 errorInfo:(id *)arg2;
+ (BOOL)executeHandlerWithName:(id)arg1 inScriptAtPath:(id)arg2 withArguments:(id)arg3 error:(id *)arg4;
+ (BOOL)executeHandlerWithEventClass:(unsigned int)arg1 eventID:(unsigned int)arg2 inScriptAtPath:(id)arg3 withArguments:(id)arg4 error:(id *)arg5;
+ (id)appleScriptLock;
- (id)executeHandlerWithName:(id)arg1 andArguments:(id)arg2 error:(id *)arg3;
- (id)executeHandlerWithEventClass:(unsigned int)arg1 eventID:(unsigned int)arg2 andArguments:(id)arg3 error:(id *)arg4;
@end

