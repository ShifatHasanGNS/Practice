/*
    Topic: variables

    Syntax:
        let var_name: type = value;
            or,
        let var_name = value;
    
    Type Name: Unsigned (u8, u16, u32, u64, u128),
                 Signed (i8, i16, i32, i64)
*/

fn main() {
    let int1: u32 = 123; // unsigned integer
    let int2: i32 = -45; // signed integer

    println!("{}  {}", int2, int1); // -45  123
}
