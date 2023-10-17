module xnor2_test;
reg a, b;
wire y;
xnor xnor_test(y,a,b);
initial
begin
#0 a=0;b=0;
#5 a=0;b=1;
#10 a=1;b=0;
#15 a=1;b=1;
end
initial
begin
$monitor($time, "a=%b, b=%b, y=%b", a ,b ,y);
end
initial
begin
$dumpfile ("xnor2_test.vcd");
$dumpvars (0,xnor2_test); 
end
endmodule