fn binary_search(list: &[i32], num: i32) -> i32 {
    let mut left: usize = 0;
    let mut right: usize = list.len() - 1;
    let mut mid: usize;

    while left <= right {
        mid = (left + right) / 2;

        if list[mid] == num {
            return mid as i32;
        } else if list[mid] > num {
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }

    return -1;
}

fn main() {
    let nums = [
        0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20,
    ];

    let id = binary_search(&nums, 13);

    println!("id: {}", id);
}
