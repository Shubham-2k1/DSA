
import java.util.*;

class subsequenceUsingRecursion {

    public static void printingsubseq(int n, int size, int[] arr, ArrayList<Integer> al) {
        if (n == size) {
            for (int num : al) {
                System.out.print(num);
            }
            System.out.print("\n");
            return; // Exit the current call to avoid further processing
        }

        al.add(arr[n]);
        printingsubseq(n + 1, size, arr, al);
        al.remove(al.size() - 1); // Correctly remove the last element

        printingsubseq(n + 1, size, arr, al);
    }

    public static void main(String[] args) {
        int[] arr = new int[]{3, 2, 1};

        int size = arr.length;
        ArrayList<Integer> al = new ArrayList<>();
        printingsubseq(0, size, arr, al);
    }
}
