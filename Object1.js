const studentRecord = {
id: 12378,
name: {
firstname: 'Jason',
lastname: 'Bourne'
},
marks: {
programming: 77,
networking: 88
},
cgpa: [{sem1: 3.6}, {sem2: 3.7}]
};

console.log('id: ' + studentRecord.id);
console.log('First Name: ' + studentRecord.name.firstname);
console.log('Last Name: ' + studentRecord.name.lastname);
console.log('Programming Marks: ' + studentRecord.marks.programming);
console.log('Networking Marks: ' + studentRecord.marks.networking);
console.log('Cgpa Sem 1: ' + studentRecord.cgpa[0].sem1);
console.log('Cgpa Sem 2: ' + studentRecord.cgpa[1].sem2);