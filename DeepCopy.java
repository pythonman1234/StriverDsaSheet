class Address {
    String city;

    Address(String city) {
        this.city = city;
    }

    // Copy constructor
    Address(Address a) {
        this.city = a.city;
    }
}

class Person {
    String name;
    Address address;

    Person(String name, Address address) {
        this.name = name;
        this.address = address;
    }

    // Deep copy constructor
    Person(Person p) {
        this.name = p.name;
        this.address = new Address(p.address);  // new Address object
    }
}

public class Main {
    public static void main(String[] args) {
        Address addr = new Address("Mumbai");
        Person p1 = new Person("Amit", addr);
        Person p2 = new Person(p1);  // deep copy

        p2.address.city = "Delhi";  // change city

        System.out.println(p1.address.city);  // Output: Mumbai
    }
}
