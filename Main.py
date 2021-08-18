
def CountRange(iNo):

    if iNo < 0:
        iNo = -iNo
    
    iCnt = 0

    while iNo != 0:

        if(iNo%10 > 3 and iNo%10 < 7):
            iCnt += 1

        iNo = int(iNo/10)
    return iCnt

def main():
    iValue = int(input("Enter Number\n"))
    iRet = CountRange(iValue)
    print(iRet)

if __name__ == "__main__":
    main()