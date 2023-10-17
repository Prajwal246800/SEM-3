module simple3(A,B,C,Z);
    input A,B,C;
    output Z;
    wire w1,w2,w3;
    and G1(w1,B,C);
    or G2(w2,A,w1);
    and G3(w3,A,B);
    or G4(Z,w2,w3);
endmodule