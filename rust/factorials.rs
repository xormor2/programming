fn factorial(i: u64) -> u64 {
    match i {
        0 => 1,
        n => n * factorial(n-1)
    }
}

fn main()
{
    println!("{}", factorial(5));
}
