const mergeSort = (arr) => {
    const mid = arr.length / 2

    if(arr.length < 2) {
        return arr
    }

    const left = arr.splice(0, mid)

    return merge(mergeSort(left), mergeSort(arr))
}

const merge = (left, right) => {
    let arr = []
    while (left.length && right.length) {
        if(left[0] < right[0]) {
            arr.push(left.shift())
        } else {
            arr.push(right.shift())
        }
    }

    return [...arr, ...left, ...right]
}

const main = () => {
    const arr = [4, 6, 9, 0, 2, 7, 5, 1, 3, 8]
    const res = mergeSort(arr)

    console.log(res)
}

const randomArr = (n = 10, max = 100) =>
  Array.from({ length: n }, () => Math.floor(Math.random() * max) + 1);

const arr = randomArr(5, 20)
console.log(arr)