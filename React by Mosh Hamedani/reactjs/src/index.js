const first = [1, 2, 3];
const second = [4, 5, 6];
const combined1 = first.concat(second);
const combined2 = [...first, 1, ...second, "b"];
console.log(combined1);
console.log(combined2);
