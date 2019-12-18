import java.util.Comparator;

class PersonNameComparator implements Comparator<Person> {

    @Override
    public int compare(Person o1, Person o2) {
        return o1.name.compareTo(o2.name);
    }
}
class PersonHighComparator implements Comparator<Person> {


    @Override
    public int compare(Person o1, Person o2) {
        return  o1.high-o2.high;
    }
}




public class Person implements Comparable<Person> {
   public String name;
  public int age;
   public int weight;
  public int high;
    public String gender;

    public Person(String name,int age,int weight,int high,String gender){
        this.name=name;
        this.age=age;
        this.weight=weight;
        this.high=high;
        this.gender=gender;
    }
    @Override
    public int compareTo(Person o) {
        return age-o.age;
    }


    public static void main(String[] args) {
        Person xiaoming=new Person("小明",20,80,160,"nan");
        Person xiaohong=new Person("小红",18,70,170,"nan");
       int s= xiaoming.compareTo(xiaohong);
        if(s<0){
            System.out.println("小明比小红小");
        }else if(s==0){
            System.out.println("小明和小红一样大");
        }else{
            System.out.println("小明比小红大");
        }

       Comparator<Person> c=new PersonHighComparator() ;
      int f= c.compare(xiaoming,xiaohong);
      if(f<0){
          System.out.println("小明比小红矮");
      }else if(f==0){
          System.out.println("小明和小红一样高");
      }else{
          System.out.println("小明比小红高");
      }



    }
}
