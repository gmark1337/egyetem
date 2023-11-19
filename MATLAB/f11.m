clear

syms x t a3 a2 a1 a0

px = [-2 4 6 10];
py = [-2 0 -2 2];

tk = [-1 0 2 3];

plot(px,py,".r",markersize = 20);
hold on;
axis equal;
x(t) = a3 * t^3 + a2 * t^2 + a1*t + a0;
xd(t) = diff(x,t);

ex = [x(tk(1)) == px(1), x(tk(2)) == px(2),...
     x(tk(3)) == px(3), x(tk(4)) == px(4)];

ey = [x(tk(1)) == py(1), x(tk(2)) == py(2), ...
     x(tk(3)) == py(3), x(tk(4)) == py(4)];

sx = solve(ex, [a0 a1 a2 a3]);
sy = solve(ey, [a0 a1 a2 a3]);

rx(t) = subs(x, [a0 a1 a2 a3], [sx.a0, sx.a1, sx.a2, sx.a3]);
ry(t) = subs(x, [a0 a1 a2 a3], [sy.a0, sy.a1, sy.a2, sy.a3]);

fplot(rx, ry, [tk(1),tk(4)])

rxd(t) = diff(rx, t);
ryd(t) = diff(ry, t);

t0 = 2;
p = [rx(t0), ry(t0)];
plot(p(1), p(2),".b", markersize = 20)
v = [rxd(t0), ryd(t0)];
plot(v(1),v(2),".b",markersize = 20)
quiver(p(1),p(2),v(1),v(2),"c")

%11-es feladat része
k = 1;

px1 = [px(4) 14];
py1 = [py(4) -4];
vx = [rxd(tk(4))*k 3];
vy = [ryd(tk(4))*k 0];

tk = [0 2];

plot(px1, py1, ".b", markersize = 20)
quiver(px1,py1,vx,vy,"c");

ex = [x(tk(1)) == px1(1), xd(tk(1)) == vx(1), ...
      x(tk(2)) == px1(2), xd(tk(2)) == vx(2)];

ey = [x(tk(1)) == py1(1), xd(tk(1)) == vy(1), ...
      x(tk()) == py1(2), xd(tk(2)) == vy(2) ];

sx = solve(ex,[a0 a1 a2 a3]);
sy = solve(ey, [a0 a1 a2 a3]);

hx(t) = subs(x,[a0 a1 a2 a3], [sx.a0, sx.a1, sx.a2, sx.a3]);
hy(t) = subs(x,[a0 a1 a2 a3], [sy.a0, sy.a1, sy.a2, sy.a3]);

fplot(hx,hy, [tk(1), tk(2)],"r");