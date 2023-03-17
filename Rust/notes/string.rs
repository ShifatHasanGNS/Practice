/*
    Topic: variables

    Syntax:
        let var_name: type = value;
            or,
        let var_name = value;

    Type Name: &str, String
*/

use std::any::type_name;

fn main() {
    let string1: &str = "&str:: Hello World.";
    let string2: String = "String:: Hello World.".to_string();

    println!(" {}\n {}", string1, string2);
}
