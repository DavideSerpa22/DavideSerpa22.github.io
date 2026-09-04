% Esempio didattico di ottimizzazione lineare con linprog.
% Minimize: 2*x1 + 3*x2
% subject to: x1 + x2 >= 4, x1 >= 0, x2 >= 0

f = [2; 3];
A = [-1 -1];
b = -4;
lb = [0; 0];

[x, cost] = linprog(f, A, b, [], [], lb, []);

disp('Soluzione:');
disp(x);
disp('Costo minimo:');
disp(cost);
