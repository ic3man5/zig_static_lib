const std = @import("std");
const print = std.debug.print;

const mylib = @cImport({
    @cInclude("mylib.h");
});

pub fn main() !void {
    print("Hello World!\n", .{});

    var result_str: [128]u8 = [_:0]u8{'a'} ** 128;

    const total = mylib.add(2, 2, &result_str, 128);
    print("Total: {}. {s}", .{ total, result_str });
}
