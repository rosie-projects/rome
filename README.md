# Projeto ROME (Robótica Móvel nas Escolas)

## Sobre o Projeto
ROME é um projeto educacional dedicado a democratizar o acesso à educação em robótica para escolas públicas e comunidade. O projeto desenvolve ferramentas, materiais didáticos e minicursos de robótica, sendo uma iniciativa de hardware de código aberto que visa transformar alunos de consumidores passivos em desenvolvedores de soluções tecnológicas.

(PlataformaMecanica/imagens/Cópia%20de%20flyerV4.jpg)

## Objetivos Principais
- Promover inclusão e transformação social através da robótica educacional
- Oferecer recursos flexíveis, de baixo custo e alta escalabilidade
- Estimular a cultura maker e aprendizagem prática
- Desenvolver habilidades como pensamento crítico, criatividade, comunicação e colaboração
- Integrar alunos do ensino médio ao ambiente universitário

## Estrutura do Projeto

```
rome/
├── Artigo/          # Documentação do projeto
├── PCB/         # Arquivos em PDF da esquemática da PCB
├── Plataforma Mecânica/           # Instruções para montagem da estrutura
│   ├── Prática/  # Pratica Docente e arquivos .ino
├── rome-conectado/   # Arquivos em KiCad na PCB

```

## Pré-requisitos

Para executar este projeto, você precisará ter instalado:

- Node.js (versão 14 ou superior)
- npm ou yarn
- Git
- Arduino IDE 1.8.19

## Componentes e Bibliotecas

### Hardware Necessário
- Placa Arduino
- Sensor ultrassônico HC-SR04
- Driver motor TB6612FNG

### Bibliotecas Arduino
1. **SparkFun TB6612FNG**
   - Biblioteca para controle dos motores
   - [Download SparkFun TB6612FNG](https://github.com/sparkfun/SparkFun_TB6612FNG_Arduino_Library)

2. **Ultrasonic**
   - Biblioteca para o sensor ultrassônico
   - [Download Ultrasonic](https://github.com/makerhero/Ultrasonic)

## Instalação

```bash
# Clone o repositório
git clone https://github.com/rosie-projects/rome.git

# Entre no diretório
cd rome

# Instale as dependências
npm install

# Inicie o servidor de desenvolvimento
npm run dev
```

## Como Usar

1. **Montagem do Hardware**
   - Monte a estrutura mecânica seguindo as instruções em `/Plataforma Mecânica`
   - Faça as conexões elétricas conforme o esquemático em `/PCB`
   - Conecte o Arduino, sensor ultrassônico e driver de motor

2. **Configuração do Software**
   - Abra o Arduino IDE 1.8.19
   - Instale as bibliotecas SparkFun TB6612FNG e Ultrasonic
   - Carregue o arquivo `/Prática/Pratica_final.ino`
   - Verifique se as portas definidas no código correspondem às suas conexões

3. **Execução**
   - Após carregar o código, o robô irá:
     - Mover-se para frente automaticamente
     - Detectar obstáculos usando o sensor ultrassônico
     - Desviar quando encontrar obstáculos a menos de 20cm

## Contribuição

1. Faça um Fork do projeto
2. Crie uma branch para sua feature (`git checkout -b feature/AmazingFeature`)
3. Commit suas mudanças (`git commit -m 'Add some AmazingFeature'`)
4. Push para a branch (`git push origin feature/AmazingFeature`)
5. Abra um Pull Request


