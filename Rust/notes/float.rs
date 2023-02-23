/*
    Topic: variables

    Syntax:
        let var_name: type = value;
            or,
        let var_name = value;
    
    Type Name: f32, f64
*/

fn main() {
    let float1: f32 = 123.15967161127612; // First 5 digits after the decimal point is accepted
    let float2: f64 = 456.47267217129729; // 14th digit after the decimal point is always '3'

    println!("{}  {}", float1, float2); // 123.15967  456.47267217129723
}
