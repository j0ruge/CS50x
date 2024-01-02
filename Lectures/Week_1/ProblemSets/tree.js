const print = str => process.stdout.write(str);

const repeat = (char, i) => {
  for (let p = 0; p < i; p++) {
    print(char);
  }
}

const line = (n, i) => {
  repeat(" ", n - i);
  repeat("#", i);
  repeat(" ", 2);
  repeat("#", i);
  repeat(" ", n - i);
  print("\n");
}

const lines = (n) => {
  for(let i = 1; i <= n; i++) {
    line(n, i);
  }
}

lines(parseInt(process.argv[2]));

