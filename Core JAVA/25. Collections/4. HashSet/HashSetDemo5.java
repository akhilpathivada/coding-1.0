// objects of a class storing in a HashSet

import java.util.*;

class Book
{
	int id;
	String name,author,publisher;
	int quantity;
	Book(int id,String name,String author,String publisher,int quantity)
	{
		this.id = id;
		this.name = name;
		this.author = author;
		this.publisher = publisher;
		this.quantity = quantity;
	}
}
class HashSetDemo5
{
	public static void main(String args[])
	{
		HashSet<Book> set = new HashSet<Book>();
		Book b1 = new Book(101,"Let us C","Yashwant Kanetkar","BPB",8);  
		Book b2 = new Book(102,"Data Communications & Networking","Forouzan","Mc Graw Hill",4);  
		Book b3 = new Book(103,"Operating System","Galvin","Wiley",6); 
		set.add(b1);
		set.add(b2);
		set.add(b3);
		for(Book b : set)
			System.out.println(" " + b.id + " " + b.name + " " + b.author + " " + b.publisher + " " + b.quantity);
		//System.out.println(set.get(2).id);
	}
}
/*
 102 Data Communications & Networking Forouzan Mc Graw Hill 4
 101 Let us C Yashwant Kanetkar BPB 8
 103 Operating System Galvin Wiley 6
*/