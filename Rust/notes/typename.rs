/*
    Topic: Object Type
*/

fn print_type_of<T>(_: &T) {
    println!("{}", std::any::type_name::<T>())
}

fn main() {
    let s = "Hello";
    let i = 42;

    print_type_of(&s); // &str
    print_type_of(&i); // i32
    print_type_of(&main); // typename::main
    print_type_of(&print_type_of::<i32>); // typename::print_type_of<i32>
    print_type_of(&{||"Hi!"}); // typename::main::{{closure}}
}
