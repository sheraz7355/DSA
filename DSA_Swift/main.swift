import Foundation


class solution {
    func pairSum(_ array: [Int])-> Int{
        var count = 0
        var ans = 0
        for i in 0..<array.count{
                if count == 0{
                ans = array[i]
            }
            if ans == array[i]{
                count += 1
            }else {
                count -= 1
            }
            }
        return ans
        }
   }


print("Enter the array")
var array: [Int] = []

if let line = readLine() {
    array = line
        .split(separator: " ")
        .compactMap { Int($0) }
}



let s = solution()


print(s.pairSum(array))
