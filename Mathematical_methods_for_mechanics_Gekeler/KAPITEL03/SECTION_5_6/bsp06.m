function Y = bsp06(X,flag,Parmeter);
% Himmelblau, p. 393 (only inequalities)
% flag = 1: Objective function
% flag = 2: Inequalities
% flag = 3: Equalities
% flag = 4: Gradient of objective function
% flag = 5: Gradient of inequalities
% flag = 6: Gradient of equalities
% flag = 7: Boundary of feasible domain (2-dim. problems)
% -------------------------------------------
% Gradient of f: R_n -> R_m is (m,n)-matrix
% -------------------------------------------
switch flag
case 1, Y = (X(1) - 2)^2 + (X(2) - 1)^2;
case 2, Y = - X(1)^2/4 - X(2)^2 + 1;
case 3, Y = 0;
case 4, Y = [2*X(1)-4, 2*X(2)-2];
case 5, Y = [-X(1)/2, -2*X(2)];
case 6, Y = 0;
end
