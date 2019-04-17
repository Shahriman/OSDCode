
var text = '{ "name":"John", "birth":"1986-12-14", "city":"New York"}';
var obj = JSON.parse(text);

console.log('Date '+ obj.birth);

obj.birth = new Date(obj.birth);

console.log('Date ' + obj.birth);