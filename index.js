const inputValue = 5;

const recursion = (i, n) => {
  if (i === n + 1) return;
  recursion(i + 1, n);
  console.log(`count ${i}`);
};

const main = () => {
  recursion(1, inputValue);
};

// main();

// second problem
const col = [2, 5, 4, 5, 8, 4, 5];
const row = [4, 8, 4, 5, 8, 4, 5, 8, 4, 5, 7, 5];

//* question is
//? print 3 row and print 1 col

const r = 3;
const c = 1;

for (let i = 0; i < col.length; i++) {
  console.log(col[3], row[i]);
}
