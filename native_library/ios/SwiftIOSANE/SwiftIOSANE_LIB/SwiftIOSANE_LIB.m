/* Copyright 2017 Tua Rua Ltd.
 
 Licensed under the Apache License, Version 2.0 (the "License");
 you may not use this file except in compliance with the License.
 You may obtain a copy of the License at
 
 http://www.apache.org/licenses/LICENSE-2.0
 
 Unless required by applicable law or agreed to in writing, software
 distributed under the License is distributed on an "AS IS" BASIS,
 WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 See the License for the specific language governing permissions and
 limitations under the License.*/

#import "FreMacros.h"
#import "SwiftIOSANE_LIB.h"
#import <FreSwift/FlashRuntimeExtensions.h>
#import "SwiftIOSANE_FW-Swift.h"

#define FRE_OBJC_BRIDGE TRSOA_FlashRuntimeExtensionsBridge // use unique prefix throughout to prevent clashes with other ANEs
@interface FRE_OBJC_BRIDGE : NSObject<FreSwiftBridgeProtocol>
@end
@implementation FRE_OBJC_BRIDGE {
}
FRE_OBJC_BRIDGE_FUNCS
//- (FREResult)FREAcquireBitmapData2WithObject:(FREObject _Nonnull)object descriptorToSet:(FREBitmapData2 * _Nonnull)descriptorToSet {
//    return FREAcquireBitmapData2(object, descriptorToSet);
//}
//- (FREResult)FREAcquireByteArrayWithObject:(FREObject _Nonnull)object byteArrayToSet:(FREByteArray * _Nonnull)byteArrayToSet {
//    return FREAcquireByteArray(object, byteArrayToSet);
//}
//- (FREResult)FRECallObjectMethodWithObject:(FREObject _Nonnull)object methodName:(NSString * _Nonnull)methodName argc:(uint32_t)argc argv:(NSPointerArray * _Nullable)argv result:(FREObject _Nullable)result thrownException:(FREObject _Nullable)thrownException {
//    if (argc > 0) {
//        FREObject _argv[argc];
//        for (int i = 0; i < argc; ++i) {
//            _argv[i] = [argv pointerAtIndex:i];
//        }
//        return FRECallObjectMethod(object, (const uint8_t *) [methodName UTF8String], argc, _argv, result, thrownException);
//    }
//    return FRECallObjectMethod(object, (const uint8_t *) [methodName UTF8String], argc, NULL, result, thrownException);
//}
//- (FREResult)FREDispatchStatusEventAsyncWithCtx:(FREContext _Nonnull)ctx code:(NSString * _Nonnull)code level:(NSString * _Nonnull)level {
//    return FREDispatchStatusEventAsync(ctx, (const uint8_t *) [code UTF8String], (const uint8_t *) [level UTF8String]);
//}
//- (FREResult)FREGetArrayElementAWithArrayOrVector:(FREObject _Nonnull)arrayOrVector index:(uint32_t)index value:(FREObject _Nullable)value {
//    return FREGetArrayElementAt(arrayOrVector, index, value);
//}
//- (FREResult)FREGetArrayLengthWithArrayOrVector:(FREObject _Nonnull)arrayOrVector length:(uint32_t * _Nonnull)length {
//    return FREGetArrayLength(arrayOrVector, length);
//}
//- (FREResult)FREGetContextActionScriptDataWithCtx:(FREContext _Nonnull)ctx actionScriptData:(FREObject _Nonnull)actionScriptData {
//    return FREGetContextActionScriptData(ctx, actionScriptData);
//}
//- (FREResult)FREGetContextNativeDataWithCtx:(FREContext _Nonnull)ctx nativeData:(const void * _Nonnull * _Nonnull)nativeData {
//    return FREGetContextNativeData(ctx, (void**)nativeData);
//}
//- (FREResult)FREGetObjectAsBoolWithObject:(FREObject _Nonnull)object value:(uint32_t * _Nonnull)value {
//    return FREGetObjectAsBool(object, value);
//}
//- (FREResult)FREGetObjectAsDoubleWithObject:(FREObject _Nonnull)object value:(double * _Nonnull)value {
//    return FREGetObjectAsDouble(object, value);
//}
//- (FREResult)FREGetObjectAsInt32WithObject:(FREObject _Nonnull)object value:(int32_t * _Nonnull)value {
//    return FREGetObjectAsInt32(object, value);
//}
//- (FREResult)FREGetObjectAsUTF8WithObject:(FREObject _Nonnull)object length:(uint32_t * _Nonnull)length value:(const uint8_t *const  _Nullable * _Nullable)value {
//    return FREGetObjectAsUTF8(object, length, (const uint8_t**)value);
//}
//- (FREResult)FREGetObjectAsUint32WithObject:(FREObject _Nonnull)object value:(uint32_t * _Nonnull)value {
//    return FREGetObjectAsUint32(object, value);
//}
//- (FREResult)FREGetObjectPropertyWithObject:(FREObject _Nonnull)object propertyName:(NSString * _Nonnull)propertyName propertyValue:(FREObject _Nullable)propertyValue thrownException:(FREObject _Nullable)thrownException {
//    return FREGetObjectProperty(object, (const uint8_t *) [propertyName UTF8String], propertyValue, &thrownException);
//}
//- (FREResult)FREGetObjectTypeWithObject:(FREObject _Nullable)object objectType:(FREObjectType * _Nonnull)objectType {
//    return FREGetObjectType(object, objectType);
//}
//- (FREResult)FREInvalidateBitmapDataRectWithObject:(FREObject _Nonnull)object x:(uint32_t)x y:(uint32_t)y width:(uint32_t)width height:(uint32_t)height {
//    return FREInvalidateBitmapDataRect(object, x, y, width, height);
//}
//- (FREResult)FRENewObjectFromBoolWithValue:(BOOL)value object:(FREObject _Nullable)object {
//    return FRENewObjectFromBool(value ? 1 : 0, object);
//}
//- (FREResult)FRENewObjectFromDoubleWithValue:(double)value object:(FREObject _Nullable)object {
//    return FRENewObjectFromDouble(value, object);
//}
//- (FREResult)FRENewObjectFromInt32WithValue:(int32_t)value object:(FREObject _Nullable)object {
//    return FRENewObjectFromInt32(value, object);
//}
//- (FREResult)FRENewObjectFromUTF8WithLength:(uint32_t)length value:(NSString * _Nonnull)value object:(FREObject _Nullable)object {
//    return FRENewObjectFromUTF8(length, (const uint8_t *) [value UTF8String], object);
//}
//- (FREResult)FRENewObjectFromUint32WithValue:(uint32_t)value object:(FREObject _Nullable)object {
//    return FRENewObjectFromUint32(value, object);
//}
//- (FREResult)FRENewObjectWithClassName:(NSString * _Nonnull)className argc:(uint32_t)argc argv:(NSPointerArray * _Nullable)argv object:(FREObject _Nullable)object thrownException:(FREObject _Nullable)thrownException {
//    if (argc > 0) {
//        FREObject _argv[argc];
//        for (int i = 0; i < argc; ++i) {
//            _argv[i] = [argv pointerAtIndex:i];
//        }
//        return FRENewObject((const uint8_t *) [className UTF8String], argc, _argv, object, &thrownException);
//    }
//    return FRENewObject((const uint8_t *) [className UTF8String], argc, NULL, object, &thrownException);
//}
//- (FREResult)FREReleaseBitmapDataWithObject:(FREObject _Nonnull)object {
//    return FREReleaseBitmapData(object);
//}
//- (FREResult)FREReleaseByteArrayWithObject:(FREObject _Nonnull)object {
//    return FREReleaseByteArray(object);
//}
//- (FREResult)FRESetArrayElementAWithArrayOrVector:(FREObject _Nonnull)arrayOrVector index:(uint32_t)index value:(FREObject _Nullable)value {
//    return FRESetArrayElementAt(arrayOrVector, index, value);
//}
//- (FREResult)FRESetArrayLengthWithArrayOrVector:(FREObject _Nonnull)arrayOrVector length:(uint32_t)length {
//    return FRESetArrayLength(arrayOrVector, length);
//}
//- (FREResult)FRESetContextActionScriptDataWithCtx:(FREContext _Nonnull)ctx actionScriptData:(FREObject _Nonnull)actionScriptData {
//    return FRESetContextActionScriptData(ctx, actionScriptData);
//}
//- (FREResult)FRESetContextNativeDataWithCtx:(FREContext _Nonnull)ctx nativeData:(const void * _Nonnull)nativeData {
//    return FRESetContextNativeData(ctx, (void*)nativeData);
//}
//- (FREResult)FRESetObjectPropertyWithObject:(FREObject _Nonnull)object propertyName:(NSString * _Nonnull)propertyName propertyValue:(FREObject _Nullable)propertyValue thrownException:(FREObject _Nullable)thrownException {
//    return FRESetObjectProperty(object, (const uint8_t *) [propertyName UTF8String], propertyValue, &thrownException);
//}
@end

SWIFT_DECL(TRSOA) // use unique prefix throughout to prevent clashes with other ANEs
CONTEXT_INIT(TRSOA) {
    SWIFT_INITS(TRSOA)
    
    /**************************************************************************/
    /******* MAKE SURE TO ADD FUNCTIONS HERE THE SAME AS SWIFT CONTROLLER *****/
    /**************************************************************************/
    
    static FRENamedFunction extensionFunctions[] =
    {
        MAP_FUNCTION(TRSOA, runStringTests)
        ,MAP_FUNCTION(TRSOA, runNumberTests)
        ,MAP_FUNCTION(TRSOA, runIntTests)
        ,MAP_FUNCTION(TRSOA, runArrayTests)
        ,MAP_FUNCTION(TRSOA, runObjectTests)
        ,MAP_FUNCTION(TRSOA, runBitmapTests)
        ,MAP_FUNCTION(TRSOA, runByteArrayTests)
        ,MAP_FUNCTION(TRSOA, runErrorTests)
        ,MAP_FUNCTION(TRSOA, runErrorTests2)
        ,MAP_FUNCTION(TRSOA, runDataTests)
    };
    
    /**************************************************************************/
    /**************************************************************************/
    
    *numFunctionsToSet = sizeof( extensionFunctions ) / sizeof( FRENamedFunction );
    *functionsToSet = extensionFunctions;
    
}

CONTEXT_FIN(TRSOA) {
    //any clean up code here
}
EXTENSION_INIT(TRSOA)
EXTENSION_FIN(TRSOA)

