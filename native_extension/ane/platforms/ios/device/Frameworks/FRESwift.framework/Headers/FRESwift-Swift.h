// Generated by Apple Swift version 4.0 (swiftlang-900.0.45.6 clang-900.0.26)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_attribute(external_source_symbol)
# define SWIFT_STRINGIFY(str) #str
# define SWIFT_MODULE_NAMESPACE_PUSH(module_name) _Pragma(SWIFT_STRINGIFY(clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in=module_name, generated_declaration))), apply_to=any(function, enum, objc_interface, objc_category, objc_protocol))))
# define SWIFT_MODULE_NAMESPACE_POP _Pragma("clang attribute pop")
#else
# define SWIFT_MODULE_NAMESPACE_PUSH(module_name)
# define SWIFT_MODULE_NAMESPACE_POP
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <objc/NSObject.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus) || __cplusplus < 201103L
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR __attribute__((enum_extensibility(open)))
# else
#  define SWIFT_ENUM_ATTR
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name) enum _name : _type _name; enum SWIFT_ENUM_ATTR SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) SWIFT_ENUM(_type, _name)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if __has_feature(modules)
@import ObjectiveC;
#endif

#import <FreSwift/FreSwift.h>

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"

SWIFT_MODULE_NAMESPACE_PUSH("FreSwift")

SWIFT_CLASS("_TtC8FreSwift13FreArraySwift")
@interface FreArraySwift : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
@end


SWIFT_CLASS("_TtC8FreSwift18FreBitmapDataSwift")
@interface FreBitmapDataSwift : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
@end


SWIFT_CLASS("_TtC8FreSwift17FreByteArraySwift")
@interface FreByteArraySwift : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
@end


SWIFT_CLASS("_TtC8FreSwift15FreContextSwift")
@interface FreContextSwift : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
@end


SWIFT_CLASS("_TtC8FreSwift14FreObjectSwift")
@interface FreObjectSwift : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
@end

@protocol FreSwiftBridgeProtocol;

SWIFT_CLASS("_TtC8FreSwift14FreSwiftBridge")
@interface FreSwiftBridge : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, strong) id <FreSwiftBridgeProtocol> _Null_unspecified bridge;)
+ (id <FreSwiftBridgeProtocol> _Null_unspecified)bridge SWIFT_WARN_UNUSED_RESULT;
+ (void)setBridge:(id <FreSwiftBridgeProtocol> _Null_unspecified)value;
- (void)setDelegateWithBridge:(id <FreSwiftBridgeProtocol> _Nonnull)bridge;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class NSPointerArray;

SWIFT_PROTOCOL("_TtP8FreSwift22FreSwiftBridgeProtocol_")
@protocol FreSwiftBridgeProtocol
- (FREResult)FREDispatchStatusEventAsyncWithCtx:(FREContext _Nonnull)ctx code:(NSString * _Nonnull)code level:(NSString * _Nonnull)level SWIFT_WARN_UNUSED_RESULT;
- (FREResult)FRENewObjectFromBoolWithValue:(BOOL)value object:(FREObject _Nullable)object SWIFT_WARN_UNUSED_RESULT;
- (FREResult)FRENewObjectFromInt32WithValue:(int32_t)value object:(FREObject _Nullable)object SWIFT_WARN_UNUSED_RESULT;
- (FREResult)FRENewObjectFromUint32WithValue:(uint32_t)value object:(FREObject _Nullable)object SWIFT_WARN_UNUSED_RESULT;
- (FREResult)FRENewObjectFromDoubleWithValue:(double)value object:(FREObject _Nullable)object SWIFT_WARN_UNUSED_RESULT;
- (FREResult)FRENewObjectFromUTF8WithLength:(uint32_t)length value:(NSString * _Nonnull)value object:(FREObject _Nullable)object SWIFT_WARN_UNUSED_RESULT;
- (FREResult)FREGetObjectAsBoolWithObject:(FREObject _Nonnull)object value:(uint32_t * _Nonnull)value SWIFT_WARN_UNUSED_RESULT;
- (FREResult)FREGetObjectAsInt32WithObject:(FREObject _Nonnull)object value:(int32_t * _Nonnull)value SWIFT_WARN_UNUSED_RESULT;
- (FREResult)FREGetObjectAsUint32WithObject:(FREObject _Nonnull)object value:(uint32_t * _Nonnull)value SWIFT_WARN_UNUSED_RESULT;
- (FREResult)FREGetObjectAsDoubleWithObject:(FREObject _Nonnull)object value:(double * _Nonnull)value SWIFT_WARN_UNUSED_RESULT;
- (FREResult)FRENewObjectWithClassName:(NSString * _Nonnull)className argc:(uint32_t)argc argv:(NSPointerArray * _Nullable)argv object:(FREObject _Nullable)object thrownException:(FREObject _Nullable)thrownException SWIFT_WARN_UNUSED_RESULT;
- (FREResult)FREGetObjectPropertyWithObject:(FREObject _Nonnull)object propertyName:(NSString * _Nonnull)propertyName propertyValue:(FREObject _Nullable)propertyValue thrownException:(FREObject _Nullable)thrownException SWIFT_WARN_UNUSED_RESULT;
- (FREResult)FRESetObjectPropertyWithObject:(FREObject _Nonnull)object propertyName:(NSString * _Nonnull)propertyName propertyValue:(FREObject _Nullable)propertyValue thrownException:(FREObject _Nullable)thrownException SWIFT_WARN_UNUSED_RESULT;
- (FREResult)FREGetObjectTypeWithObject:(FREObject _Nullable)object objectType:(FREObjectType * _Nonnull)objectType SWIFT_WARN_UNUSED_RESULT;
- (FREResult)FREGetObjectAsUTF8WithObject:(FREObject _Nonnull)object length:(uint32_t * _Nonnull)length value:(uint8_t const * _Nullable const * _Nullable)value SWIFT_WARN_UNUSED_RESULT;
- (FREResult)FRECallObjectMethodWithObject:(FREObject _Nonnull)object methodName:(NSString * _Nonnull)methodName argc:(uint32_t)argc argv:(NSPointerArray * _Nullable)argv result:(FREObject _Nullable)result thrownException:(FREObject _Nullable)thrownException SWIFT_WARN_UNUSED_RESULT;
- (FREResult)FRESetArrayElementAWithArrayOrVector:(FREObject _Nonnull)arrayOrVector index:(uint32_t)index value:(FREObject _Nullable)value SWIFT_WARN_UNUSED_RESULT;
- (FREResult)FREGetArrayElementAWithArrayOrVector:(FREObject _Nonnull)arrayOrVector index:(uint32_t)index value:(FREObject _Nullable)value SWIFT_WARN_UNUSED_RESULT;
- (FREResult)FREGetArrayLengthWithArrayOrVector:(FREObject _Nonnull)arrayOrVector length:(uint32_t * _Nonnull)length SWIFT_WARN_UNUSED_RESULT;
- (FREResult)FRESetArrayLengthWithArrayOrVector:(FREObject _Nonnull)arrayOrVector length:(uint32_t)length SWIFT_WARN_UNUSED_RESULT;
- (FREResult)FREAcquireBitmapData2WithObject:(FREObject _Nonnull)object descriptorToSet:(FREBitmapData2 * _Nonnull)descriptorToSet SWIFT_WARN_UNUSED_RESULT;
- (FREResult)FREReleaseBitmapDataWithObject:(FREObject _Nonnull)object SWIFT_WARN_UNUSED_RESULT;
- (FREResult)FREAcquireByteArrayWithObject:(FREObject _Nonnull)object byteArrayToSet:(FREByteArray * _Nonnull)byteArrayToSet SWIFT_WARN_UNUSED_RESULT;
- (FREResult)FREReleaseByteArrayWithObject:(FREObject _Nonnull)object SWIFT_WARN_UNUSED_RESULT;
- (FREResult)FRESetContextActionScriptDataWithCtx:(FREContext _Nonnull)ctx actionScriptData:(FREObject _Nonnull)actionScriptData SWIFT_WARN_UNUSED_RESULT;
- (FREResult)FREGetContextActionScriptDataWithCtx:(FREContext _Nonnull)ctx actionScriptData:(FREObject _Nonnull)actionScriptData SWIFT_WARN_UNUSED_RESULT;
- (FREResult)FREInvalidateBitmapDataRectWithObject:(FREObject _Nonnull)object x:(uint32_t)x y:(uint32_t)y width:(uint32_t)width height:(uint32_t)height SWIFT_WARN_UNUSED_RESULT;
- (FREResult)FRESetContextNativeDataWithCtx:(FREContext _Nonnull)ctx nativeData:(void const * _Nonnull)nativeData SWIFT_WARN_UNUSED_RESULT;
- (FREResult)FREGetContextNativeDataWithCtx:(FREContext _Nonnull)ctx nativeData:(void const * _Nonnull * _Nonnull)nativeData SWIFT_WARN_UNUSED_RESULT;
@end


@interface NSObject (SWIFT_EXTENSION(FreSwift))
- (FREObject _Nullable)callSwiftFunctionWithName:(NSString * _Nonnull)name ctx:(FREContext _Nonnull)ctx argc:(uint32_t)argc argv:(FREObject _Nullable * _Null_unspecified)argv SWIFT_WARN_UNUSED_RESULT;
@end

SWIFT_MODULE_NAMESPACE_POP
#pragma clang diagnostic pop
