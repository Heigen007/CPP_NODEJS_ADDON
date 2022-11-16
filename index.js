const addon = require('./cpp/build/Release/addon');

console.log("with JS");
console.time("js");
var n = 0;
for(i = 0; i < 1_000_000_000; i++){
    n++;
}
console.timeEnd("js");

console.log("with С++");
console.time("cpp");
addon.hello(1_000_000_000);
console.timeEnd("cpp");