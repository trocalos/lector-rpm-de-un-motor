# lector-rpm-de-un-motor
Proyecto para realizar un lector de rpm para los motores
En la asignatura de electrotecnia calculamos teóricamente la velocidad de los motores de corriente continua de imanes permanentes. Son esos motores pequeños que se utilizan en muchos pequeños electrodomésticos, juguetes, tu robot, ...

Queremos tener un dispositivo que sea capaz de decir cual es la velocidad de giro de un motor y ver si coincide con la teórica y sus variaciones cuando le cambiemos los parámetros que hacen teóricamente variar la velocidad.



Para ello utilizaremos Arduino.



En muchos sistemas de control se utilizan los encoders. Un buen punto de partida sería encontrar información sobre ellos. Y construir un encoder para acoplarlo en el motor. Lo diseñamos o bien con SkechUp o bien con TinkerCad.



El sensor ha de poder "leer" las revoluciones que da el encoder en un tiempo determinado.
Para ello  seguiremos los siguientes pasos:

1.
Os pongo el enlace del código que permite a Arduino leer los impulsos que le llegan en 5 segundos.
Lo primero es realizar el circuito y ver que os funciona.

2.
Lo segundo es cambiar el pulsador por cualquier  otro sensor, por ejemplo una LDR y decir que si detecta más de x lux lo toma como un input


