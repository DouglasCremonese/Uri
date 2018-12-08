object Main {
def checkNumber(count: Int): Unit = {
        if(count > 0){
            val n = getNumber()
            if(n == 0)println("NULL")
            else if(n % 2 == 0) print("EVEN ")
            else print("ODD ")
            if(n > 0) println("POSITIVE")
            else if(n < 0)println("NEGATIVE")
            checkNumber(count = count - 1)
         }
    } 
    def getNumber() = scala.io.StdIn.readInt()
    def main(args: Array[String]) {
    val N: Int = scala.io.StdIn.readInt()
    checkNumber(N)
    }
}