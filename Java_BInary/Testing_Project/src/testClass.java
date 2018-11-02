public class testClass
{
    static{
        System.loadLibrary("interface_Cmodules");
    }

    public static void main(String[] args)
    {
//        int [] array_List=new int[500];
//        int counter=array_List.length;

        System.out.println(interface_Cmodules.factorial(10));
//        example.bubble_Sort(array_List,counter);
//        System.out.println("Done");
    }
}
