/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package pkgclass;

/**
 *
 * @author Luiz Guilherme
 * @author John Eric
 */
public class Class {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        
        
        class Pessoa {
            String nome;
            int idade;
            String prefer;
            String formPag;           
        }       
        
        class Transporte {
            String veiculo;
            String horario;
            float valor;
            int assentos;
        }
        
        class Local {
            String titulo;
            String localizacao;
            float secao;
            String sala;
            float precoIng;
            String formaPag;
        }
        
        class Filme {
            String titulo;
            String diretor;
            float avaliacao;
            String genero;
            int oscars;
            float bilheteria;
        }
        
        class Diretor {
            String nome;
            int idade;
            int oscars;
            int indicacoesPremios;
            int grammy;
        }
        
    }
    
}
