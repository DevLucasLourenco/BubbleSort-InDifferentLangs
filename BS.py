def BubbleSort(listage):
    lenth = len(listage)
    
    for i in range(lenth):
        for j in range(0, lenth -i -1):
            if listage[j] > listage[j+1]:
                listage[j], listage[j+1] =  listage[j+1], listage[j]
    return listage
    
    
if __name__=="__main__":
    listage = [4, 8, 87, 54, 12, 3, 65, 99, 30, 43]
    print(BubbleSort(listage))

