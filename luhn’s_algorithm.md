


[Luhn Algorithm | Modulus 10 or Mod 10 Algorithm | Credit Card Number validation Algorithm](https://www.youtube.com/watch?v=3e95iOJ9bNE&ab_channel=TinyTips)

https://www.youtube.com/watch?v=p_mO_jpihiw&ab_channel=BogdanBudaca

### Example

#### Credit Card Number: 4003600000000014

VISA

Number Lenght: 16
Payload Lenght: 15

Number|4|0|0|3|6|0|0|0|0|0|0|0|0|0|1|4|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
**i**ndex|1|2|3|4|5|6|7|8|9|10|11|12|13|14|15|16|

Check Digit|4|
|---|---|
**i**ndex|16|


Payload|4|0|0|3|6|0|0|0|0|0|0|0|0|0|1|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
**i**ndex|1|2|3|4|5|6|7|8|9|10|11|12|13|14|15|


#### Credit Card Number: 374245455400126

Number Lenght: 15
Payload Lenght: 14

Number|3|7|4|2|4|5|4|5|5|4|0|0|1|2|6|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
**i**ndex|1|2|3|4|5|6|7|8|9|10|11|12|13|14|15|

Check Digit|6|
|---|---|
**i**ndex|15|

Payload|3|7|4|2|4|5|4|5|5|4|0|0|1|2|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
**i**ndex|1|2|3|4|5|6|7|8|9|10|11|12|13|14|

soma dos impares = 21
soma dos pares deve ser = 23