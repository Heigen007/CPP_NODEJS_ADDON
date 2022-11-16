#include <node.h>

namespace demo {

    using v8::FunctionCallbackInfo;
    using v8::Isolate;
    using v8::Local;
    using v8::Object;
    using v8::String;
    using v8::Number;
    using v8::Value;

    void Method(const FunctionCallbackInfo<Value>& args) {
        int i;
        for(i = 0; i < args[0].As<Number>()->Value(); i++);
        Isolate* isolate = args.GetIsolate();
        args.GetReturnValue().Set((isolate, i));
    }

    void Initialize(Local<Object> exports) {
    NODE_SET_METHOD(exports, "hello", Method);
    }

    NODE_MODULE(NODE_GYP_MODULE_NAME, Initialize)

}