class VendingMachine:

    nos = {}

    def __init__(self, no):

        self.No = no
        self.Item = {}
        print("{}호점 자판기가 추가되었습니다.".format(no))
        VendingMachine.nos[no] = self

    def Restore(self, item, number):

        if item in list(self.Item.keys()):
            self.Item[item] += number
            print("{}개의 {}이(가) 추가되었습니다.".format(number, item))
            print("==========================================")
            self.CheckItem()

        else:
            self.Item[item] = number
            print("{}개의 {}이(가) 추가되었습니다.".format(number, item))
            print("==========================================")
            self.CheckItem()

    def Discard(self, item, number):

        if item in list(self.Item.keys()):

            if (self.Item[item >= number]):
                self.Item[item] -= number
                print("{}개의 {}이(가) 폐기되었습니다.".format(number, item))
                print("==========================================")
                self.CheckItem()

            else:
                check = input("존재하는 재고가 폐기하고자 하는 양보다 적습니다. 모두 폐기하시겠습니까?")

                if check == '예':
                    self.Item[item] = 0
                    print("==========================================")
                    self.CheckItem()


        else:
            print("존재하지 않는 재고입니다.")
            print("==========================================")

    def CheckItem(self):

        print("< {}호점 자판기 재고 >".format(self.No))
        for item in self.Item.items():
            print(item)

        print("==========================================")


while(True):

    choice = int(input("0 : 종료\n1 : 재고 확인\n2 : 재고 추가\n3 : 재고 폐기\n4 : 자판기 추가\n입력하시오 : "))
  #0 : Exit\n1: Check The Items\n3 : Restore The Items\n3 : Discard The Items\n4 : Resister New VendingMachine\n Enter : 
  
    print("==========================================")

    if choice == 0:
        break

    elif choice == 1:
        No = input("재고를 확인하고자 하는 자판기 호점을 입력하시오 : ")

        if No in VendingMachine.nos:
            No = VendingMachine.nos[No]
            No.CheckItem()

        else:
            print("등록되지 않은 자판기입니다.")
            print("==========================================")

    elif choice == 2:
        No = input("재고를 추가하고자 하는 자판기 호점을 입력하시오 : ")

        if No in VendingMachine.nos:

            No = VendingMachine.nos[No]
            item = input("추가하고자 하는 재고명을 입력하시오 : ")
            number = int(input("추가하고자 하는 수량을 입력하시오 : "))

            print("==========================================")
            No.Restore(item, number)

        else:
            print("등록되지 않은 자판기입니다.")
            print("==========================================")

    elif choice == 3:
        No = input("재고를 폐기하고자 하는 자판기 호점을 입력하시오 : ")

        if No in VendingMachine.nos:

            No = VendingMachine.nos[No]
            item = input("폐기하고자 하는 재고명을 입력하시오 : ")
            number = int(input("폐기하고자 하는 수량을 입력하시오 : "))

            print("==========================================")
            No.Discard(item, number)

        else:
            print("등록되지 않은 자판기입니다.")
            print("==========================================")

    elif choice == 4:
        No = input("신규 등록하고자 하는 자판기 호점을 입력하시오 : ")

        if No in VendingMachine.nos:
            print("이미 등록된 자판기입니다.")
        else:
            VendingMachine(No)
