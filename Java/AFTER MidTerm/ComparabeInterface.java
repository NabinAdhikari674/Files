import java.util.*; 
class Book implements Comparable<Book>{
int ISBN, price;
String author, name;
Book(String author, String name,int ISBN, int price){
this.author=author;
this.name=name;
this.ISBN=ISBN;
this.price=price;
}
public int compareTo(Book b){
if(this.price<b.price)
return -1;
else if(this.price>b.price)
return 1;
else
return 0;
}}
class ComparableInterface{
public static void main(String ar[]){
ArrayList<Book> al=new ArrayList<Book>();
al.add(new Book("aa","zz",123,900));
al.add(new Book("bb","yy",143,950));
al.add(new Book("cc","xx",223,100));
al.add(new Book("dd","ww",125,780));
al.add(new Book("ee","vv",127,500));
for(Book b1:al)
System.out.println(b1.author+" "+b1.name+" "+b1.ISBN+" "+b1.price);
Collections.sort(al);
System.out.println("after sort");
for(Book b1:al)
System.out.println(b1.author+" "+b1.name+" "+b1.ISBN+" "+b1.price);
}
}
