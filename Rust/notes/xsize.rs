/*
    Topic: variables

    Syntax:
        let var_name: type = value;
            or,
        let var_name = value;

    Type Name: usize, isize
*/

fn main() {
    let xsize1: usize = 123; // unsigned integer. Same number of bits as the platform's pointer type.
    let xsize2: isize = -45; // Signed integer. Same number of bits as the platform's pointer type.

    println!("{}  {}", xsize1, xsize2); // 123  -45
}
