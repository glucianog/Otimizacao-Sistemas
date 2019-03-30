# Otimização de Sistemas (Gestão de Tarefas)

## Compilação & Execução
### Ubuntu

- Compilação:

javac -classpath /usr/local/share/java/glpk-java.jar Model.java

- Execução:

java -Djava.library.path=/usr/local/lib/jni -classpath /usr/local/share/java/glpk-java.jar:. Model
