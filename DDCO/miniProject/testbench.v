module testbench;

reg clk, rst, shift_en;
reg [3:0] data_in;
wire [7:0] data_out;

// Instantiate the shift_register module
shift_register dut (
    .clk(clk),
    .rst(rst),
    .shift_en(shift_en),
    .data_in(data_in),
    .data_out(data_out)
);

// Clock generation
always #5 clk = ~clk;

// Testbench initialization
initial begin
    clk = 0;
    rst = 1;
    shift_en = 0;
    data_in = 4'b0000;

    // Specify VCD file and dump variables
    $dumpfile("dump.vcd"); // Define VCD file name
    $dumpvars(0, testbench); // Dump signals

    #10 rst = 0;
    #20 shift_en = 1;
    #30 data_in = 4'b1101; // Input negative number here
    
    // Add more test cases or stimulus as needed
    
    #100 $finish;
end

endmodule
