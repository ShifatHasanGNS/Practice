fn main() {
    let x = 5;
    println!("{}", x);

    let x = x * 2; // Redefined 'x' variable. This is called 'Shadowing'.
    println!("{}", x);
}
