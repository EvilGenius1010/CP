use std::io::{self, BufRead};

fn main() {
    let stdin = io::stdin();
    let mut lines = stdin.lock().lines();

    let n: i32 = lines.next().unwrap().unwrap().trim().parse().unwrap();
    
    let mut x = 0;
    
    for _ in 0..n {
        let operation = lines.next().unwrap().unwrap();
        if operation.contains("++") {
            x += 1;
        } else if operation.contains("--") {
            x -= 1;
        }
    }
    
    println!("{}", x);
}