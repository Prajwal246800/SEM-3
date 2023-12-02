module shift_register(
    input wire clk,
    input wire rst,
    input wire shift_en,
    input wire [3:0] data_in,
    output wire [7:0] data_out // Change to wire instead of reg
);

reg [7:0] shift_reg;

always @(posedge clk or posedge rst) begin
    if (rst) begin
        shift_reg <= 8'b0;
    end else if (shift_en) begin
        shift_reg <= {data_in, shift_reg[7:4]}; // Perform arithmetic shift left by 4 bits
    end
end

assign data_out = shift_reg;

endmodule
