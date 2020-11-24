

# Jingle Bells - Arduino

![](https://raw.githubusercontent.com/fgouveia708/arduino-jingle-bells/blob/main/arduino-circuit.png)


Jingle Bells - Arduino é uma aplicação demonstrativa que visa mostrar técnicas de  desenvolvimento para IOT usando Arduino UNO, LEDs e Buzzer.

- [Jingle Bells](https://github.com/fgouveia708/arduino-jingle-bells#jingle-bells---arduino)
    - [Introdução](https://github.com/fgouveia708/arduino-jingle-bells#introdu%C3%A7%C3%A3o)
    - [Circuito](https://github.com/fgouveia708/arduino-jingle-bells#circuito)
    - [Notas musicais](https://github.com/fgouveia708/arduino-jingle-bells#notas-musicais)
    - [Luzes](https://github.com/fgouveia708/arduino-jingle-bells#luzes)

### Introdução

A ideia é criar uma aplicação com Arduino UNO, LEDs e Buzzer para tocar a música Jingle Bells.

### Circuito
                
[![Watch the video](https://github.com/fgouveia708/arduino-jingle-bells/blob/main/arduino-circuit.png)](https://drive.google.com/file/d/1me3hD2MsxUnsihaKxg7ShnOi_Uajx9rg/view?usp=sharing)

Assista: https://drive.google.com/file/d/1me3hD2MsxUnsihaKxg7ShnOi_Uajx9rg/view?usp=sharing


### Notas musicais

Para a reprodução dos acordes utilizando o Buzzer foi necessário mapear a frequência sonora em hertz (Hz).
                
| NOTA      | ACORDE | FREQUÊNCIA | 
| --------- | -----|-----|
| DÓ |C|261 Hz| 
| RÉ |D|293 Hz|
| MI |E|329 Hz|
| FA |F|349 Hz|
| SOL |G|392 Hz|
| LÁ |A|440 Hz|
| SI |B|494 Hz|

Os acordes utilizados na canção Jingle Bells são: **EEEEEEEGCDE FFFFFEEEEDDEDG**
 

### LUZES

Para cada nota tocada é acionado um LED. Abaixo a tabela de cores por nota:             
             
| NOTA      | ACORDE | COR | 
| --------- | -----|-----|
| DÓ |C|VERDE| 
| RÉ |D|LARANJA|
| MI |E|VERMELHO|
| FA |F|BRANCO|
| SOL |G|AZUL|
| LÁ |A|AMARELO|
| SI |B|VERDE|
