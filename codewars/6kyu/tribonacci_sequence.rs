// Well met with Fibonacci bigger brother, AKA Tribonacci.

// As the name may already reveal, it works basically like a Fibonacci, but summing the last 3 (instead of 2) numbers of the sequence to generate the next. And, worse part of it, regrettably I won't get to hear non-native Italian speakers trying to pronounce it :(

// So, if we are to start our Tribonacci sequence with [1, 1, 1] as a starting input (AKA signature), we have this sequence:

// [1, 1 ,1, 3, 5, 9, 17, 31, ...]
// But what if we started with [0, 0, 1] as a signature? As starting with [0, 1] instead of [1, 1] basically shifts the common Fibonacci sequence by once place, you may be tempted to think that we would get the same sequence shifted by 2 places, but that is not the case and we would get:

// [0, 0, 1, 1, 2, 4, 7, 13, 24, ...]

fn tribonacci(signature: &[f64; 3], n: usize) -> Vec<f64> {
    let mut tribonacci_sequence = signature.to_vec();
    for _ in 3..n {
        let last_three_sum = tribonacci_sequence.iter().rev().take(3).sum::<f64>();
        tribonacci_sequence.push(last_three_sum);
    }
    return tribonacci_sequence;
}