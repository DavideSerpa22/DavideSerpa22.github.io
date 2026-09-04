public final class Student {
    private final String name;
    private final int matricola;

    public Student(String name, int matricola) {
        this.name = name;
        this.matricola = matricola;
    }

    public String getName() {
        return name;
    }

    public int getMatricola() {
        return matricola;
    }

    @Override
    public String toString() {
        return name + " (" + matricola + ")";
    }
}
