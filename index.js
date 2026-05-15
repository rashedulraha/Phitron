const inputValue = 5;

const recursion = (i, n) => {
  if (i === n + 1) return;
  console.log(`count ${i}`);
  recursion(i + 1, n);
};

const main = () => {
  recursion(1, inputValue);
};

main();
