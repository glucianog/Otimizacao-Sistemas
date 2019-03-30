# Otimização de Sistemas (Gestão de Tarefas)

## Documentação

- Java

http://glpk-java.sourceforge.net/apidocs/org/gnu/glpk/GLPK.html#glp_set_mat_row-org.gnu.glpk.glp_prob-int-int-org.gnu.glpk.SWIGTYPE_p_int-org.gnu.glpk.SWIGTYPE_p_double-

## Compilação & Execução
### Ubuntu

- Compilação:

javac -classpath /usr/local/share/java/glpk-java.jar Model.java

- Execução:

java -Djava.library.path=/usr/local/lib/jni -classpath /usr/local/share/java/glpk-java.jar:. Model
