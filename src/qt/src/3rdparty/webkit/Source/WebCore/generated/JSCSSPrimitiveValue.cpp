/*
    This file is part of the WebKit open source project.
    This file has been generated by generate-bindings.pl. DO NOT MODIFY!

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Library General Public
    License as published by the Free Software Foundation; either
    version 2 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Library General Public License for more details.

    You should have received a copy of the GNU Library General Public License
    along with this library; see the file COPYING.LIB.  If not, write to
    the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
    Boston, MA 02110-1301, USA.
*/

#include "config.h"
#include "JSCSSPrimitiveValue.h"

#include "CSSPrimitiveValue.h"
#include "Counter.h"
#include "ExceptionCode.h"
#include "JSCounter.h"
#include "JSDOMBinding.h"
#include "JSRGBColor.h"
#include "JSRect.h"
#include "KURL.h"
#include "RGBColor.h"
#include "Rect.h"
#include <runtime/Error.h>
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSCSSPrimitiveValue);

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSCSSPrimitiveValueTableValues[3] =
{
    { "primitiveType", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsCSSPrimitiveValuePrimitiveType), (intptr_t)0 THUNK_GENERATOR(0) },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsCSSPrimitiveValueConstructor), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSCSSPrimitiveValueTable = { 4, 3, JSCSSPrimitiveValueTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSCSSPrimitiveValueConstructorTableValues[27] =
{
    { "CSS_UNKNOWN", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsCSSPrimitiveValueCSS_UNKNOWN), (intptr_t)0 THUNK_GENERATOR(0) },
    { "CSS_NUMBER", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsCSSPrimitiveValueCSS_NUMBER), (intptr_t)0 THUNK_GENERATOR(0) },
    { "CSS_PERCENTAGE", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsCSSPrimitiveValueCSS_PERCENTAGE), (intptr_t)0 THUNK_GENERATOR(0) },
    { "CSS_EMS", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsCSSPrimitiveValueCSS_EMS), (intptr_t)0 THUNK_GENERATOR(0) },
    { "CSS_EXS", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsCSSPrimitiveValueCSS_EXS), (intptr_t)0 THUNK_GENERATOR(0) },
    { "CSS_PX", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsCSSPrimitiveValueCSS_PX), (intptr_t)0 THUNK_GENERATOR(0) },
    { "CSS_CM", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsCSSPrimitiveValueCSS_CM), (intptr_t)0 THUNK_GENERATOR(0) },
    { "CSS_MM", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsCSSPrimitiveValueCSS_MM), (intptr_t)0 THUNK_GENERATOR(0) },
    { "CSS_IN", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsCSSPrimitiveValueCSS_IN), (intptr_t)0 THUNK_GENERATOR(0) },
    { "CSS_PT", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsCSSPrimitiveValueCSS_PT), (intptr_t)0 THUNK_GENERATOR(0) },
    { "CSS_PC", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsCSSPrimitiveValueCSS_PC), (intptr_t)0 THUNK_GENERATOR(0) },
    { "CSS_DEG", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsCSSPrimitiveValueCSS_DEG), (intptr_t)0 THUNK_GENERATOR(0) },
    { "CSS_RAD", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsCSSPrimitiveValueCSS_RAD), (intptr_t)0 THUNK_GENERATOR(0) },
    { "CSS_GRAD", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsCSSPrimitiveValueCSS_GRAD), (intptr_t)0 THUNK_GENERATOR(0) },
    { "CSS_MS", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsCSSPrimitiveValueCSS_MS), (intptr_t)0 THUNK_GENERATOR(0) },
    { "CSS_S", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsCSSPrimitiveValueCSS_S), (intptr_t)0 THUNK_GENERATOR(0) },
    { "CSS_HZ", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsCSSPrimitiveValueCSS_HZ), (intptr_t)0 THUNK_GENERATOR(0) },
    { "CSS_KHZ", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsCSSPrimitiveValueCSS_KHZ), (intptr_t)0 THUNK_GENERATOR(0) },
    { "CSS_DIMENSION", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsCSSPrimitiveValueCSS_DIMENSION), (intptr_t)0 THUNK_GENERATOR(0) },
    { "CSS_STRING", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsCSSPrimitiveValueCSS_STRING), (intptr_t)0 THUNK_GENERATOR(0) },
    { "CSS_URI", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsCSSPrimitiveValueCSS_URI), (intptr_t)0 THUNK_GENERATOR(0) },
    { "CSS_IDENT", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsCSSPrimitiveValueCSS_IDENT), (intptr_t)0 THUNK_GENERATOR(0) },
    { "CSS_ATTR", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsCSSPrimitiveValueCSS_ATTR), (intptr_t)0 THUNK_GENERATOR(0) },
    { "CSS_COUNTER", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsCSSPrimitiveValueCSS_COUNTER), (intptr_t)0 THUNK_GENERATOR(0) },
    { "CSS_RECT", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsCSSPrimitiveValueCSS_RECT), (intptr_t)0 THUNK_GENERATOR(0) },
    { "CSS_RGBCOLOR", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsCSSPrimitiveValueCSS_RGBCOLOR), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSCSSPrimitiveValueConstructorTable = { 69, 63, JSCSSPrimitiveValueConstructorTableValues, 0 };

COMPILE_ASSERT(0 == CSSPrimitiveValue::CSS_UNKNOWN, CSSPrimitiveValueEnumCSS_UNKNOWNIsWrongUseDontCheckEnums);
COMPILE_ASSERT(1 == CSSPrimitiveValue::CSS_NUMBER, CSSPrimitiveValueEnumCSS_NUMBERIsWrongUseDontCheckEnums);
COMPILE_ASSERT(2 == CSSPrimitiveValue::CSS_PERCENTAGE, CSSPrimitiveValueEnumCSS_PERCENTAGEIsWrongUseDontCheckEnums);
COMPILE_ASSERT(3 == CSSPrimitiveValue::CSS_EMS, CSSPrimitiveValueEnumCSS_EMSIsWrongUseDontCheckEnums);
COMPILE_ASSERT(4 == CSSPrimitiveValue::CSS_EXS, CSSPrimitiveValueEnumCSS_EXSIsWrongUseDontCheckEnums);
COMPILE_ASSERT(5 == CSSPrimitiveValue::CSS_PX, CSSPrimitiveValueEnumCSS_PXIsWrongUseDontCheckEnums);
COMPILE_ASSERT(6 == CSSPrimitiveValue::CSS_CM, CSSPrimitiveValueEnumCSS_CMIsWrongUseDontCheckEnums);
COMPILE_ASSERT(7 == CSSPrimitiveValue::CSS_MM, CSSPrimitiveValueEnumCSS_MMIsWrongUseDontCheckEnums);
COMPILE_ASSERT(8 == CSSPrimitiveValue::CSS_IN, CSSPrimitiveValueEnumCSS_INIsWrongUseDontCheckEnums);
COMPILE_ASSERT(9 == CSSPrimitiveValue::CSS_PT, CSSPrimitiveValueEnumCSS_PTIsWrongUseDontCheckEnums);
COMPILE_ASSERT(10 == CSSPrimitiveValue::CSS_PC, CSSPrimitiveValueEnumCSS_PCIsWrongUseDontCheckEnums);
COMPILE_ASSERT(11 == CSSPrimitiveValue::CSS_DEG, CSSPrimitiveValueEnumCSS_DEGIsWrongUseDontCheckEnums);
COMPILE_ASSERT(12 == CSSPrimitiveValue::CSS_RAD, CSSPrimitiveValueEnumCSS_RADIsWrongUseDontCheckEnums);
COMPILE_ASSERT(13 == CSSPrimitiveValue::CSS_GRAD, CSSPrimitiveValueEnumCSS_GRADIsWrongUseDontCheckEnums);
COMPILE_ASSERT(14 == CSSPrimitiveValue::CSS_MS, CSSPrimitiveValueEnumCSS_MSIsWrongUseDontCheckEnums);
COMPILE_ASSERT(15 == CSSPrimitiveValue::CSS_S, CSSPrimitiveValueEnumCSS_SIsWrongUseDontCheckEnums);
COMPILE_ASSERT(16 == CSSPrimitiveValue::CSS_HZ, CSSPrimitiveValueEnumCSS_HZIsWrongUseDontCheckEnums);
COMPILE_ASSERT(17 == CSSPrimitiveValue::CSS_KHZ, CSSPrimitiveValueEnumCSS_KHZIsWrongUseDontCheckEnums);
COMPILE_ASSERT(18 == CSSPrimitiveValue::CSS_DIMENSION, CSSPrimitiveValueEnumCSS_DIMENSIONIsWrongUseDontCheckEnums);
COMPILE_ASSERT(19 == CSSPrimitiveValue::CSS_STRING, CSSPrimitiveValueEnumCSS_STRINGIsWrongUseDontCheckEnums);
COMPILE_ASSERT(20 == CSSPrimitiveValue::CSS_URI, CSSPrimitiveValueEnumCSS_URIIsWrongUseDontCheckEnums);
COMPILE_ASSERT(21 == CSSPrimitiveValue::CSS_IDENT, CSSPrimitiveValueEnumCSS_IDENTIsWrongUseDontCheckEnums);
COMPILE_ASSERT(22 == CSSPrimitiveValue::CSS_ATTR, CSSPrimitiveValueEnumCSS_ATTRIsWrongUseDontCheckEnums);
COMPILE_ASSERT(23 == CSSPrimitiveValue::CSS_COUNTER, CSSPrimitiveValueEnumCSS_COUNTERIsWrongUseDontCheckEnums);
COMPILE_ASSERT(24 == CSSPrimitiveValue::CSS_RECT, CSSPrimitiveValueEnumCSS_RECTIsWrongUseDontCheckEnums);
COMPILE_ASSERT(25 == CSSPrimitiveValue::CSS_RGBCOLOR, CSSPrimitiveValueEnumCSS_RGBCOLORIsWrongUseDontCheckEnums);

class JSCSSPrimitiveValueConstructor : public DOMConstructorObject {
public:
    JSCSSPrimitiveValueConstructor(JSC::ExecState*, JSC::Structure*, JSDOMGlobalObject*);

    virtual bool getOwnPropertySlot(JSC::ExecState*, const JSC::Identifier&, JSC::PropertySlot&);
    virtual bool getOwnPropertyDescriptor(JSC::ExecState*, const JSC::Identifier&, JSC::PropertyDescriptor&);
    static const JSC::ClassInfo s_info;
    static JSC::Structure* createStructure(JSC::JSGlobalData& globalData, JSC::JSValue prototype)
    {
        return JSC::Structure::create(globalData, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), AnonymousSlotCount, &s_info);
    }
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | JSC::ImplementsHasInstance | DOMConstructorObject::StructureFlags;
};

const ClassInfo JSCSSPrimitiveValueConstructor::s_info = { "CSSPrimitiveValueConstructor", &DOMConstructorObject::s_info, &JSCSSPrimitiveValueConstructorTable, 0 };

JSCSSPrimitiveValueConstructor::JSCSSPrimitiveValueConstructor(ExecState* exec, Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
    ASSERT(inherits(&s_info));
    putDirect(exec->globalData(), exec->propertyNames().prototype, JSCSSPrimitiveValuePrototype::self(exec, globalObject), DontDelete | ReadOnly);
}

bool JSCSSPrimitiveValueConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSCSSPrimitiveValueConstructor, JSDOMWrapper>(exec, &JSCSSPrimitiveValueConstructorTable, this, propertyName, slot);
}

bool JSCSSPrimitiveValueConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSCSSPrimitiveValueConstructor, JSDOMWrapper>(exec, &JSCSSPrimitiveValueConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSCSSPrimitiveValuePrototypeTableValues[34] =
{
    { "CSS_UNKNOWN", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsCSSPrimitiveValueCSS_UNKNOWN), (intptr_t)0 THUNK_GENERATOR(0) },
    { "CSS_NUMBER", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsCSSPrimitiveValueCSS_NUMBER), (intptr_t)0 THUNK_GENERATOR(0) },
    { "CSS_PERCENTAGE", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsCSSPrimitiveValueCSS_PERCENTAGE), (intptr_t)0 THUNK_GENERATOR(0) },
    { "CSS_EMS", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsCSSPrimitiveValueCSS_EMS), (intptr_t)0 THUNK_GENERATOR(0) },
    { "CSS_EXS", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsCSSPrimitiveValueCSS_EXS), (intptr_t)0 THUNK_GENERATOR(0) },
    { "CSS_PX", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsCSSPrimitiveValueCSS_PX), (intptr_t)0 THUNK_GENERATOR(0) },
    { "CSS_CM", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsCSSPrimitiveValueCSS_CM), (intptr_t)0 THUNK_GENERATOR(0) },
    { "CSS_MM", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsCSSPrimitiveValueCSS_MM), (intptr_t)0 THUNK_GENERATOR(0) },
    { "CSS_IN", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsCSSPrimitiveValueCSS_IN), (intptr_t)0 THUNK_GENERATOR(0) },
    { "CSS_PT", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsCSSPrimitiveValueCSS_PT), (intptr_t)0 THUNK_GENERATOR(0) },
    { "CSS_PC", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsCSSPrimitiveValueCSS_PC), (intptr_t)0 THUNK_GENERATOR(0) },
    { "CSS_DEG", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsCSSPrimitiveValueCSS_DEG), (intptr_t)0 THUNK_GENERATOR(0) },
    { "CSS_RAD", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsCSSPrimitiveValueCSS_RAD), (intptr_t)0 THUNK_GENERATOR(0) },
    { "CSS_GRAD", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsCSSPrimitiveValueCSS_GRAD), (intptr_t)0 THUNK_GENERATOR(0) },
    { "CSS_MS", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsCSSPrimitiveValueCSS_MS), (intptr_t)0 THUNK_GENERATOR(0) },
    { "CSS_S", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsCSSPrimitiveValueCSS_S), (intptr_t)0 THUNK_GENERATOR(0) },
    { "CSS_HZ", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsCSSPrimitiveValueCSS_HZ), (intptr_t)0 THUNK_GENERATOR(0) },
    { "CSS_KHZ", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsCSSPrimitiveValueCSS_KHZ), (intptr_t)0 THUNK_GENERATOR(0) },
    { "CSS_DIMENSION", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsCSSPrimitiveValueCSS_DIMENSION), (intptr_t)0 THUNK_GENERATOR(0) },
    { "CSS_STRING", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsCSSPrimitiveValueCSS_STRING), (intptr_t)0 THUNK_GENERATOR(0) },
    { "CSS_URI", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsCSSPrimitiveValueCSS_URI), (intptr_t)0 THUNK_GENERATOR(0) },
    { "CSS_IDENT", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsCSSPrimitiveValueCSS_IDENT), (intptr_t)0 THUNK_GENERATOR(0) },
    { "CSS_ATTR", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsCSSPrimitiveValueCSS_ATTR), (intptr_t)0 THUNK_GENERATOR(0) },
    { "CSS_COUNTER", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsCSSPrimitiveValueCSS_COUNTER), (intptr_t)0 THUNK_GENERATOR(0) },
    { "CSS_RECT", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsCSSPrimitiveValueCSS_RECT), (intptr_t)0 THUNK_GENERATOR(0) },
    { "CSS_RGBCOLOR", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsCSSPrimitiveValueCSS_RGBCOLOR), (intptr_t)0 THUNK_GENERATOR(0) },
    { "setFloatValue", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsCSSPrimitiveValuePrototypeFunctionSetFloatValue), (intptr_t)2 THUNK_GENERATOR(0) },
    { "getFloatValue", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsCSSPrimitiveValuePrototypeFunctionGetFloatValue), (intptr_t)1 THUNK_GENERATOR(0) },
    { "setStringValue", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsCSSPrimitiveValuePrototypeFunctionSetStringValue), (intptr_t)2 THUNK_GENERATOR(0) },
    { "getStringValue", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsCSSPrimitiveValuePrototypeFunctionGetStringValue), (intptr_t)0 THUNK_GENERATOR(0) },
    { "getCounterValue", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsCSSPrimitiveValuePrototypeFunctionGetCounterValue), (intptr_t)0 THUNK_GENERATOR(0) },
    { "getRectValue", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsCSSPrimitiveValuePrototypeFunctionGetRectValue), (intptr_t)0 THUNK_GENERATOR(0) },
    { "getRGBColorValue", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsCSSPrimitiveValuePrototypeFunctionGetRGBColorValue), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSCSSPrimitiveValuePrototypeTable = { 132, 127, JSCSSPrimitiveValuePrototypeTableValues, 0 };
const ClassInfo JSCSSPrimitiveValuePrototype::s_info = { "CSSPrimitiveValuePrototype", &JSC::JSObjectWithGlobalObject::s_info, &JSCSSPrimitiveValuePrototypeTable, 0 };

JSObject* JSCSSPrimitiveValuePrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSCSSPrimitiveValue>(exec, globalObject);
}

bool JSCSSPrimitiveValuePrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticPropertySlot<JSCSSPrimitiveValuePrototype, JSObject>(exec, &JSCSSPrimitiveValuePrototypeTable, this, propertyName, slot);
}

bool JSCSSPrimitiveValuePrototype::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticPropertyDescriptor<JSCSSPrimitiveValuePrototype, JSObject>(exec, &JSCSSPrimitiveValuePrototypeTable, this, propertyName, descriptor);
}

const ClassInfo JSCSSPrimitiveValue::s_info = { "CSSPrimitiveValue", &JSCSSValue::s_info, &JSCSSPrimitiveValueTable, 0 };

JSCSSPrimitiveValue::JSCSSPrimitiveValue(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<CSSPrimitiveValue> impl)
    : JSCSSValue(structure, globalObject, impl)
{
    ASSERT(inherits(&s_info));
}

JSObject* JSCSSPrimitiveValue::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSCSSPrimitiveValuePrototype(exec->globalData(), globalObject, JSCSSPrimitiveValuePrototype::createStructure(exec->globalData(), JSCSSValuePrototype::self(exec, globalObject)));
}

bool JSCSSPrimitiveValue::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSCSSPrimitiveValue, Base>(exec, &JSCSSPrimitiveValueTable, this, propertyName, slot);
}

bool JSCSSPrimitiveValue::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSCSSPrimitiveValue, Base>(exec, &JSCSSPrimitiveValueTable, this, propertyName, descriptor);
}

JSValue jsCSSPrimitiveValuePrimitiveType(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSCSSPrimitiveValue* castedThis = static_cast<JSCSSPrimitiveValue*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    CSSPrimitiveValue* imp = static_cast<CSSPrimitiveValue*>(castedThis->impl());
    JSValue result = jsNumber(imp->primitiveType());
    return result;
}


JSValue jsCSSPrimitiveValueConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSCSSPrimitiveValue* domObject = static_cast<JSCSSPrimitiveValue*>(asObject(slotBase));
    return JSCSSPrimitiveValue::getConstructor(exec, domObject->globalObject());
}

JSValue JSCSSPrimitiveValue::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSCSSPrimitiveValueConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsCSSPrimitiveValuePrototypeFunctionSetFloatValue(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSCSSPrimitiveValue::s_info))
        return throwVMTypeError(exec);
    JSCSSPrimitiveValue* castedThis = static_cast<JSCSSPrimitiveValue*>(asObject(thisValue));
    CSSPrimitiveValue* imp = static_cast<CSSPrimitiveValue*>(castedThis->impl());
    ExceptionCode ec = 0;
    unsigned short unitType(exec->argument(0).toUInt32(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    float floatValue(exec->argument(1).toFloat(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());

    imp->setFloatValue(unitType, floatValue, ec);
    setDOMException(exec, ec);
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsCSSPrimitiveValuePrototypeFunctionGetFloatValue(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSCSSPrimitiveValue::s_info))
        return throwVMTypeError(exec);
    JSCSSPrimitiveValue* castedThis = static_cast<JSCSSPrimitiveValue*>(asObject(thisValue));
    CSSPrimitiveValue* imp = static_cast<CSSPrimitiveValue*>(castedThis->impl());
    ExceptionCode ec = 0;
    unsigned short unitType(exec->argument(0).toUInt32(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());


    JSC::JSValue result = jsNumber(imp->getFloatValue(unitType, ec));
    setDOMException(exec, ec);
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsCSSPrimitiveValuePrototypeFunctionSetStringValue(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSCSSPrimitiveValue::s_info))
        return throwVMTypeError(exec);
    JSCSSPrimitiveValue* castedThis = static_cast<JSCSSPrimitiveValue*>(asObject(thisValue));
    CSSPrimitiveValue* imp = static_cast<CSSPrimitiveValue*>(castedThis->impl());
    ExceptionCode ec = 0;
    unsigned short stringType(exec->argument(0).toUInt32(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    const String& stringValue(ustringToString(exec->argument(1).toString(exec)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());

    imp->setStringValue(stringType, stringValue, ec);
    setDOMException(exec, ec);
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsCSSPrimitiveValuePrototypeFunctionGetStringValue(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSCSSPrimitiveValue::s_info))
        return throwVMTypeError(exec);
    JSCSSPrimitiveValue* castedThis = static_cast<JSCSSPrimitiveValue*>(asObject(thisValue));
    CSSPrimitiveValue* imp = static_cast<CSSPrimitiveValue*>(castedThis->impl());
    ExceptionCode ec = 0;


    JSC::JSValue result = jsString(exec, imp->getStringValue(ec));
    setDOMException(exec, ec);
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsCSSPrimitiveValuePrototypeFunctionGetCounterValue(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSCSSPrimitiveValue::s_info))
        return throwVMTypeError(exec);
    JSCSSPrimitiveValue* castedThis = static_cast<JSCSSPrimitiveValue*>(asObject(thisValue));
    CSSPrimitiveValue* imp = static_cast<CSSPrimitiveValue*>(castedThis->impl());
    ExceptionCode ec = 0;


    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->getCounterValue(ec)));
    setDOMException(exec, ec);
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsCSSPrimitiveValuePrototypeFunctionGetRectValue(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSCSSPrimitiveValue::s_info))
        return throwVMTypeError(exec);
    JSCSSPrimitiveValue* castedThis = static_cast<JSCSSPrimitiveValue*>(asObject(thisValue));
    CSSPrimitiveValue* imp = static_cast<CSSPrimitiveValue*>(castedThis->impl());
    ExceptionCode ec = 0;


    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->getRectValue(ec)));
    setDOMException(exec, ec);
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsCSSPrimitiveValuePrototypeFunctionGetRGBColorValue(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSCSSPrimitiveValue::s_info))
        return throwVMTypeError(exec);
    JSCSSPrimitiveValue* castedThis = static_cast<JSCSSPrimitiveValue*>(asObject(thisValue));
    CSSPrimitiveValue* imp = static_cast<CSSPrimitiveValue*>(castedThis->impl());
    ExceptionCode ec = 0;


    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->getRGBColorValue(ec)));
    setDOMException(exec, ec);
    return JSValue::encode(result);
}

// Constant getters

JSValue jsCSSPrimitiveValueCSS_UNKNOWN(ExecState* exec, JSValue, const Identifier&)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(0));
}

JSValue jsCSSPrimitiveValueCSS_NUMBER(ExecState* exec, JSValue, const Identifier&)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(1));
}

JSValue jsCSSPrimitiveValueCSS_PERCENTAGE(ExecState* exec, JSValue, const Identifier&)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(2));
}

JSValue jsCSSPrimitiveValueCSS_EMS(ExecState* exec, JSValue, const Identifier&)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(3));
}

JSValue jsCSSPrimitiveValueCSS_EXS(ExecState* exec, JSValue, const Identifier&)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(4));
}

JSValue jsCSSPrimitiveValueCSS_PX(ExecState* exec, JSValue, const Identifier&)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(5));
}

JSValue jsCSSPrimitiveValueCSS_CM(ExecState* exec, JSValue, const Identifier&)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(6));
}

JSValue jsCSSPrimitiveValueCSS_MM(ExecState* exec, JSValue, const Identifier&)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(7));
}

JSValue jsCSSPrimitiveValueCSS_IN(ExecState* exec, JSValue, const Identifier&)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(8));
}

JSValue jsCSSPrimitiveValueCSS_PT(ExecState* exec, JSValue, const Identifier&)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(9));
}

JSValue jsCSSPrimitiveValueCSS_PC(ExecState* exec, JSValue, const Identifier&)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(10));
}

JSValue jsCSSPrimitiveValueCSS_DEG(ExecState* exec, JSValue, const Identifier&)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(11));
}

JSValue jsCSSPrimitiveValueCSS_RAD(ExecState* exec, JSValue, const Identifier&)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(12));
}

JSValue jsCSSPrimitiveValueCSS_GRAD(ExecState* exec, JSValue, const Identifier&)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(13));
}

JSValue jsCSSPrimitiveValueCSS_MS(ExecState* exec, JSValue, const Identifier&)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(14));
}

JSValue jsCSSPrimitiveValueCSS_S(ExecState* exec, JSValue, const Identifier&)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(15));
}

JSValue jsCSSPrimitiveValueCSS_HZ(ExecState* exec, JSValue, const Identifier&)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(16));
}

JSValue jsCSSPrimitiveValueCSS_KHZ(ExecState* exec, JSValue, const Identifier&)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(17));
}

JSValue jsCSSPrimitiveValueCSS_DIMENSION(ExecState* exec, JSValue, const Identifier&)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(18));
}

JSValue jsCSSPrimitiveValueCSS_STRING(ExecState* exec, JSValue, const Identifier&)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(19));
}

JSValue jsCSSPrimitiveValueCSS_URI(ExecState* exec, JSValue, const Identifier&)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(20));
}

JSValue jsCSSPrimitiveValueCSS_IDENT(ExecState* exec, JSValue, const Identifier&)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(21));
}

JSValue jsCSSPrimitiveValueCSS_ATTR(ExecState* exec, JSValue, const Identifier&)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(22));
}

JSValue jsCSSPrimitiveValueCSS_COUNTER(ExecState* exec, JSValue, const Identifier&)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(23));
}

JSValue jsCSSPrimitiveValueCSS_RECT(ExecState* exec, JSValue, const Identifier&)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(24));
}

JSValue jsCSSPrimitiveValueCSS_RGBCOLOR(ExecState* exec, JSValue, const Identifier&)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(25));
}


}
