// Java
import java.util.ArrayList;
import java.util.List;


public class BS{
    public static void main(String[] args) {
        List<Integer> listage = new ArrayList<>(List.of(4, 8, 87, 54, 12, 3, 65, 99, 30, 43));
        List<Integer> newListage = new BubbleSort(listage).apply();
        System.out.println(newListage);
    }
}


class BubbleSort{
    private List<Integer> listage;


    public BubbleSort(List<Integer> listage){
        this.listage = listage;
    }

    public List<Integer> apply(){
        int lenght = listage.size();

        for (int i=0; i<lenght; i++){
            for (int j=0; j<lenght - i - 1; j++){
                if (listage.get(j) > listage.get(j+1)){
                    int var_aux;
                    var_aux = listage.get(j);
                    listage.set(j, listage.get(j+1));
                    listage.set(j+1, var_aux);
                }
            }
        }
        return listage;
    }
}