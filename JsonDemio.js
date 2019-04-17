
const myJSON = '{"name":"John", "age":31, "city":"New York"}';

console.log('JSON ' + myJSON);

var myObj = JSON.parse(myJSON);

console.log('Name ' + myObj.name);
console.log('Age ' + myObj.age);
console.log('City ' + myObj.city);

const myJSON2 = JSON.stringify(myObj);

console.log('JSON2 ' + myJSON2);


