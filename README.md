# hash
## Idėja
Didelių pirminių skaičių laipsnio šaknimis, ištraukti šaknį ir keisti hashą, naudojant įvairias skaičių po kablelio sumas
## Algoritmas
Simbolis pakeičiamas į ASCII dešimtainį skaičių, iš jo ištraukiama 319 laipsnio šaknis ir sudedami 7 skaitmenys po kablelio,
kurie paskui paverčiami pirmu hasho šešioliktainiu skaičiumi. Kiekvienam kitam hasho elementui kiekvieną kartą paimami tolimesni
papildomi 5 skaitmenys, kurie vėl sudedami ir paverčiami į šešioliktainį. Sukūrus pirmus 8 hasho elementus paimamas naujas pirminis skaičius
ir procesas daromas iš naujo kol sugeneruojamas 32 simbolių hashas. Naudojami pirminiai skaičiai 319, 947, 727, 683.<br>
## Komandos
### Kompiliavimas
`g++ -O3 main.cpp -o hash`
### Teksto hashavimas
`hash.exe text`

1EF6EC2C5AE63EE8EF7966C6D5602BFD
### Failo paleidimas
`hash.exe f filename`

## Užduotys
### 1 Užduotis
failai iš vieno simbolio (0 ir 1)

`hash.exe f ../t1.txt`

7EA5421978123D2617A31A1BF55C18D7

`hash.exe f ../t2.txt`

F9F50FEBB20FF8EE4ECAD0B097E9E23D

***

failai su daug skirtingų simbolių

`hash.exe f ../t3.txt`

3F04AEC4D35DAC4E53783C95BC9A1C6B

`hash.exe f ../t4.txt`

B8D012E43F2E845FE12C33E4A6CD1FCE

***

daug simbolių, skiriasi tik vienu

`hash.exe f ../t5.txt`

46D4F30E8EE300930112713299100FF4

`hash.exe f ../t6.txt`

4B99647CF27628258B66648BDC5792A6

***

tuščias failas

`hash.exe f ../empty.txt`

nieko negaunama

### 2 Užduotis

`hash.exe f ../konstitucija.txt`

2C4A324E9E3FA78574509147A9571CF6

atlikta per 0.241264s 





