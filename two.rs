use std::io::BufRead;

fn main() {
    let mut lines = std::io::stdin().lock().lines();
    let (mut m, mut n) = (0, 0);
    for _ in 0..5 {
        let ops = lines.next().unwrap().unwrap();
        for c in ops.chars() {
            if c == '0' {
                m = m + 1;
            } else if c == ' ' {
                continue;
            } else if c == '1' {
                if m > 3 {
                    m = m - 3;
                } else {
                    m = 3 - m;
                }

                if n > 3 {
                    n = n - 3;
                } else {
                    n = 3 - n;
                }
                println!("{}", m + n);
                return;
            }
        }
        m = 0;
        n = n + 1;
    }
}
