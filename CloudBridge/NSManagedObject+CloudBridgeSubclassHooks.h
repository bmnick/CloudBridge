/**
 CloudBridge
 Copyright (c) 2014 Oliver Letterer <oliver.letterer@gmail.com>, Sparrow-Labs

 Permission is hereby granted, free of charge, to any person obtaining a copy
 of this software and associated documentation files (the "Software"), to deal
 in the Software without restriction, including without limitation the rights
 to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 copies of the Software, and to permit persons to whom the Software is
 furnished to do so, subject to the following conditions:

 The above copyright notice and this permission notice shall be included in
 all copies or substantial portions of the Software.

 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 THE SOFTWARE.
 */

@import CoreData;

#import <CBRCloudObject.h>



@interface NSManagedObject (CloudBridgeSubclassHooks)

/**
 Called when inserted due to a cloud fetch.
 */
- (void)awakeFromCloudFetch;

/**
 Called right before an update is started.
 */
- (void)prepareForUpdateWithMutableCloudObject:(id<CBRMutableCloudObject>)mutableObjectObject;

/**
 Gives an instance the change to prepare and update a mutable cloud object right before its being sent over the wire.
 */
- (void)prepareMutableCloudObject:(id<CBRMutableCloudObject>)mutableObjectObject;

/**
 Sets a value for a key for a specific cloud object.
 */
- (void)setCloudValue:(id)value forKey:(NSString *)key fromCloudObject:(id<CBRCloudObject>)cloudObject;

/**
 Returns a cloud value for a given key.
 */
- (id)cloudValueForKey:(NSString *)key;

@end
