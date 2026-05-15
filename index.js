const inputValue = 5;

const recursion = (i, n) => {
  if (i === n + 1) return;
  recursion(i + 1, n);
  console.log(`count ${i}`);
};

const main = () => {
  recursion(1, inputValue);
};

main();
